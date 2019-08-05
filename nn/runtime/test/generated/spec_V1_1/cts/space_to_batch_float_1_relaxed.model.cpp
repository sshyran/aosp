// Generated from space_to_batch_float_1_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::space_to_batch_float_1_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t block_size_init[] = {2, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_float_1_relaxed
namespace generated_tests::space_to_batch_float_1_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto paddings = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t block_size_init[] = {2, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {input, block_size, paddings}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_float_1_relaxed
