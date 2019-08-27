// Generated from resize_nearest_neighbor.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type20);
  auto param62 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy, param62}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type20);
  auto param63 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy1, param63}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type20);
  auto param64 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy2, param64}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type20);
  auto param65 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy3, param65}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  auto in_tmp = model->addOperand(&type21);
  auto dummy4 = model->addOperand(&type24);
  auto param66 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy4_init[] = {128};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy4, param66}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  auto in_tmp = model->addOperand(&type21);
  auto dummy5 = model->addOperand(&type24);
  auto param67 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy5_init[] = {128};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy5, param67}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type25);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type25);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type28);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  auto in_tmp = model->addOperand(&type28);
  auto dummy6 = model->addOperand(&type29);
  auto param68 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy6, param68}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type28);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  auto in_tmp = model->addOperand(&type28);
  auto dummy7 = model->addOperand(&type29);
  auto param69 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy7, param69}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type30);
  auto dummy8 = model->addOperand(&type20);
  auto param70 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy8, param70}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type30);
  auto dummy9 = model->addOperand(&type20);
  auto param71 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy9, param71}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type30);
  auto dummy10 = model->addOperand(&type20);
  auto param72 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy10, param72}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type30);
  auto dummy11 = model->addOperand(&type20);
  auto param73 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy11, param73}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  auto in_tmp = model->addOperand(&type31);
  auto dummy12 = model->addOperand(&type24);
  auto param74 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy12_init[] = {128};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy12, param74}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  auto in_tmp = model->addOperand(&type31);
  auto dummy13 = model->addOperand(&type24);
  auto param75 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy13_init[] = {128};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy13, param75}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type32);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type32);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  auto in_tmp = model->addOperand(&type33);
  auto dummy14 = model->addOperand(&type29);
  auto param76 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy14, param76}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  auto in_tmp = model->addOperand(&type33);
  auto dummy15 = model->addOperand(&type29);
  auto param77 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy15, param77}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type1);
  auto dummy16 = model->addOperand(&type20);
  auto param78 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy16, param78}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type20);
  auto param79 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy17, param79}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type1);
  auto dummy18 = model->addOperand(&type20);
  auto param80 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy18, param80}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type20);
  auto param81 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy19, param81}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  auto in_tmp = model->addOperand(&type21);
  auto dummy20 = model->addOperand(&type24);
  auto param82 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy20_init[] = {128};
  model->setOperandValue(dummy20, dummy20_init, sizeof(uint8_t) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy20, param82}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type21);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  auto in_tmp = model->addOperand(&type21);
  auto dummy21 = model->addOperand(&type24);
  auto param83 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy21_init[] = {128};
  model->setOperandValue(dummy21, dummy21_init, sizeof(uint8_t) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy21, param83}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type25);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type25);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type28);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  auto in_tmp = model->addOperand(&type28);
  auto dummy22 = model->addOperand(&type29);
  auto param84 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy22, param84}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type28);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  auto in_tmp = model->addOperand(&type28);
  auto dummy23 = model->addOperand(&type29);
  auto param85 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy23, param85}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type30);
  auto dummy24 = model->addOperand(&type20);
  auto param86 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy24, param86}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type30);
  auto dummy25 = model->addOperand(&type20);
  auto param87 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy25, param87}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  auto in_tmp = model->addOperand(&type30);
  auto dummy26 = model->addOperand(&type20);
  auto param88 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy26, param88}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type30);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  auto in_tmp = model->addOperand(&type30);
  auto dummy27 = model->addOperand(&type20);
  auto param89 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy27, param89}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type22);
  auto in_tmp = model->addOperand(&type31);
  auto dummy28 = model->addOperand(&type24);
  auto param90 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy28_init[] = {128};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy28, param90}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  auto in_tmp = model->addOperand(&type31);
  auto dummy29 = model->addOperand(&type24);
  auto param91 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy29_init[] = {128};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy29, param91}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type32);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type32);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  auto in_tmp = model->addOperand(&type33);
  auto dummy30 = model->addOperand(&type29);
  auto param92 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy30, param92}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type27);
  auto in_tmp = model->addOperand(&type33);
  auto dummy31 = model->addOperand(&type29);
  auto param93 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy31, param93}, {in});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy32 = model->addOperand(&type20);
  auto param94 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy32, param94}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy33 = model->addOperand(&type20);
  auto param95 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy33, param95}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy34 = model->addOperand(&type20);
  auto param96 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy34, param96}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy35 = model->addOperand(&type20);
  auto param97 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy35, param97}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  auto in1_tmp = model->addOperand(&type35);
  auto dummy36 = model->addOperand(&type38);
  auto param98 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy36_init[] = {0};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy36, param98}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  auto in1_tmp = model->addOperand(&type35);
  auto dummy37 = model->addOperand(&type38);
  auto param99 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy37_init[] = {0};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy37, param99}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type25);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type25);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type28);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type39);
  auto in1_tmp = model->addOperand(&type28);
  auto dummy38 = model->addOperand(&type29);
  auto param100 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy38, param100}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type28);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  auto in1_tmp = model->addOperand(&type28);
  auto dummy39 = model->addOperand(&type29);
  auto param101 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy39, param101}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy40 = model->addOperand(&type20);
  auto param102 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy40, param102}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy41 = model->addOperand(&type20);
  auto param103 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy41, param103}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy42 = model->addOperand(&type20);
  auto param104 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy42, param104}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy43 = model->addOperand(&type20);
  auto param105 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy43, param105}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type42);
  auto in1_tmp = model->addOperand(&type41);
  auto dummy44 = model->addOperand(&type38);
  auto param106 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy44_init[] = {0};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy44, param106}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  auto in1_tmp = model->addOperand(&type41);
  auto dummy45 = model->addOperand(&type38);
  auto param107 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy45_init[] = {0};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy45, param107}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type32);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type32);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type33);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type43);
  auto in1_tmp = model->addOperand(&type33);
  auto dummy46 = model->addOperand(&type29);
  auto param108 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy46, param108}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type33);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  auto in1_tmp = model->addOperand(&type33);
  auto dummy47 = model->addOperand(&type29);
  auto param109 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy47, param109}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy48 = model->addOperand(&type20);
  auto param110 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy48, param110}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy49 = model->addOperand(&type20);
  auto param111 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy49, param111}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy50 = model->addOperand(&type20);
  auto param112 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy50, param112}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy51 = model->addOperand(&type20);
  auto param113 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy51, param113}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  auto in1_tmp = model->addOperand(&type35);
  auto dummy52 = model->addOperand(&type38);
  auto param114 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy52_init[] = {0};
  model->setOperandValue(dummy52, dummy52_init, sizeof(uint8_t) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy52, param114}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  auto in1_tmp = model->addOperand(&type35);
  auto dummy53 = model->addOperand(&type38);
  auto param115 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy53_init[] = {0};
  model->setOperandValue(dummy53, dummy53_init, sizeof(uint8_t) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy53, param115}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type25);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type39);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type25);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type28);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type39);
  auto in1_tmp = model->addOperand(&type28);
  auto dummy54 = model->addOperand(&type29);
  auto param116 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy54, param116}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type28);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  auto in1_tmp = model->addOperand(&type28);
  auto dummy55 = model->addOperand(&type29);
  auto param117 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy55, param117}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy56 = model->addOperand(&type20);
  auto param118 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy56, param118}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy57 = model->addOperand(&type20);
  auto param119 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy57, param119}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy58 = model->addOperand(&type20);
  auto param120 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy58, param120}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  auto in1_tmp = model->addOperand(&type30);
  auto dummy59 = model->addOperand(&type20);
  auto param121 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy59, param121}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type42);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type42);
  auto in1_tmp = model->addOperand(&type41);
  auto dummy60 = model->addOperand(&type38);
  auto param122 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy60_init[] = {0};
  model->setOperandValue(dummy60, dummy60_init, sizeof(uint8_t) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy60, param122}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  // Phase 1, operands
  auto in1 = model->addOperand(&type41);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  auto in1_tmp = model->addOperand(&type41);
  auto dummy61 = model->addOperand(&type38);
  auto param123 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy61_init[] = {0};
  model->setOperandValue(dummy61, dummy61_init, sizeof(uint8_t) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy61, param123}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type32);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type43);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type32);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type33);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type43);
  auto in1_tmp = model->addOperand(&type33);
  auto dummy62 = model->addOperand(&type29);
  auto param124 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(_Float16) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy62, param124}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type33);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  auto in1_tmp = model->addOperand(&type33);
  auto dummy63 = model->addOperand(&type29);
  auto param125 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(_Float16) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy63, param125}, {in1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy64 = model->addOperand(&type20);
  auto param126 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy64, param126}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy65 = model->addOperand(&type20);
  auto param127 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy65, param127}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy66 = model->addOperand(&type20);
  auto param128 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy66, param128}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy67 = model->addOperand(&type20);
  auto param129 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy67, param129}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type45);
  auto in2_tmp = model->addOperand(&type44);
  auto dummy68 = model->addOperand(&type47);
  auto param130 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy68_init[] = {100};
  model->setOperandValue(dummy68, dummy68_init, sizeof(uint8_t) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy68, param130}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  auto in2_tmp = model->addOperand(&type44);
  auto dummy69 = model->addOperand(&type47);
  auto param131 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy69_init[] = {100};
  model->setOperandValue(dummy69, dummy69_init, sizeof(uint8_t) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy69, param131}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type39);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type39);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type48);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  auto in2_tmp = model->addOperand(&type48);
  auto dummy70 = model->addOperand(&type29);
  auto param132 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(_Float16) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy70, param132}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type48);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  auto in2_tmp = model->addOperand(&type48);
  auto dummy71 = model->addOperand(&type29);
  auto param133 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(_Float16) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy71, param133}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy72 = model->addOperand(&type20);
  auto param134 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy72, param134}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy73 = model->addOperand(&type20);
  auto param135 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy73, param135}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy74 = model->addOperand(&type20);
  auto param136 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy74, param136}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy75 = model->addOperand(&type20);
  auto param137 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy75, param137}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type50);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type50);
  auto in2_tmp = model->addOperand(&type49);
  auto dummy76 = model->addOperand(&type47);
  auto param138 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy76_init[] = {100};
  model->setOperandValue(dummy76, dummy76_init, sizeof(uint8_t) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy76, param138}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  auto in2_tmp = model->addOperand(&type49);
  auto dummy77 = model->addOperand(&type47);
  auto param139 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy77_init[] = {100};
  model->setOperandValue(dummy77, dummy77_init, sizeof(uint8_t) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy77, param139}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type43);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type43);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  auto in2_tmp = model->addOperand(&type51);
  auto dummy78 = model->addOperand(&type29);
  auto param140 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy78_init[] = {0.0f};
  model->setOperandValue(dummy78, dummy78_init, sizeof(_Float16) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy78, param140}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  auto in2_tmp = model->addOperand(&type51);
  auto dummy79 = model->addOperand(&type29);
  auto param141 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy79_init[] = {0.0f};
  model->setOperandValue(dummy79, dummy79_init, sizeof(_Float16) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy79, param141}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy80 = model->addOperand(&type20);
  auto param142 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(float) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy80, param142}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy81 = model->addOperand(&type20);
  auto param143 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(float) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy81, param143}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy82 = model->addOperand(&type20);
  auto param144 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(float) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy82, param144}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type5);
  auto dummy83 = model->addOperand(&type20);
  auto param145 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(float) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy83, param145}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type45);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type45);
  auto in2_tmp = model->addOperand(&type44);
  auto dummy84 = model->addOperand(&type47);
  auto param146 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy84_init[] = {100};
  model->setOperandValue(dummy84, dummy84_init, sizeof(uint8_t) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy84, param146}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type44);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  auto in2_tmp = model->addOperand(&type44);
  auto dummy85 = model->addOperand(&type47);
  auto param147 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy85_init[] = {100};
  model->setOperandValue(dummy85, dummy85_init, sizeof(uint8_t) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy85, param147}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type39);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type39);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type48);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  auto in2_tmp = model->addOperand(&type48);
  auto dummy86 = model->addOperand(&type29);
  auto param148 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(_Float16) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy86, param148}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type48);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  auto in2_tmp = model->addOperand(&type48);
  auto dummy87 = model->addOperand(&type29);
  auto param149 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(_Float16) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy87, param149}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy88 = model->addOperand(&type20);
  auto param150 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(float) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy88, param150}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy89 = model->addOperand(&type20);
  auto param151 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(float) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy89, param151}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy90 = model->addOperand(&type20);
  auto param152 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(float) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy90, param152}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type40);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  auto in2_tmp = model->addOperand(&type40);
  auto dummy91 = model->addOperand(&type20);
  auto param153 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(float) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy91, param153}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type50);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type50);
  auto in2_tmp = model->addOperand(&type49);
  auto dummy92 = model->addOperand(&type47);
  auto param154 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy92_init[] = {100};
  model->setOperandValue(dummy92, dummy92_init, sizeof(uint8_t) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy92, param154}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type46);
  auto in2_tmp = model->addOperand(&type49);
  auto dummy93 = model->addOperand(&type47);
  auto param155 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy93_init[] = {100};
  model->setOperandValue(dummy93, dummy93_init, sizeof(uint8_t) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy93, param155}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type43);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type43);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  auto in2_tmp = model->addOperand(&type51);
  auto dummy94 = model->addOperand(&type29);
  auto param156 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy94_init[] = {0.0f};
  model->setOperandValue(dummy94, dummy94_init, sizeof(_Float16) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy94, param156}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type27);
  auto in2_tmp = model->addOperand(&type51);
  auto dummy95 = model->addOperand(&type29);
  auto param157 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy95_init[] = {0.0f};
  model->setOperandValue(dummy95, dummy95_init, sizeof(_Float16) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy95, param157}, {in2});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy96 = model->addOperand(&type20);
  auto param158 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(float) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy96, param158}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy97 = model->addOperand(&type20);
  auto param159 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(float) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy97, param159}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy98 = model->addOperand(&type20);
  auto param160 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(float) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy98, param160}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy99 = model->addOperand(&type20);
  auto param161 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(float) * 1);
  static int32_t param161_init[] = {0};
  model->setOperandValue(param161, param161_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy99, param161}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type52);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type52);
  auto in3_tmp = model->addOperand(&type45);
  auto dummy100 = model->addOperand(&type47);
  auto param162 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy100_init[] = {100};
  model->setOperandValue(dummy100, dummy100_init, sizeof(uint8_t) * 1);
  static int32_t param162_init[] = {0};
  model->setOperandValue(param162, param162_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy100, param162}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  auto in3_tmp = model->addOperand(&type45);
  auto dummy101 = model->addOperand(&type47);
  auto param163 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy101_init[] = {100};
  model->setOperandValue(dummy101, dummy101_init, sizeof(uint8_t) * 1);
  static int32_t param163_init[] = {0};
  model->setOperandValue(param163, param163_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy101, param163}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type25);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type25);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type28);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type53);
  auto in3_tmp = model->addOperand(&type28);
  auto dummy102 = model->addOperand(&type29);
  auto param164 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy102_init[] = {0.0f};
  model->setOperandValue(dummy102, dummy102_init, sizeof(_Float16) * 1);
  static int32_t param164_init[] = {0};
  model->setOperandValue(param164, param164_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy102, param164}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type28);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  auto in3_tmp = model->addOperand(&type28);
  auto dummy103 = model->addOperand(&type29);
  auto param165 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy103_init[] = {0.0f};
  model->setOperandValue(dummy103, dummy103_init, sizeof(_Float16) * 1);
  static int32_t param165_init[] = {0};
  model->setOperandValue(param165, param165_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy103, param165}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy104 = model->addOperand(&type20);
  auto param166 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy104_init[] = {0.0f};
  model->setOperandValue(dummy104, dummy104_init, sizeof(float) * 1);
  static int32_t param166_init[] = {0};
  model->setOperandValue(param166, param166_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy104, param166}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy105 = model->addOperand(&type20);
  auto param167 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy105_init[] = {0.0f};
  model->setOperandValue(dummy105, dummy105_init, sizeof(float) * 1);
  static int32_t param167_init[] = {0};
  model->setOperandValue(param167, param167_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy105, param167}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy106 = model->addOperand(&type20);
  auto param168 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy106_init[] = {0.0f};
  model->setOperandValue(dummy106, dummy106_init, sizeof(float) * 1);
  static int32_t param168_init[] = {0};
  model->setOperandValue(param168, param168_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy106, param168}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy107 = model->addOperand(&type20);
  auto param169 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy107_init[] = {0.0f};
  model->setOperandValue(dummy107, dummy107_init, sizeof(float) * 1);
  static int32_t param169_init[] = {0};
  model->setOperandValue(param169, param169_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy107, param169}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type55);
  auto in3_tmp = model->addOperand(&type50);
  auto dummy108 = model->addOperand(&type47);
  auto param170 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy108_init[] = {100};
  model->setOperandValue(dummy108, dummy108_init, sizeof(uint8_t) * 1);
  static int32_t param170_init[] = {0};
  model->setOperandValue(param170, param170_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy108, param170}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  auto in3_tmp = model->addOperand(&type50);
  auto dummy109 = model->addOperand(&type47);
  auto param171 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy109_init[] = {100};
  model->setOperandValue(dummy109, dummy109_init, sizeof(uint8_t) * 1);
  static int32_t param171_init[] = {0};
  model->setOperandValue(param171, param171_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy109, param171}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type32);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type56);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type32);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type56);
  auto in3_tmp = model->addOperand(&type33);
  auto dummy110 = model->addOperand(&type29);
  auto param172 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy110_init[] = {0.0f};
  model->setOperandValue(dummy110, dummy110_init, sizeof(_Float16) * 1);
  static int32_t param172_init[] = {0};
  model->setOperandValue(param172, param172_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy110, param172}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  auto in3_tmp = model->addOperand(&type33);
  auto dummy111 = model->addOperand(&type29);
  auto param173 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param12_init[] = {5};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy111_init[] = {0.0f};
  model->setOperandValue(dummy111, dummy111_init, sizeof(_Float16) * 1);
  static int32_t param173_init[] = {0};
  model->setOperandValue(param173, param173_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy111, param173}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy112 = model->addOperand(&type20);
  auto param174 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy112_init[] = {0.0f};
  model->setOperandValue(dummy112, dummy112_init, sizeof(float) * 1);
  static int32_t param174_init[] = {0};
  model->setOperandValue(param174, param174_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy112, param174}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy113 = model->addOperand(&type20);
  auto param175 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy113_init[] = {0.0f};
  model->setOperandValue(dummy113, dummy113_init, sizeof(float) * 1);
  static int32_t param175_init[] = {0};
  model->setOperandValue(param175, param175_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy113, param175}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy114 = model->addOperand(&type20);
  auto param176 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy114_init[] = {0.0f};
  model->setOperandValue(dummy114, dummy114_init, sizeof(float) * 1);
  static int32_t param176_init[] = {0};
  model->setOperandValue(param176, param176_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy114, param176}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type1);
  auto dummy115 = model->addOperand(&type20);
  auto param177 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy115_init[] = {0.0f};
  model->setOperandValue(dummy115, dummy115_init, sizeof(float) * 1);
  static int32_t param177_init[] = {0};
  model->setOperandValue(param177, param177_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy115, param177}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type52);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type52);
  auto in3_tmp = model->addOperand(&type45);
  auto dummy116 = model->addOperand(&type47);
  auto param178 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy116_init[] = {100};
  model->setOperandValue(dummy116, dummy116_init, sizeof(uint8_t) * 1);
  static int32_t param178_init[] = {0};
  model->setOperandValue(param178, param178_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy116, param178}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type45);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  auto in3_tmp = model->addOperand(&type45);
  auto dummy117 = model->addOperand(&type47);
  auto param179 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy117_init[] = {100};
  model->setOperandValue(dummy117, dummy117_init, sizeof(uint8_t) * 1);
  static int32_t param179_init[] = {0};
  model->setOperandValue(param179, param179_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy117, param179}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type53(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type25);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type53);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type25);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type53(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type28);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type53);
  auto in3_tmp = model->addOperand(&type28);
  auto dummy118 = model->addOperand(&type29);
  auto param180 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy118_init[] = {0.0f};
  model->setOperandValue(dummy118, dummy118_init, sizeof(_Float16) * 1);
  static int32_t param180_init[] = {0};
  model->setOperandValue(param180, param180_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy118, param180}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type28);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  auto in3_tmp = model->addOperand(&type28);
  auto dummy119 = model->addOperand(&type29);
  auto param181 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy119_init[] = {0.0f};
  model->setOperandValue(dummy119, dummy119_init, sizeof(_Float16) * 1);
  static int32_t param181_init[] = {0};
  model->setOperandValue(param181, param181_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy119, param181}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy120 = model->addOperand(&type20);
  auto param182 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy120_init[] = {0.0f};
  model->setOperandValue(dummy120, dummy120_init, sizeof(float) * 1);
  static int32_t param182_init[] = {0};
  model->setOperandValue(param182, param182_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy120, param182}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy121 = model->addOperand(&type20);
  auto param183 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy121_init[] = {0.0f};
  model->setOperandValue(dummy121, dummy121_init, sizeof(float) * 1);
  static int32_t param183_init[] = {0};
  model->setOperandValue(param183, param183_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy121, param183}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type54);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy122 = model->addOperand(&type20);
  auto param184 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(float) * 1);
  static int32_t param184_init[] = {0};
  model->setOperandValue(param184, param184_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy122, param184}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  auto in3_tmp = model->addOperand(&type30);
  auto dummy123 = model->addOperand(&type20);
  auto param185 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(float) * 1);
  static int32_t param185_init[] = {0};
  model->setOperandValue(param185, param185_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy123, param185}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type55);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type55);
  auto in3_tmp = model->addOperand(&type50);
  auto dummy124 = model->addOperand(&type47);
  auto param186 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy124_init[] = {100};
  model->setOperandValue(dummy124, dummy124_init, sizeof(uint8_t) * 1);
  static int32_t param186_init[] = {0};
  model->setOperandValue(param186, param186_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy124, param186}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type46);
  auto in3_tmp = model->addOperand(&type50);
  auto dummy125 = model->addOperand(&type47);
  auto param187 = model->addOperand(&type3);
  // Phase 2, operations
  static float param14_init[] = {2.6f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {1.1f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy125_init[] = {100};
  model->setOperandValue(dummy125, dummy125_init, sizeof(uint8_t) * 1);
  static int32_t param187_init[] = {0};
  model->setOperandValue(param187, param187_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy125, param187}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type32);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type56);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type32);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type56);
  auto in3_tmp = model->addOperand(&type33);
  auto dummy126 = model->addOperand(&type29);
  auto param188 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy126_init[] = {0.0f};
  model->setOperandValue(dummy126, dummy126_init, sizeof(_Float16) * 1);
  static int32_t param188_init[] = {0};
  model->setOperandValue(param188, param188_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy126, param188}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param14 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type27);
  auto in3_tmp = model->addOperand(&type33);
  auto dummy127 = model->addOperand(&type29);
  auto param189 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param14_init[] = {2.5999999046325684f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {1.100000023841858f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy127_init[] = {0.0f};
  model->setOperandValue(dummy127, dummy127_init, sizeof(_Float16) * 1);
  static int32_t param189_init[] = {0};
  model->setOperandValue(param189, param189_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy127, param189}, {in3});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy128 = model->addOperand(&type20);
  auto param190 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy128_init[] = {0.0f};
  model->setOperandValue(dummy128, dummy128_init, sizeof(float) * 1);
  static int32_t param190_init[] = {0};
  model->setOperandValue(param190, param190_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy128, param190}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy129 = model->addOperand(&type20);
  auto param191 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy129_init[] = {0.0f};
  model->setOperandValue(dummy129, dummy129_init, sizeof(float) * 1);
  static int32_t param191_init[] = {0};
  model->setOperandValue(param191, param191_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy129, param191}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy130 = model->addOperand(&type20);
  auto param192 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy130_init[] = {0.0f};
  model->setOperandValue(dummy130, dummy130_init, sizeof(float) * 1);
  static int32_t param192_init[] = {0};
  model->setOperandValue(param192, param192_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy130, param192}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy131 = model->addOperand(&type20);
  auto param193 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy131_init[] = {0.0f};
  model->setOperandValue(dummy131, dummy131_init, sizeof(float) * 1);
  static int32_t param193_init[] = {0};
  model->setOperandValue(param193, param193_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy131, param193}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type44);
  auto in4_tmp = model->addOperand(&type57);
  auto dummy132 = model->addOperand(&type47);
  auto param194 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy132_init[] = {100};
  model->setOperandValue(dummy132, dummy132_init, sizeof(uint8_t) * 1);
  static int32_t param194_init[] = {0};
  model->setOperandValue(param194, param194_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy132, param194}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  auto in4_tmp = model->addOperand(&type57);
  auto dummy133 = model->addOperand(&type47);
  auto param195 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy133_init[] = {100};
  model->setOperandValue(dummy133, dummy133_init, sizeof(uint8_t) * 1);
  static int32_t param195_init[] = {0};
  model->setOperandValue(param195, param195_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy133, param195}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type58);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type58);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type59(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type59);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type39);
  auto in4_tmp = model->addOperand(&type59);
  auto dummy134 = model->addOperand(&type29);
  auto param196 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy134_init[] = {0.0f};
  model->setOperandValue(dummy134, dummy134_init, sizeof(_Float16) * 1);
  static int32_t param196_init[] = {0};
  model->setOperandValue(param196, param196_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy134, param196}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type59(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type59);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  auto in4_tmp = model->addOperand(&type59);
  auto dummy135 = model->addOperand(&type29);
  auto param197 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy135_init[] = {0.0f};
  model->setOperandValue(dummy135, dummy135_init, sizeof(_Float16) * 1);
  static int32_t param197_init[] = {0};
  model->setOperandValue(param197, param197_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy135, param197}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy136 = model->addOperand(&type20);
  auto param198 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy136_init[] = {0.0f};
  model->setOperandValue(dummy136, dummy136_init, sizeof(float) * 1);
  static int32_t param198_init[] = {0};
  model->setOperandValue(param198, param198_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy136, param198}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy137 = model->addOperand(&type20);
  auto param199 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy137_init[] = {0.0f};
  model->setOperandValue(dummy137, dummy137_init, sizeof(float) * 1);
  static int32_t param199_init[] = {0};
  model->setOperandValue(param199, param199_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy137, param199}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy138 = model->addOperand(&type20);
  auto param200 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy138_init[] = {0.0f};
  model->setOperandValue(dummy138, dummy138_init, sizeof(float) * 1);
  static int32_t param200_init[] = {0};
  model->setOperandValue(param200, param200_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy138, param200}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy139 = model->addOperand(&type20);
  auto param201 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy139_init[] = {0.0f};
  model->setOperandValue(dummy139, dummy139_init, sizeof(float) * 1);
  static int32_t param201_init[] = {0};
  model->setOperandValue(param201, param201_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy139, param201}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type49);
  auto in4_tmp = model->addOperand(&type61);
  auto dummy140 = model->addOperand(&type47);
  auto param202 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy140_init[] = {100};
  model->setOperandValue(dummy140, dummy140_init, sizeof(uint8_t) * 1);
  static int32_t param202_init[] = {0};
  model->setOperandValue(param202, param202_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy140, param202}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  auto in4_tmp = model->addOperand(&type61);
  auto dummy141 = model->addOperand(&type47);
  auto param203 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy141_init[] = {100};
  model->setOperandValue(dummy141, dummy141_init, sizeof(uint8_t) * 1);
  static int32_t param203_init[] = {0};
  model->setOperandValue(param203, param203_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy141, param203}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type62);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type62);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type63);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type43);
  auto in4_tmp = model->addOperand(&type63);
  auto dummy142 = model->addOperand(&type29);
  auto param204 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy142_init[] = {0.0f};
  model->setOperandValue(dummy142, dummy142_init, sizeof(_Float16) * 1);
  static int32_t param204_init[] = {0};
  model->setOperandValue(param204, param204_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy142, param204}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type63);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  auto in4_tmp = model->addOperand(&type63);
  auto dummy143 = model->addOperand(&type29);
  auto param205 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy143_init[] = {0.0f};
  model->setOperandValue(dummy143, dummy143_init, sizeof(_Float16) * 1);
  static int32_t param205_init[] = {0};
  model->setOperandValue(param205, param205_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy143, param205}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy144 = model->addOperand(&type20);
  auto param206 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy144_init[] = {0.0f};
  model->setOperandValue(dummy144, dummy144_init, sizeof(float) * 1);
  static int32_t param206_init[] = {0};
  model->setOperandValue(param206, param206_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy144, param206}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy145 = model->addOperand(&type20);
  auto param207 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy145_init[] = {0.0f};
  model->setOperandValue(dummy145, dummy145_init, sizeof(float) * 1);
  static int32_t param207_init[] = {0};
  model->setOperandValue(param207, param207_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy145, param207}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy146 = model->addOperand(&type20);
  auto param208 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy146_init[] = {0.0f};
  model->setOperandValue(dummy146, dummy146_init, sizeof(float) * 1);
  static int32_t param208_init[] = {0};
  model->setOperandValue(param208, param208_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy146, param208}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type7);
  auto dummy147 = model->addOperand(&type20);
  auto param209 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy147_init[] = {0.0f};
  model->setOperandValue(dummy147, dummy147_init, sizeof(float) * 1);
  static int32_t param209_init[] = {0};
  model->setOperandValue(param209, param209_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy147, param209}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type44);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type44);
  auto in4_tmp = model->addOperand(&type57);
  auto dummy148 = model->addOperand(&type47);
  auto param210 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy148_init[] = {100};
  model->setOperandValue(dummy148, dummy148_init, sizeof(uint8_t) * 1);
  static int32_t param210_init[] = {0};
  model->setOperandValue(param210, param210_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy148, param210}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type57);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  auto in4_tmp = model->addOperand(&type57);
  auto dummy149 = model->addOperand(&type47);
  auto param211 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy149_init[] = {100};
  model->setOperandValue(dummy149, dummy149_init, sizeof(uint8_t) * 1);
  static int32_t param211_init[] = {0};
  model->setOperandValue(param211, param211_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy149, param211}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type58);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type39);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type58);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type59(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type59);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type39);
  auto in4_tmp = model->addOperand(&type59);
  auto dummy150 = model->addOperand(&type29);
  auto param212 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy150_init[] = {0.0f};
  model->setOperandValue(dummy150, dummy150_init, sizeof(_Float16) * 1);
  static int32_t param212_init[] = {0};
  model->setOperandValue(param212, param212_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy150, param212}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type59(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type59);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  auto in4_tmp = model->addOperand(&type59);
  auto dummy151 = model->addOperand(&type29);
  auto param213 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy151_init[] = {0.0f};
  model->setOperandValue(dummy151, dummy151_init, sizeof(_Float16) * 1);
  static int32_t param213_init[] = {0};
  model->setOperandValue(param213, param213_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy151, param213}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy152 = model->addOperand(&type20);
  auto param214 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy152_init[] = {0.0f};
  model->setOperandValue(dummy152, dummy152_init, sizeof(float) * 1);
  static int32_t param214_init[] = {0};
  model->setOperandValue(param214, param214_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy152, param214}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy153 = model->addOperand(&type20);
  auto param215 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy153_init[] = {0.0f};
  model->setOperandValue(dummy153, dummy153_init, sizeof(float) * 1);
  static int32_t param215_init[] = {0};
  model->setOperandValue(param215, param215_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy153, param215}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type40);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy154 = model->addOperand(&type20);
  auto param216 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy154_init[] = {0.0f};
  model->setOperandValue(dummy154, dummy154_init, sizeof(float) * 1);
  static int32_t param216_init[] = {0};
  model->setOperandValue(param216, param216_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy154, param216}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type60);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  auto in4_tmp = model->addOperand(&type60);
  auto dummy155 = model->addOperand(&type20);
  auto param217 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy155_init[] = {0.0f};
  model->setOperandValue(dummy155, dummy155_init, sizeof(float) * 1);
  static int32_t param217_init[] = {0};
  model->setOperandValue(param217, param217_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy155, param217}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type49);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type49);
  auto in4_tmp = model->addOperand(&type61);
  auto dummy156 = model->addOperand(&type47);
  auto param218 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy156_init[] = {100};
  model->setOperandValue(dummy156, dummy156_init, sizeof(uint8_t) * 1);
  static int32_t param218_init[] = {0};
  model->setOperandValue(param218, param218_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy156, param218}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type61);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type46);
  auto in4_tmp = model->addOperand(&type61);
  auto dummy157 = model->addOperand(&type47);
  auto param219 = model->addOperand(&type3);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy157_init[] = {100};
  model->setOperandValue(dummy157, dummy157_init, sizeof(uint8_t) * 1);
  static int32_t param219_init[] = {0};
  model->setOperandValue(param219, param219_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy157, param219}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type62);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type43);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type62);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type63);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type43);
  auto in4_tmp = model->addOperand(&type63);
  auto dummy158 = model->addOperand(&type29);
  auto param220 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy158_init[] = {0.0f};
  model->setOperandValue(dummy158, dummy158_init, sizeof(_Float16) * 1);
  static int32_t param220_init[] = {0};
  model->setOperandValue(param220, param220_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy158, param220}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type63);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type27);
  auto in4_tmp = model->addOperand(&type63);
  auto dummy159 = model->addOperand(&type29);
  auto param221 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy159_init[] = {0.0f};
  model->setOperandValue(dummy159, dummy159_init, sizeof(_Float16) * 1);
  static int32_t param221_init[] = {0};
  model->setOperandValue(param221, param221_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in4_tmp, dummy159, param221}, {in4});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy160 = model->addOperand(&type20);
  auto param222 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy160_init[] = {0.0f};
  model->setOperandValue(dummy160, dummy160_init, sizeof(float) * 1);
  static int32_t param222_init[] = {0};
  model->setOperandValue(param222, param222_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy160, param222}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy161 = model->addOperand(&type20);
  auto param223 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy161_init[] = {0.0f};
  model->setOperandValue(dummy161, dummy161_init, sizeof(float) * 1);
  static int32_t param223_init[] = {0};
  model->setOperandValue(param223, param223_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy161, param223}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy162 = model->addOperand(&type20);
  auto param224 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy162_init[] = {0.0f};
  model->setOperandValue(dummy162, dummy162_init, sizeof(float) * 1);
  static int32_t param224_init[] = {0};
  model->setOperandValue(param224, param224_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy162, param224}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy163 = model->addOperand(&type20);
  auto param225 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy163_init[] = {0.0f};
  model->setOperandValue(dummy163, dummy163_init, sizeof(float) * 1);
  static int32_t param225_init[] = {0};
  model->setOperandValue(param225, param225_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy163, param225}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type64(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type64);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type64(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type64);
  auto in5_tmp = model->addOperand(&type45);
  auto dummy164 = model->addOperand(&type47);
  auto param226 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy164_init[] = {100};
  model->setOperandValue(dummy164, dummy164_init, sizeof(uint8_t) * 1);
  static int32_t param226_init[] = {0};
  model->setOperandValue(param226, param226_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy164, param226}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  auto in5_tmp = model->addOperand(&type45);
  auto dummy165 = model->addOperand(&type47);
  auto param227 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy165_init[] = {100};
  model->setOperandValue(dummy165, dummy165_init, sizeof(uint8_t) * 1);
  static int32_t param227_init[] = {0};
  model->setOperandValue(param227, param227_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy165, param227}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type25);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type65);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type25);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type28);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type65);
  auto in5_tmp = model->addOperand(&type28);
  auto dummy166 = model->addOperand(&type29);
  auto param228 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy166_init[] = {0.0f};
  model->setOperandValue(dummy166, dummy166_init, sizeof(_Float16) * 1);
  static int32_t param228_init[] = {0};
  model->setOperandValue(param228, param228_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy166, param228}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type28);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  auto in5_tmp = model->addOperand(&type28);
  auto dummy167 = model->addOperand(&type29);
  auto param229 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy167_init[] = {0.0f};
  model->setOperandValue(dummy167, dummy167_init, sizeof(_Float16) * 1);
  static int32_t param229_init[] = {0};
  model->setOperandValue(param229, param229_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy167, param229}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy168 = model->addOperand(&type20);
  auto param230 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy168_init[] = {0.0f};
  model->setOperandValue(dummy168, dummy168_init, sizeof(float) * 1);
  static int32_t param230_init[] = {0};
  model->setOperandValue(param230, param230_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy168, param230}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy169 = model->addOperand(&type20);
  auto param231 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy169_init[] = {0.0f};
  model->setOperandValue(dummy169, dummy169_init, sizeof(float) * 1);
  static int32_t param231_init[] = {0};
  model->setOperandValue(param231, param231_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy169, param231}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy170 = model->addOperand(&type20);
  auto param232 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy170_init[] = {0.0f};
  model->setOperandValue(dummy170, dummy170_init, sizeof(float) * 1);
  static int32_t param232_init[] = {0};
  model->setOperandValue(param232, param232_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy170, param232}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy171 = model->addOperand(&type20);
  auto param233 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy171_init[] = {0.0f};
  model->setOperandValue(dummy171, dummy171_init, sizeof(float) * 1);
  static int32_t param233_init[] = {0};
  model->setOperandValue(param233, param233_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy171, param233}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type67);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type67);
  auto in5_tmp = model->addOperand(&type50);
  auto dummy172 = model->addOperand(&type47);
  auto param234 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy172_init[] = {100};
  model->setOperandValue(dummy172, dummy172_init, sizeof(uint8_t) * 1);
  static int32_t param234_init[] = {0};
  model->setOperandValue(param234, param234_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy172, param234}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  auto in5_tmp = model->addOperand(&type50);
  auto dummy173 = model->addOperand(&type47);
  auto param235 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy173_init[] = {100};
  model->setOperandValue(dummy173, dummy173_init, sizeof(uint8_t) * 1);
  static int32_t param235_init[] = {0};
  model->setOperandValue(param235, param235_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy173, param235}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type68(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type32);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type68);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type32);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type68(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type68);
  auto in5_tmp = model->addOperand(&type33);
  auto dummy174 = model->addOperand(&type29);
  auto param236 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy174_init[] = {0.0f};
  model->setOperandValue(dummy174, dummy174_init, sizeof(_Float16) * 1);
  static int32_t param236_init[] = {0};
  model->setOperandValue(param236, param236_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy174, param236}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  auto in5_tmp = model->addOperand(&type33);
  auto dummy175 = model->addOperand(&type29);
  auto param237 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {5};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy175_init[] = {0.0f};
  model->setOperandValue(dummy175, dummy175_init, sizeof(_Float16) * 1);
  static int32_t param237_init[] = {0};
  model->setOperandValue(param237, param237_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy175, param237}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy176 = model->addOperand(&type20);
  auto param238 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy176_init[] = {0.0f};
  model->setOperandValue(dummy176, dummy176_init, sizeof(float) * 1);
  static int32_t param238_init[] = {0};
  model->setOperandValue(param238, param238_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy176, param238}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy177 = model->addOperand(&type20);
  auto param239 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy177_init[] = {0.0f};
  model->setOperandValue(dummy177, dummy177_init, sizeof(float) * 1);
  static int32_t param239_init[] = {0};
  model->setOperandValue(param239, param239_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy177, param239}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy178 = model->addOperand(&type20);
  auto param240 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy178_init[] = {0.0f};
  model->setOperandValue(dummy178, dummy178_init, sizeof(float) * 1);
  static int32_t param240_init[] = {0};
  model->setOperandValue(param240, param240_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy178, param240}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type1);
  auto dummy179 = model->addOperand(&type20);
  auto param241 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy179_init[] = {0.0f};
  model->setOperandValue(dummy179, dummy179_init, sizeof(float) * 1);
  static int32_t param241_init[] = {0};
  model->setOperandValue(param241, param241_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy179, param241}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type64(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type64);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type64(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type64);
  auto in5_tmp = model->addOperand(&type45);
  auto dummy180 = model->addOperand(&type47);
  auto param242 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy180_init[] = {100};
  model->setOperandValue(dummy180, dummy180_init, sizeof(uint8_t) * 1);
  static int32_t param242_init[] = {0};
  model->setOperandValue(param242, param242_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy180, param242}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type45);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  auto in5_tmp = model->addOperand(&type45);
  auto dummy181 = model->addOperand(&type47);
  auto param243 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy181_init[] = {100};
  model->setOperandValue(dummy181, dummy181_init, sizeof(uint8_t) * 1);
  static int32_t param243_init[] = {0};
  model->setOperandValue(param243, param243_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy181, param243}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type25);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type65);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type25);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type28);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type65);
  auto in5_tmp = model->addOperand(&type28);
  auto dummy182 = model->addOperand(&type29);
  auto param244 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy182_init[] = {0.0f};
  model->setOperandValue(dummy182, dummy182_init, sizeof(_Float16) * 1);
  static int32_t param244_init[] = {0};
  model->setOperandValue(param244, param244_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy182, param244}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type28);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  auto in5_tmp = model->addOperand(&type28);
  auto dummy183 = model->addOperand(&type29);
  auto param245 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy183_init[] = {0.0f};
  model->setOperandValue(dummy183, dummy183_init, sizeof(_Float16) * 1);
  static int32_t param245_init[] = {0};
  model->setOperandValue(param245, param245_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy183, param245}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy184 = model->addOperand(&type20);
  auto param246 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy184_init[] = {0.0f};
  model->setOperandValue(dummy184, dummy184_init, sizeof(float) * 1);
  static int32_t param246_init[] = {0};
  model->setOperandValue(param246, param246_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy184, param246}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy185 = model->addOperand(&type20);
  auto param247 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy185_init[] = {0.0f};
  model->setOperandValue(dummy185, dummy185_init, sizeof(float) * 1);
  static int32_t param247_init[] = {0};
  model->setOperandValue(param247, param247_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy185, param247}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type66(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type66);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy186 = model->addOperand(&type20);
  auto param248 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy186_init[] = {0.0f};
  model->setOperandValue(dummy186, dummy186_init, sizeof(float) * 1);
  static int32_t param248_init[] = {0};
  model->setOperandValue(param248, param248_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy186, param248}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type30);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  auto in5_tmp = model->addOperand(&type30);
  auto dummy187 = model->addOperand(&type20);
  auto param249 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy187_init[] = {0.0f};
  model->setOperandValue(dummy187, dummy187_init, sizeof(float) * 1);
  static int32_t param249_init[] = {0};
  model->setOperandValue(param249, param249_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy187, param249}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type67);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type67);
  auto in5_tmp = model->addOperand(&type50);
  auto dummy188 = model->addOperand(&type47);
  auto param250 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy188_init[] = {100};
  model->setOperandValue(dummy188, dummy188_init, sizeof(uint8_t) * 1);
  static int32_t param250_init[] = {0};
  model->setOperandValue(param250, param250_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy188, param250}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type50);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  auto in5_tmp = model->addOperand(&type50);
  auto dummy189 = model->addOperand(&type47);
  auto param251 = model->addOperand(&type3);
  // Phase 2, operations
  static float param22_init[] = {1.4f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {2.8f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy189_init[] = {100};
  model->setOperandValue(dummy189, dummy189_init, sizeof(uint8_t) * 1);
  static int32_t param251_init[] = {0};
  model->setOperandValue(param251, param251_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy189, param251}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type68(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type32);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type68);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type32);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type68(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type68);
  auto in5_tmp = model->addOperand(&type33);
  auto dummy190 = model->addOperand(&type29);
  auto param252 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy190_init[] = {0.0f};
  model->setOperandValue(dummy190, dummy190_init, sizeof(_Float16) * 1);
  static int32_t param252_init[] = {0};
  model->setOperandValue(param252, param252_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy190, param252}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type27);
  auto in5_tmp = model->addOperand(&type33);
  auto dummy191 = model->addOperand(&type29);
  auto param253 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param22_init[] = {1.399999976158142f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {2.799999952316284f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy191_init[] = {0.0f};
  model->setOperandValue(dummy191, dummy191_init, sizeof(_Float16) * 1);
  static int32_t param253_init[] = {0};
  model->setOperandValue(param253, param253_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy191, param253}, {in5});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp},
    {out5});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy192 = model->addOperand(&type20);
  auto param254 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy192_init[] = {0.0f};
  model->setOperandValue(dummy192, dummy192_init, sizeof(float) * 1);
  static int32_t param254_init[] = {0};
  model->setOperandValue(param254, param254_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy192, param254}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy193 = model->addOperand(&type20);
  auto param255 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy193_init[] = {0.0f};
  model->setOperandValue(dummy193, dummy193_init, sizeof(float) * 1);
  static int32_t param255_init[] = {0};
  model->setOperandValue(param255, param255_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy193, param255}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy194 = model->addOperand(&type20);
  auto param256 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy194_init[] = {0.0f};
  model->setOperandValue(dummy194, dummy194_init, sizeof(float) * 1);
  static int32_t param256_init[] = {0};
  model->setOperandValue(param256, param256_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy194, param256}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy195 = model->addOperand(&type20);
  auto param257 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy195_init[] = {0.0f};
  model->setOperandValue(dummy195, dummy195_init, sizeof(float) * 1);
  static int32_t param257_init[] = {0};
  model->setOperandValue(param257, param257_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy195, param257}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type57);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type57);
  auto in6_tmp = model->addOperand(&type45);
  auto dummy196 = model->addOperand(&type47);
  auto param258 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy196_init[] = {100};
  model->setOperandValue(dummy196, dummy196_init, sizeof(uint8_t) * 1);
  static int32_t param258_init[] = {0};
  model->setOperandValue(param258, param258_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy196, param258}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  auto in6_tmp = model->addOperand(&type45);
  auto dummy197 = model->addOperand(&type47);
  auto param259 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy197_init[] = {100};
  model->setOperandValue(dummy197, dummy197_init, sizeof(uint8_t) * 1);
  static int32_t param259_init[] = {0};
  model->setOperandValue(param259, param259_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy197, param259}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type25);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type25);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type28);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type58);
  auto in6_tmp = model->addOperand(&type28);
  auto dummy198 = model->addOperand(&type29);
  auto param260 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy198_init[] = {0.0f};
  model->setOperandValue(dummy198, dummy198_init, sizeof(_Float16) * 1);
  static int32_t param260_init[] = {0};
  model->setOperandValue(param260, param260_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy198, param260}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type28);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  auto in6_tmp = model->addOperand(&type28);
  auto dummy199 = model->addOperand(&type29);
  auto param261 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy199_init[] = {0.0f};
  model->setOperandValue(dummy199, dummy199_init, sizeof(_Float16) * 1);
  static int32_t param261_init[] = {0};
  model->setOperandValue(param261, param261_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy199, param261}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy200 = model->addOperand(&type20);
  auto param262 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy200_init[] = {0.0f};
  model->setOperandValue(dummy200, dummy200_init, sizeof(float) * 1);
  static int32_t param262_init[] = {0};
  model->setOperandValue(param262, param262_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy200, param262}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy201 = model->addOperand(&type20);
  auto param263 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy201_init[] = {0.0f};
  model->setOperandValue(dummy201, dummy201_init, sizeof(float) * 1);
  static int32_t param263_init[] = {0};
  model->setOperandValue(param263, param263_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy201, param263}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy202 = model->addOperand(&type20);
  auto param264 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy202_init[] = {0.0f};
  model->setOperandValue(dummy202, dummy202_init, sizeof(float) * 1);
  static int32_t param264_init[] = {0};
  model->setOperandValue(param264, param264_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy202, param264}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy203 = model->addOperand(&type20);
  auto param265 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy203_init[] = {0.0f};
  model->setOperandValue(dummy203, dummy203_init, sizeof(float) * 1);
  static int32_t param265_init[] = {0};
  model->setOperandValue(param265, param265_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy203, param265}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type61);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type61);
  auto in6_tmp = model->addOperand(&type50);
  auto dummy204 = model->addOperand(&type47);
  auto param266 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy204_init[] = {100};
  model->setOperandValue(dummy204, dummy204_init, sizeof(uint8_t) * 1);
  static int32_t param266_init[] = {0};
  model->setOperandValue(param266, param266_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy204, param266}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  auto in6_tmp = model->addOperand(&type50);
  auto dummy205 = model->addOperand(&type47);
  auto param267 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy205_init[] = {100};
  model->setOperandValue(dummy205, dummy205_init, sizeof(uint8_t) * 1);
  static int32_t param267_init[] = {0};
  model->setOperandValue(param267, param267_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy205, param267}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type32);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type62);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in6 = model->addOperand(&type32);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type62);
  auto in6_tmp = model->addOperand(&type33);
  auto dummy206 = model->addOperand(&type29);
  auto param268 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy206_init[] = {0.0f};
  model->setOperandValue(dummy206, dummy206_init, sizeof(_Float16) * 1);
  static int32_t param268_init[] = {0};
  model->setOperandValue(param268, param268_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy206, param268}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  auto in6_tmp = model->addOperand(&type33);
  auto dummy207 = model->addOperand(&type29);
  auto param269 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy207_init[] = {0.0f};
  model->setOperandValue(dummy207, dummy207_init, sizeof(_Float16) * 1);
  static int32_t param269_init[] = {0};
  model->setOperandValue(param269, param269_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy207, param269}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy208 = model->addOperand(&type20);
  auto param270 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy208_init[] = {0.0f};
  model->setOperandValue(dummy208, dummy208_init, sizeof(float) * 1);
  static int32_t param270_init[] = {0};
  model->setOperandValue(param270, param270_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy208, param270}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy209 = model->addOperand(&type20);
  auto param271 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy209_init[] = {0.0f};
  model->setOperandValue(dummy209, dummy209_init, sizeof(float) * 1);
  static int32_t param271_init[] = {0};
  model->setOperandValue(param271, param271_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy209, param271}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy210 = model->addOperand(&type20);
  auto param272 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy210_init[] = {0.0f};
  model->setOperandValue(dummy210, dummy210_init, sizeof(float) * 1);
  static int32_t param272_init[] = {0};
  model->setOperandValue(param272, param272_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy210, param272}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type1);
  auto dummy211 = model->addOperand(&type20);
  auto param273 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy211_init[] = {0.0f};
  model->setOperandValue(dummy211, dummy211_init, sizeof(float) * 1);
  static int32_t param273_init[] = {0};
  model->setOperandValue(param273, param273_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy211, param273}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type57);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type57);
  auto in6_tmp = model->addOperand(&type45);
  auto dummy212 = model->addOperand(&type47);
  auto param274 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy212_init[] = {100};
  model->setOperandValue(dummy212, dummy212_init, sizeof(uint8_t) * 1);
  static int32_t param274_init[] = {0};
  model->setOperandValue(param274, param274_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy212, param274}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  auto in6_tmp = model->addOperand(&type45);
  auto dummy213 = model->addOperand(&type47);
  auto param275 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy213_init[] = {100};
  model->setOperandValue(dummy213, dummy213_init, sizeof(uint8_t) * 1);
  static int32_t param275_init[] = {0};
  model->setOperandValue(param275, param275_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy213, param275}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type25);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type25);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type28);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type58);
  auto in6_tmp = model->addOperand(&type28);
  auto dummy214 = model->addOperand(&type29);
  auto param276 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy214_init[] = {0.0f};
  model->setOperandValue(dummy214, dummy214_init, sizeof(_Float16) * 1);
  static int32_t param276_init[] = {0};
  model->setOperandValue(param276, param276_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy214, param276}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type28);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  auto in6_tmp = model->addOperand(&type28);
  auto dummy215 = model->addOperand(&type29);
  auto param277 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy215_init[] = {0.0f};
  model->setOperandValue(dummy215, dummy215_init, sizeof(_Float16) * 1);
  static int32_t param277_init[] = {0};
  model->setOperandValue(param277, param277_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy215, param277}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy216 = model->addOperand(&type20);
  auto param278 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy216_init[] = {0.0f};
  model->setOperandValue(dummy216, dummy216_init, sizeof(float) * 1);
  static int32_t param278_init[] = {0};
  model->setOperandValue(param278, param278_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy216, param278}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy217 = model->addOperand(&type20);
  auto param279 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy217_init[] = {0.0f};
  model->setOperandValue(dummy217, dummy217_init, sizeof(float) * 1);
  static int32_t param279_init[] = {0};
  model->setOperandValue(param279, param279_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy217, param279}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type60);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy218 = model->addOperand(&type20);
  auto param280 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy218_init[] = {0.0f};
  model->setOperandValue(dummy218, dummy218_init, sizeof(float) * 1);
  static int32_t param280_init[] = {0};
  model->setOperandValue(param280, param280_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy218, param280}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type30);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  auto in6_tmp = model->addOperand(&type30);
  auto dummy219 = model->addOperand(&type20);
  auto param281 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy219_init[] = {0.0f};
  model->setOperandValue(dummy219, dummy219_init, sizeof(float) * 1);
  static int32_t param281_init[] = {0};
  model->setOperandValue(param281, param281_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy219, param281}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type61);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type61);
  auto in6_tmp = model->addOperand(&type50);
  auto dummy220 = model->addOperand(&type47);
  auto param282 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy220_init[] = {100};
  model->setOperandValue(dummy220, dummy220_init, sizeof(uint8_t) * 1);
  static int32_t param282_init[] = {0};
  model->setOperandValue(param282, param282_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy220, param282}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type50);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type46);
  auto in6_tmp = model->addOperand(&type50);
  auto dummy221 = model->addOperand(&type47);
  auto param283 = model->addOperand(&type3);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy221_init[] = {100};
  model->setOperandValue(dummy221, dummy221_init, sizeof(uint8_t) * 1);
  static int32_t param283_init[] = {0};
  model->setOperandValue(param283, param283_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy221, param283}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type32);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type62);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type32);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type62);
  auto in6_tmp = model->addOperand(&type33);
  auto dummy222 = model->addOperand(&type29);
  auto param284 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy222_init[] = {0.0f};
  model->setOperandValue(dummy222, dummy222_init, sizeof(_Float16) * 1);
  static int32_t param284_init[] = {0};
  model->setOperandValue(param284, param284_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy222, param284}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param26 = model->addOperand(&type34);
  auto param27 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type27);
  auto in6_tmp = model->addOperand(&type33);
  auto dummy223 = model->addOperand(&type29);
  auto param285 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy223_init[] = {0.0f};
  model->setOperandValue(dummy223, dummy223_init, sizeof(_Float16) * 1);
  static int32_t param285_init[] = {0};
  model->setOperandValue(param285, param285_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in6_tmp, dummy223, param285}, {in6});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6_tmp},
    {out6});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy224 = model->addOperand(&type20);
  auto param286 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy224_init[] = {0.0f};
  model->setOperandValue(dummy224, dummy224_init, sizeof(float) * 1);
  static int32_t param286_init[] = {0};
  model->setOperandValue(param286, param286_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy224, param286}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy225 = model->addOperand(&type20);
  auto param287 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy225_init[] = {0.0f};
  model->setOperandValue(dummy225, dummy225_init, sizeof(float) * 1);
  static int32_t param287_init[] = {0};
  model->setOperandValue(param287, param287_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy225, param287}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy226 = model->addOperand(&type20);
  auto param288 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy226_init[] = {0.0f};
  model->setOperandValue(dummy226, dummy226_init, sizeof(float) * 1);
  static int32_t param288_init[] = {0};
  model->setOperandValue(param288, param288_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy226, param288}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy227 = model->addOperand(&type20);
  auto param289 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy227_init[] = {0.0f};
  model->setOperandValue(dummy227, dummy227_init, sizeof(float) * 1);
  static int32_t param289_init[] = {0};
  model->setOperandValue(param289, param289_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy227, param289}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type70);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type70);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy228 = model->addOperand(&type47);
  auto param290 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy228_init[] = {100};
  model->setOperandValue(dummy228, dummy228_init, sizeof(uint8_t) * 1);
  static int32_t param290_init[] = {0};
  model->setOperandValue(param290, param290_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy228, param290}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy229 = model->addOperand(&type47);
  auto param291 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy229_init[] = {100};
  model->setOperandValue(dummy229, dummy229_init, sizeof(uint8_t) * 1);
  static int32_t param291_init[] = {0};
  model->setOperandValue(param291, param291_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy229, param291}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type72(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type72);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type72(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type72);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy230 = model->addOperand(&type29);
  auto param292 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy230_init[] = {0.0f};
  model->setOperandValue(dummy230, dummy230_init, sizeof(_Float16) * 1);
  static int32_t param292_init[] = {0};
  model->setOperandValue(param292, param292_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy230, param292}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy231 = model->addOperand(&type29);
  auto param293 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy231_init[] = {0.0f};
  model->setOperandValue(dummy231, dummy231_init, sizeof(_Float16) * 1);
  static int32_t param293_init[] = {0};
  model->setOperandValue(param293, param293_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy231, param293}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy232 = model->addOperand(&type20);
  auto param294 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy232_init[] = {0.0f};
  model->setOperandValue(dummy232, dummy232_init, sizeof(float) * 1);
  static int32_t param294_init[] = {0};
  model->setOperandValue(param294, param294_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy232, param294}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy233 = model->addOperand(&type20);
  auto param295 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy233_init[] = {0.0f};
  model->setOperandValue(dummy233, dummy233_init, sizeof(float) * 1);
  static int32_t param295_init[] = {0};
  model->setOperandValue(param295, param295_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy233, param295}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy234 = model->addOperand(&type20);
  auto param296 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy234_init[] = {0.0f};
  model->setOperandValue(dummy234, dummy234_init, sizeof(float) * 1);
  static int32_t param296_init[] = {0};
  model->setOperandValue(param296, param296_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy234, param296}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy235 = model->addOperand(&type20);
  auto param297 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy235_init[] = {0.0f};
  model->setOperandValue(dummy235, dummy235_init, sizeof(float) * 1);
  static int32_t param297_init[] = {0};
  model->setOperandValue(param297, param297_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy235, param297}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type75(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type75);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type75(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type75);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy236 = model->addOperand(&type47);
  auto param298 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy236_init[] = {100};
  model->setOperandValue(dummy236, dummy236_init, sizeof(uint8_t) * 1);
  static int32_t param298_init[] = {0};
  model->setOperandValue(param298, param298_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy236, param298}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy237 = model->addOperand(&type47);
  auto param299 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy237_init[] = {100};
  model->setOperandValue(dummy237, dummy237_init, sizeof(uint8_t) * 1);
  static int32_t param299_init[] = {0};
  model->setOperandValue(param299, param299_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy237, param299}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type76);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type76);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy238 = model->addOperand(&type29);
  auto param300 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy238_init[] = {0.0f};
  model->setOperandValue(dummy238, dummy238_init, sizeof(_Float16) * 1);
  static int32_t param300_init[] = {0};
  model->setOperandValue(param300, param300_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy238, param300}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy239 = model->addOperand(&type29);
  auto param301 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy239_init[] = {0.0f};
  model->setOperandValue(dummy239, dummy239_init, sizeof(_Float16) * 1);
  static int32_t param301_init[] = {0};
  model->setOperandValue(param301, param301_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy239, param301}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy240 = model->addOperand(&type20);
  auto param302 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy240_init[] = {0.0f};
  model->setOperandValue(dummy240, dummy240_init, sizeof(float) * 1);
  static int32_t param302_init[] = {0};
  model->setOperandValue(param302, param302_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy240, param302}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy241 = model->addOperand(&type20);
  auto param303 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy241_init[] = {0.0f};
  model->setOperandValue(dummy241, dummy241_init, sizeof(float) * 1);
  static int32_t param303_init[] = {0};
  model->setOperandValue(param303, param303_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy241, param303}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy242 = model->addOperand(&type20);
  auto param304 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy242_init[] = {0.0f};
  model->setOperandValue(dummy242, dummy242_init, sizeof(float) * 1);
  static int32_t param304_init[] = {0};
  model->setOperandValue(param304, param304_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy242, param304}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy243 = model->addOperand(&type20);
  auto param305 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy243_init[] = {0.0f};
  model->setOperandValue(dummy243, dummy243_init, sizeof(float) * 1);
  static int32_t param305_init[] = {0};
  model->setOperandValue(param305, param305_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy243, param305}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type70);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type70);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy244 = model->addOperand(&type47);
  auto param306 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy244_init[] = {100};
  model->setOperandValue(dummy244, dummy244_init, sizeof(uint8_t) * 1);
  static int32_t param306_init[] = {0};
  model->setOperandValue(param306, param306_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy244, param306}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy245 = model->addOperand(&type47);
  auto param307 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy245_init[] = {100};
  model->setOperandValue(dummy245, dummy245_init, sizeof(uint8_t) * 1);
  static int32_t param307_init[] = {0};
  model->setOperandValue(param307, param307_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy245, param307}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type72(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type72);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type72(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type72);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy246 = model->addOperand(&type29);
  auto param308 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy246_init[] = {0.0f};
  model->setOperandValue(dummy246, dummy246_init, sizeof(_Float16) * 1);
  static int32_t param308_init[] = {0};
  model->setOperandValue(param308, param308_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy246, param308}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy247 = model->addOperand(&type29);
  auto param309 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy247_init[] = {0.0f};
  model->setOperandValue(dummy247, dummy247_init, sizeof(_Float16) * 1);
  static int32_t param309_init[] = {0};
  model->setOperandValue(param309, param309_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy247, param309}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy248 = model->addOperand(&type20);
  auto param310 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy248_init[] = {0.0f};
  model->setOperandValue(dummy248, dummy248_init, sizeof(float) * 1);
  static int32_t param310_init[] = {0};
  model->setOperandValue(param310, param310_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy248, param310}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy249 = model->addOperand(&type20);
  auto param311 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy249_init[] = {0.0f};
  model->setOperandValue(dummy249, dummy249_init, sizeof(float) * 1);
  static int32_t param311_init[] = {0};
  model->setOperandValue(param311, param311_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy249, param311}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type74(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type74);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy250 = model->addOperand(&type20);
  auto param312 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy250_init[] = {0.0f};
  model->setOperandValue(dummy250, dummy250_init, sizeof(float) * 1);
  static int32_t param312_init[] = {0};
  model->setOperandValue(param312, param312_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy250, param312}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type20(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  auto in7_tmp = model->addOperand(&type9);
  auto dummy251 = model->addOperand(&type20);
  auto param313 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy251_init[] = {0.0f};
  model->setOperandValue(dummy251, dummy251_init, sizeof(float) * 1);
  static int32_t param313_init[] = {0};
  model->setOperandValue(param313, param313_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy251, param313}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type75(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type75);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type75(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type75);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy252 = model->addOperand(&type47);
  auto param314 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy252_init[] = {100};
  model->setOperandValue(dummy252, dummy252_init, sizeof(uint8_t) * 1);
  static int32_t param314_init[] = {0};
  model->setOperandValue(param314, param314_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy252, param314}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type69);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type46);
  auto in7_tmp = model->addOperand(&type69);
  auto dummy253 = model->addOperand(&type47);
  auto param315 = model->addOperand(&type3);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy253_init[] = {100};
  model->setOperandValue(dummy253, dummy253_init, sizeof(uint8_t) * 1);
  static int32_t param315_init[] = {0};
  model->setOperandValue(param315, param315_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy253, param315}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type76);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type71(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type71);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type76);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy254 = model->addOperand(&type29);
  auto param316 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy254_init[] = {0.0f};
  model->setOperandValue(dummy254, dummy254_init, sizeof(_Float16) * 1);
  static int32_t param316_init[] = {0};
  model->setOperandValue(param316, param316_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy254, param316}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type73);
  auto param30 = model->addOperand(&type34);
  auto param31 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type27);
  auto in7_tmp = model->addOperand(&type73);
  auto dummy255 = model->addOperand(&type29);
  auto param317 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy255_init[] = {0.0f};
  model->setOperandValue(dummy255, dummy255_init, sizeof(_Float16) * 1);
  static int32_t param317_init[] = {0};
  model->setOperandValue(param317, param317_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in7_tmp, dummy255, param317}, {in7});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7_tmp},
    {out7});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type17);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type18);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type17);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type17);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type18);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type17);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type77(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 3, 3, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type82);
  auto roi = model->addOperand(&type80);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type83);
  auto roiOut = model->addOperand(&type81);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type78);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type77);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type79);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type77(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type82);
  auto roi = model->addOperand(&type80);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type83);
  auto roiOut = model->addOperand(&type81);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type78);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type77);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type84);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type85(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {0, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type90(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type89);
  auto roi = model->addOperand(&type87);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type90);
  auto roiOut = model->addOperand(&type88);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type26);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type34);
  auto param42 = model->addOperand(&type34);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type85);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type86);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {0.4000000059604645f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {0.30000001192092896f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type85(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type91(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type89);
  auto roi = model->addOperand(&type87);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type91);
  auto roiOut = model->addOperand(&type88);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type26);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type34);
  auto param42 = model->addOperand(&type34);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type85);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {0.4000000059604645f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {0.30000001192092896f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type93(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type92);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type93);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type92);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type93(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type92);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type93);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type11);
  auto roi = model->addOperand(&type12);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type13);
  auto roiOut = model->addOperand(&type15);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type92);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type94(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 1, 3, 3}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type82);
  auto roi = model->addOperand(&type80);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type83);
  auto roiOut = model->addOperand(&type81);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type78);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type94);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type95);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type94(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type82);
  auto roi = model->addOperand(&type80);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type83);
  auto roiOut = model->addOperand(&type81);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type78);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type94);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type84);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {0.4f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {0.3f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type90(Type::TENSOR_FLOAT16, {0});
  OperandType type96(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  OperandType type97(Type::TENSOR_FLOAT16, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores = model->addOperand(&type89);
  auto roi = model->addOperand(&type87);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type90);
  auto roiOut = model->addOperand(&type88);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type26);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type34);
  auto param42 = model->addOperand(&type34);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type96);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type97);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {0.4000000059604645f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {0.30000001192092896f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type91(Type::TENSOR_FLOAT16, {0});
  OperandType type96(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type89);
  auto roi = model->addOperand(&type87);
  auto param32 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type91);
  auto roiOut = model->addOperand(&type88);
  auto classesOut = model->addOperand(&type14);
  auto batchSplitOut = model->addOperand(&type14);
  auto in8 = model->addOperand(&type26);
  auto param39 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type34);
  auto param42 = model->addOperand(&type34);
  auto param43 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type96);
  auto param45 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type3);
  auto out8 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {-1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {0.4000000059604645f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {1.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {0.30000001192092896f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {2};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {2.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param45_init[] = {3};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static int32_t param46_init[] = {3};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param32, param33, param34, param35, param36, param37, param38}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in8, roiOut, batchSplitOut, param39, param40, param41, param42, param43, param44, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap, param45, param46, layout}, {out8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in8},
    {scoresOut, classesOut, out8});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type17);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type18);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type17);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type17);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type18);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type17);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type77(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 3, 3, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type82);
  auto roi1 = model->addOperand(&type80);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type83);
  auto roiOut1 = model->addOperand(&type81);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type78);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type77);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type79);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type77(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type82);
  auto roi1 = model->addOperand(&type80);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type83);
  auto roiOut1 = model->addOperand(&type81);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type78);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type77);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type84);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type85(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {0, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type90(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type89);
  auto roi1 = model->addOperand(&type87);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type34);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type34);
  auto param52 = model->addOperand(&type34);
  auto param53 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type90);
  auto roiOut1 = model->addOperand(&type88);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type26);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type34);
  auto param57 = model->addOperand(&type34);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type85);
  auto param60 = model->addOperand(&type34);
  auto param61 = model->addOperand(&type34);
  auto out9 = model->addOperand(&type86);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static _Float16 param48_init[] = {0.30000001192092896f};
  model->setOperandValue(param48, param48_init, sizeof(_Float16) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static _Float16 param51_init[] = {0.4000000059604645f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static _Float16 param53_init[] = {0.30000001192092896f};
  model->setOperandValue(param53, param53_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static _Float16 param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param60_init[] = {1.600000023841858f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {1.600000023841858f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type85(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type91(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type89);
  auto roi1 = model->addOperand(&type87);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type34);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type34);
  auto param52 = model->addOperand(&type34);
  auto param53 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type91);
  auto roiOut1 = model->addOperand(&type88);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type26);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type34);
  auto param57 = model->addOperand(&type34);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type85);
  auto param60 = model->addOperand(&type34);
  auto param61 = model->addOperand(&type34);
  auto out9 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static _Float16 param48_init[] = {0.30000001192092896f};
  model->setOperandValue(param48, param48_init, sizeof(_Float16) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static _Float16 param51_init[] = {0.4000000059604645f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static _Float16 param53_init[] = {0.30000001192092896f};
  model->setOperandValue(param53, param53_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static _Float16 param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param60_init[] = {1.600000023841858f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {1.600000023841858f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type93(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type92);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type93);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type92);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type93(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type92);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type93);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type13(Type::TENSOR_FLOAT32, {0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type92(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type11);
  auto roi1 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type15);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type92);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type19);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type94(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 1, 3, 3}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type82);
  auto roi1 = model->addOperand(&type80);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type83);
  auto roiOut1 = model->addOperand(&type81);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type78);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type94);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type95);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type80(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type81(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type82(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type94(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type82);
  auto roi1 = model->addOperand(&type80);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type83);
  auto roiOut1 = model->addOperand(&type81);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type78);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type94);
  auto param60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type4);
  auto out9 = model->addOperand(&type84);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float param48_init[] = {0.3f};
  model->setOperandValue(param48, param48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float param51_init[] = {0.4f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static float param53_init[] = {0.3f};
  model->setOperandValue(param53, param53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static float param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param60_init[] = {1.6f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {1.6f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type90(Type::TENSOR_FLOAT16, {0});
  OperandType type96(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  OperandType type97(Type::TENSOR_FLOAT16, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type89);
  auto roi1 = model->addOperand(&type87);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type34);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type34);
  auto param52 = model->addOperand(&type34);
  auto param53 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type90);
  auto roiOut1 = model->addOperand(&type88);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type26);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type34);
  auto param57 = model->addOperand(&type34);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type96);
  auto param60 = model->addOperand(&type34);
  auto param61 = model->addOperand(&type34);
  auto out9 = model->addOperand(&type97);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static _Float16 param48_init[] = {0.30000001192092896f};
  model->setOperandValue(param48, param48_init, sizeof(_Float16) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static _Float16 param51_init[] = {0.4000000059604645f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static _Float16 param53_init[] = {0.30000001192092896f};
  model->setOperandValue(param53, param53_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static _Float16 param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param60_init[] = {1.600000023841858f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {1.600000023841858f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
namespace generated_tests::resize_nearest_neighbor {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_INT32, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type87(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type88(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type89(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type91(Type::TENSOR_FLOAT16, {0});
  OperandType type96(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type89);
  auto roi1 = model->addOperand(&type87);
  auto param47 = model->addOperand(&type16);
  auto param48 = model->addOperand(&type34);
  auto param49 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type34);
  auto param52 = model->addOperand(&type34);
  auto param53 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type91);
  auto roiOut1 = model->addOperand(&type88);
  auto classesOut1 = model->addOperand(&type14);
  auto batchSplitOut1 = model->addOperand(&type14);
  auto in9 = model->addOperand(&type26);
  auto param54 = model->addOperand(&type3);
  auto param55 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type34);
  auto param57 = model->addOperand(&type34);
  auto param58 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type96);
  auto param60 = model->addOperand(&type34);
  auto param61 = model->addOperand(&type34);
  auto out9 = model->addOperand(&type27);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static _Float16 param48_init[] = {0.30000001192092896f};
  model->setOperandValue(param48, param48_init, sizeof(_Float16) * 1);
  static int32_t param49_init[] = {-1};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static _Float16 param51_init[] = {0.4000000059604645f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {1.0f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static _Float16 param53_init[] = {0.30000001192092896f};
  model->setOperandValue(param53, param53_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static int32_t param55_init[] = {2};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static _Float16 param57_init[] = {2.0f};
  model->setOperandValue(param57, param57_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static int32_t param59_init[] = {4};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param60_init[] = {1.600000023841858f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {1.600000023841858f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param47, param48, param49, param50, param51, param52, param53}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in9, roiOut1, batchSplitOut1, param54, param55, param56, param57, param58, param59, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {featureMap1, param60, param61, layout}, {out9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in9},
    {scoresOut1, classesOut1, out9});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_nearest_neighbor
