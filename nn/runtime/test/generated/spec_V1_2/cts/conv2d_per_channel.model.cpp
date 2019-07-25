// Generated from conv2d_per_channel.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv2d_per_channel {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int8_t op2_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 6);
  static int32_t op3_init[] = {4, 4, 4};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static int8_t op2_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 6);
  static int32_t op3_init[] = {4, 4, 4};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type19);
  auto param34 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op2_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 6);
  static int32_t op3_init[] = {4, 4, 4};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {128};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param34}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type19);
  auto param35 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op2_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 6);
  static int32_t op3_init[] = {4, 4, 4};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {128};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param35}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type21(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type21);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type18);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type22(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type22);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type19);
  auto param36 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {128};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param36}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op3, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type23(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type23);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type19);
  auto param37 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {128};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param37}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op3, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type3);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type3);
  auto op11_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type19);
  auto param38 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy4_init[] = {128};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy4, param38}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  auto op11_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type19);
  auto param39 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy5_init[] = {128};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy5, param39}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type24(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type24);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type25(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type25);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type26(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type26);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type3);
  auto op11_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type19);
  auto param40 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy6_init[] = {128};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy6, param40}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op21, op31, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type27(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type27);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  auto op11_tmp = model->addOperand(&type0);
  auto dummy7 = model->addOperand(&type19);
  auto param41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy7_init[] = {128};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy7, param41}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op21, op31, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type29);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_all_inputs_as_internal(Model *model) {
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type29);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy8 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy8_init[] = {128};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy8, param42}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy9 = model->addOperand(&type19);
  auto param43 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy9_init[] = {128};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy9, param43}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_all_tensors_as_inputs(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 1.0f, 128);
  OperandType type30(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type30);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type31(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type31);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 1.0f, 128);
  OperandType type32(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type32);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type29);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy10 = model->addOperand(&type19);
  auto param44 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy10_init[] = {128};
  model->setOperandValue(dummy10, dummy10_init, sizeof(uint8_t) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy10, param44}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op21, op31, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type33(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type33);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type18);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy11 = model->addOperand(&type19);
  auto param45 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy11_init[] = {128};
  model->setOperandValue(dummy11, dummy11_init, sizeof(uint8_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy11, param45}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op21, op31, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 0.5f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 2}, 0.5f, 128);
  OperandType type16(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 3}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type8(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param14 = model->addOperand(&type12);
  auto param15 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type13);
  auto param19 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type13);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto featureMap = model->addOperand(&type15);
  auto weights = model->addOperand(&type16);
  auto bias = model->addOperand(&type2);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {1, 1, 10, 10, 0, 0, 10, 10};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float param15_init[] = {0.3f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static int32_t param16_init[] = {-1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float param18_init[] = {0.4f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {1.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.3f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float param23_init[] = {2.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {4};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int8_t weights_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(weights, weights_init, sizeof(int8_t) * 6);
  static int32_t bias_init[] = {4, 4, 4};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 3);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {1};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param14, param15, param16, param17, param18, param19, param20}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param21, param22, param23, param24, param25, param26, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {featureMap, weights, bias, param27, param28, param29, param30, param31, param32, param33, layout}, {out});
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

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 0.5f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 2}, 0.5f, 128);
  OperandType type16(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type8(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param14 = model->addOperand(&type12);
  auto param15 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type13);
  auto param19 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type13);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto featureMap = model->addOperand(&type15);
  auto weights = model->addOperand(&type16);
  auto bias = model->addOperand(&type2);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {1, 1, 10, 10, 0, 0, 10, 10};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float param15_init[] = {0.3f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static int32_t param16_init[] = {-1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float param18_init[] = {0.4f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {1.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.3f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float param23_init[] = {2.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {4};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int8_t weights_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(weights, weights_init, sizeof(int8_t) * 6);
  static int32_t bias_init[] = {4, 4, 4};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 3);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {1};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param14, param15, param16, param17, param18, param19, param20}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param21, param22, param23, param24, param25, param26, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {featureMap, weights, bias, param27, param28, param29, param30, param31, param32, param33, layout}, {out});
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

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 2}, 0.5f, 128);
  OperandType type16(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 2, 1, 1}, 0.5f, 128);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {0, 3, 2, 2}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type8(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param14 = model->addOperand(&type12);
  auto param15 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type13);
  auto param19 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type34);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type13);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto featureMap = model->addOperand(&type15);
  auto weights = model->addOperand(&type16);
  auto bias = model->addOperand(&type2);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto out = model->addOperand(&type35);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {1, 1, 10, 10, 0, 0, 10, 10};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float param15_init[] = {0.3f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static int32_t param16_init[] = {-1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float param18_init[] = {0.4f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {1.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.3f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float param23_init[] = {2.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {4};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int8_t weights_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(weights, weights_init, sizeof(int8_t) * 6);
  static int32_t bias_init[] = {4, 4, 4};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 3);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {1};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param14, param15, param16, param17, param18, param19, param20}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param21, param22, param23, param24, param25, param26, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {featureMap, weights, bias, param27, param28, param29, param30, param31, param32, param33, layout}, {out});
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

} // namespace generated_tests::conv2d_per_channel
namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 2}, 0.5f, 128);
  OperandType type16(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 2, 1, 1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type8(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param14 = model->addOperand(&type12);
  auto param15 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type13);
  auto param19 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type34);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type13);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto featureMap = model->addOperand(&type15);
  auto weights = model->addOperand(&type16);
  auto bias = model->addOperand(&type2);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {1, 1, 10, 10, 0, 0, 10, 10};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float param15_init[] = {0.3f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static int32_t param16_init[] = {-1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float param18_init[] = {0.4f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {1.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.3f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float param23_init[] = {2.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {4};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int8_t weights_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(weights, weights_init, sizeof(int8_t) * 6);
  static int32_t bias_init[] = {4, 4, 4};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 3);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {1};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param14, param15, param16, param17, param18, param19, param20}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param21, param22, param23, param24, param25, param26, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {featureMap, weights, bias, param27, param28, param29, param30, param31, param32, param33, layout}, {out});
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

} // namespace generated_tests::conv2d_per_channel
