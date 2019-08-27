// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy = model->addOperand(&type12);
  auto param3 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy1 = model->addOperand(&type12);
  auto param4 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy2 = model->addOperand(&type12);
  auto param5 = model->addOperand(&type5);
  auto op2_tmp = model->addOperand(&type8);
  auto dummy3 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param6}, {op2});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.5f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {16, 1, 1, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_INT32, {16}, 0.25f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type8);
  auto op3 = model->addOperand(&type9);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy4 = model->addOperand(&type12);
  auto param7 = model->addOperand(&type5);
  auto op2_tmp = model->addOperand(&type8);
  auto dummy5 = model->addOperand(&type12);
  auto param8 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy4_init[] = {0};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy5_init[] = {0};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy5, param8}, {op2});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type14(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type15(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type14);
  auto op3 = model->addOperand(&type15);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type14(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type15(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type14);
  auto op3 = model->addOperand(&type15);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type14(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type15(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 80);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type14);
  auto op3 = model->addOperand(&type15);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy6 = model->addOperand(&type18);
  auto param9 = model->addOperand(&type5);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy6_init[] = {100};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param9}, {op1});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type14(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type15(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type14);
  auto op3 = model->addOperand(&type15);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy7 = model->addOperand(&type18);
  auto param10 = model->addOperand(&type5);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 16);
  static int32_t op3_init[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 16);
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy7_init[] = {100};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param10}, {op1});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 80);
  OperandType type19(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type20(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type19);
  auto op3 = model->addOperand(&type20);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type21(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type22(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type21);
  auto op3 = model->addOperand(&type22);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {25, 32, 32, 16}, 0.5f, 80);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type23(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type24(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type23);
  auto op3 = model->addOperand(&type24);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy8 = model->addOperand(&type18);
  auto param11 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy8_init[] = {100};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param11}, {op1});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op3, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {25, 1, 1, 1}, 0.25f, 100);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 100);
  OperandType type25(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {16, 1, 1, 1}, SymmPerChannelQuantParams({0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f},0));
  OperandType type26(Type::TENSOR_INT32, {16}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto op2 = model->addOperand(&type25);
  auto op3 = model->addOperand(&type26);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy9 = model->addOperand(&type18);
  auto param12 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t shape_init[] = {25, 32, 32, 16};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {32};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {32};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy9_init[] = {100};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op3, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::transpose_conv2d_large
