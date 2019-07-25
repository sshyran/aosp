// Generated from space_to_batch_quant8_nonzero.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 1.0f, 9);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t block_size_init[] = {3, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 9);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t block_size_init[] = {3, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 1.0f, 9);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 9);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t block_size_init[] = {3, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static uint8_t dummy_init[] = {9};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 9);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 9);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  auto input_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t block_size_init[] = {3, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static uint8_t dummy1_init[] = {9};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy1, param1}, {input});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 1.0f, 9);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, block_size, paddings},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 9);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, block_size, paddings},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 1.0f, 9);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 9);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto input_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy2_init[] = {9};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy2, param2}, {input});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {block_size, paddings, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 1.0f, 9);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 9);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 9);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  auto input_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy3_init[] = {9};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy3, param3}, {input});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {block_size, paddings, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
