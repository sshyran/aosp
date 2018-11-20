// clang-format off
// Generated file (from: sparse_to_dense.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {7});
  // Phase 1, operands
  auto input_indices = model->addOperand(&type0);
  auto output_shape = model->addOperand(&type1);
  auto input_values = model->addOperand(&type2);
  auto default_value = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static float default_value_init[] = {0.0f};
  model->setOperandValue(default_value, default_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices, output_shape, input_values, default_value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices, output_shape, input_values},
    {output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {7});
  // Phase 1, operands
  auto input_indices = model->addOperand(&type0);
  auto output_shape = model->addOperand(&type1);
  auto input_values = model->addOperand(&type2);
  auto default_value = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static float default_value_init[] = {0.0f};
  model->setOperandValue(default_value, default_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices, output_shape, input_values, default_value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices, output_shape, input_values},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  // Phase 1, operands
  auto input_indices = model->addOperand(&type0);
  auto output_shape = model->addOperand(&type1);
  auto input_values = model->addOperand(&type2);
  auto default_value = model->addOperand(&type3);
  auto output = model->addOperand(&type17);
  // Phase 2, operations
  static float default_value_init[] = {0.0f};
  model->setOperandValue(default_value, default_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices, output_shape, input_values, default_value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices, output_shape, input_values},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  // Phase 1, operands
  auto input_indices = model->addOperand(&type0);
  auto output_shape = model->addOperand(&type1);
  auto input_values = model->addOperand(&type2);
  auto default_value = model->addOperand(&type3);
  auto output = model->addOperand(&type17);
  // Phase 2, operations
  static float default_value_init[] = {0.0f};
  model->setOperandValue(default_value, default_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices, output_shape, input_values, default_value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices, output_shape, input_values},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 3});
  // Phase 1, operands
  auto input_indices1 = model->addOperand(&type5);
  auto output_shape1 = model->addOperand(&type0);
  auto input_values1 = model->addOperand(&type2);
  auto default_value1 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type6);
  // Phase 2, operations
  static float default_value1_init[] = {0.0f};
  model->setOperandValue(default_value1, default_value1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices1, output_shape1, input_values1, default_value1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices1, output_shape1, input_values1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 3});
  // Phase 1, operands
  auto input_indices1 = model->addOperand(&type5);
  auto output_shape1 = model->addOperand(&type0);
  auto input_values1 = model->addOperand(&type2);
  auto default_value1 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type6);
  // Phase 2, operations
  static float default_value1_init[] = {0.0f};
  model->setOperandValue(default_value1, default_value1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices1, output_shape1, input_values1, default_value1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices1, output_shape1, input_values1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto input_indices1 = model->addOperand(&type5);
  auto output_shape1 = model->addOperand(&type0);
  auto input_values1 = model->addOperand(&type2);
  auto default_value1 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type18);
  // Phase 2, operations
  static float default_value1_init[] = {0.0f};
  model->setOperandValue(default_value1, default_value1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices1, output_shape1, input_values1, default_value1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices1, output_shape1, input_values1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto input_indices1 = model->addOperand(&type5);
  auto output_shape1 = model->addOperand(&type0);
  auto input_values1 = model->addOperand(&type2);
  auto default_value1 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type18);
  // Phase 2, operations
  static float default_value1_init[] = {0.0f};
  model->setOperandValue(default_value1, default_value1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices1, output_shape1, input_values1, default_value1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices1, output_shape1, input_values1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {7});
  // Phase 1, operands
  auto input_indices2 = model->addOperand(&type0);
  auto output_shape2 = model->addOperand(&type1);
  auto input_values2 = model->addOperand(&type2);
  auto default_value2 = model->addOperand(&type3);
  auto output2 = model->addOperand(&type4);
  // Phase 2, operations
  static float default_value2_init[] = {-1.0f};
  model->setOperandValue(default_value2, default_value2_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices2, output_shape2, input_values2, default_value2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices2, output_shape2, input_values2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {7});
  // Phase 1, operands
  auto input_indices2 = model->addOperand(&type0);
  auto output_shape2 = model->addOperand(&type1);
  auto input_values2 = model->addOperand(&type2);
  auto default_value2 = model->addOperand(&type3);
  auto output2 = model->addOperand(&type4);
  // Phase 2, operations
  static float default_value2_init[] = {-1.0f};
  model->setOperandValue(default_value2, default_value2_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices2, output_shape2, input_values2, default_value2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices2, output_shape2, input_values2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  // Phase 1, operands
  auto input_indices2 = model->addOperand(&type0);
  auto output_shape2 = model->addOperand(&type1);
  auto input_values2 = model->addOperand(&type2);
  auto default_value2 = model->addOperand(&type3);
  auto output2 = model->addOperand(&type17);
  // Phase 2, operations
  static float default_value2_init[] = {-1.0f};
  model->setOperandValue(default_value2, default_value2_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices2, output_shape2, input_values2, default_value2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices2, output_shape2, input_values2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::FLOAT32, {});
  // Phase 1, operands
  auto input_indices2 = model->addOperand(&type0);
  auto output_shape2 = model->addOperand(&type1);
  auto input_values2 = model->addOperand(&type2);
  auto default_value2 = model->addOperand(&type3);
  auto output2 = model->addOperand(&type17);
  // Phase 2, operations
  static float default_value2_init[] = {-1.0f};
  model->setOperandValue(default_value2, default_value2_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices2, output_shape2, input_values2, default_value2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices2, output_shape2, input_values2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_INT32, {7});
  // Phase 1, operands
  auto input_indices3 = model->addOperand(&type0);
  auto output_shape3 = model->addOperand(&type1);
  auto input_values3 = model->addOperand(&type0);
  auto default_value3 = model->addOperand(&type7);
  auto output3 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t default_value3_init[] = {0};
  model->setOperandValue(default_value3, default_value3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices3, output_shape3, input_values3, default_value3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices3, output_shape3, input_values3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_INT32, {7});
  // Phase 1, operands
  auto input_indices3 = model->addOperand(&type0);
  auto output_shape3 = model->addOperand(&type1);
  auto input_values3 = model->addOperand(&type0);
  auto default_value3 = model->addOperand(&type7);
  auto output3 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t default_value3_init[] = {0};
  model->setOperandValue(default_value3, default_value3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices3, output_shape3, input_values3, default_value3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices3, output_shape3, input_values3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_INT32, {0});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices3 = model->addOperand(&type0);
  auto output_shape3 = model->addOperand(&type1);
  auto input_values3 = model->addOperand(&type0);
  auto default_value3 = model->addOperand(&type7);
  auto output3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t default_value3_init[] = {0};
  model->setOperandValue(default_value3, default_value3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices3, output_shape3, input_values3, default_value3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices3, output_shape3, input_values3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_INT32, {0});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices3 = model->addOperand(&type0);
  auto output_shape3 = model->addOperand(&type1);
  auto input_values3 = model->addOperand(&type0);
  auto default_value3 = model->addOperand(&type7);
  auto output3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t default_value3_init[] = {0};
  model->setOperandValue(default_value3, default_value3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices3, output_shape3, input_values3, default_value3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices3, output_shape3, input_values3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_5(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  OperandType type9(Type::TENSOR_INT32, {3, 3, 3});
  // Phase 1, operands
  auto input_indices4 = model->addOperand(&type5);
  auto output_shape4 = model->addOperand(&type0);
  auto input_values4 = model->addOperand(&type0);
  auto default_value4 = model->addOperand(&type7);
  auto output4 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t default_value4_init[] = {0};
  model->setOperandValue(default_value4, default_value4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices4, output_shape4, input_values4, default_value4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices4, output_shape4, input_values4},
    {output4});
  assert(model->isValid());
}

inline bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_5(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  OperandType type9(Type::TENSOR_INT32, {3, 3, 3});
  // Phase 1, operands
  auto input_indices4 = model->addOperand(&type5);
  auto output_shape4 = model->addOperand(&type0);
  auto input_values4 = model->addOperand(&type0);
  auto default_value4 = model->addOperand(&type7);
  auto output4 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t default_value4_init[] = {0};
  model->setOperandValue(default_value4, default_value4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices4, output_shape4, input_values4, default_value4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices4, output_shape4, input_values4},
    {output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type20(Type::TENSOR_INT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices4 = model->addOperand(&type5);
  auto output_shape4 = model->addOperand(&type0);
  auto input_values4 = model->addOperand(&type0);
  auto default_value4 = model->addOperand(&type7);
  auto output4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t default_value4_init[] = {0};
  model->setOperandValue(default_value4, default_value4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices4, output_shape4, input_values4, default_value4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices4, output_shape4, input_values4},
    {output4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_5(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type20(Type::TENSOR_INT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices4 = model->addOperand(&type5);
  auto output_shape4 = model->addOperand(&type0);
  auto input_values4 = model->addOperand(&type0);
  auto default_value4 = model->addOperand(&type7);
  auto output4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t default_value4_init[] = {0};
  model->setOperandValue(default_value4, default_value4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices4, output_shape4, input_values4, default_value4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices4, output_shape4, input_values4},
    {output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_6(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_INT32, {7});
  // Phase 1, operands
  auto input_indices5 = model->addOperand(&type0);
  auto output_shape5 = model->addOperand(&type1);
  auto input_values5 = model->addOperand(&type0);
  auto default_value5 = model->addOperand(&type7);
  auto output5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t default_value5_init[] = {-1};
  model->setOperandValue(default_value5, default_value5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices5, output_shape5, input_values5, default_value5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices5, output_shape5, input_values5},
    {output5});
  assert(model->isValid());
}

inline bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_6(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_INT32, {7});
  // Phase 1, operands
  auto input_indices5 = model->addOperand(&type0);
  auto output_shape5 = model->addOperand(&type1);
  auto input_values5 = model->addOperand(&type0);
  auto default_value5 = model->addOperand(&type7);
  auto output5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t default_value5_init[] = {-1};
  model->setOperandValue(default_value5, default_value5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices5, output_shape5, input_values5, default_value5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices5, output_shape5, input_values5},
    {output5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_INT32, {0});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices5 = model->addOperand(&type0);
  auto output_shape5 = model->addOperand(&type1);
  auto input_values5 = model->addOperand(&type0);
  auto default_value5 = model->addOperand(&type7);
  auto output5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t default_value5_init[] = {-1};
  model->setOperandValue(default_value5, default_value5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices5, output_shape5, input_values5, default_value5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices5, output_shape5, input_values5},
    {output5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_6(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type19(Type::TENSOR_INT32, {0});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices5 = model->addOperand(&type0);
  auto output_shape5 = model->addOperand(&type1);
  auto input_values5 = model->addOperand(&type0);
  auto default_value5 = model->addOperand(&type7);
  auto output5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t default_value5_init[] = {-1};
  model->setOperandValue(default_value5, default_value5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices5, output_shape5, input_values5, default_value5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices5, output_shape5, input_values5},
    {output5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_7(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type12(Type::TENSOR_FLOAT16, {7});
  // Phase 1, operands
  auto input_indices6 = model->addOperand(&type0);
  auto output_shape6 = model->addOperand(&type1);
  auto input_values6 = model->addOperand(&type10);
  auto default_value6 = model->addOperand(&type11);
  auto output6 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 default_value6_init[] = {0.0f};
  model->setOperandValue(default_value6, default_value6_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices6, output_shape6, input_values6, default_value6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices6, output_shape6, input_values6},
    {output6});
  assert(model->isValid());
}

inline bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_7(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type12(Type::TENSOR_FLOAT16, {7});
  // Phase 1, operands
  auto input_indices6 = model->addOperand(&type0);
  auto output_shape6 = model->addOperand(&type1);
  auto input_values6 = model->addOperand(&type10);
  auto default_value6 = model->addOperand(&type11);
  auto output6 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 default_value6_init[] = {0.0f};
  model->setOperandValue(default_value6, default_value6_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices6, output_shape6, input_values6, default_value6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices6, output_shape6, input_values6},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type21(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input_indices6 = model->addOperand(&type0);
  auto output_shape6 = model->addOperand(&type1);
  auto input_values6 = model->addOperand(&type10);
  auto default_value6 = model->addOperand(&type11);
  auto output6 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 default_value6_init[] = {0.0f};
  model->setOperandValue(default_value6, default_value6_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices6, output_shape6, input_values6, default_value6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices6, output_shape6, input_values6},
    {output6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_7(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type21(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input_indices6 = model->addOperand(&type0);
  auto output_shape6 = model->addOperand(&type1);
  auto input_values6 = model->addOperand(&type10);
  auto default_value6 = model->addOperand(&type11);
  auto output6 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 default_value6_init[] = {0.0f};
  model->setOperandValue(default_value6, default_value6_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices6, output_shape6, input_values6, default_value6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices6, output_shape6, input_values6},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_8(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type13(Type::TENSOR_FLOAT16, {3, 3, 3});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto input_indices7 = model->addOperand(&type5);
  auto output_shape7 = model->addOperand(&type0);
  auto input_values7 = model->addOperand(&type10);
  auto default_value7 = model->addOperand(&type11);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 default_value7_init[] = {0.0f};
  model->setOperandValue(default_value7, default_value7_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices7, output_shape7, input_values7, default_value7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices7, output_shape7, input_values7},
    {output7});
  assert(model->isValid());
}

inline bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_8(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type13(Type::TENSOR_FLOAT16, {3, 3, 3});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto input_indices7 = model->addOperand(&type5);
  auto output_shape7 = model->addOperand(&type0);
  auto input_values7 = model->addOperand(&type10);
  auto default_value7 = model->addOperand(&type11);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 default_value7_init[] = {0.0f};
  model->setOperandValue(default_value7, default_value7_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices7, output_shape7, input_values7, default_value7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices7, output_shape7, input_values7},
    {output7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto input_indices7 = model->addOperand(&type5);
  auto output_shape7 = model->addOperand(&type0);
  auto input_values7 = model->addOperand(&type10);
  auto default_value7 = model->addOperand(&type11);
  auto output7 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 default_value7_init[] = {0.0f};
  model->setOperandValue(default_value7, default_value7_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices7, output_shape7, input_values7, default_value7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices7, output_shape7, input_values7},
    {output7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_8(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto input_indices7 = model->addOperand(&type5);
  auto output_shape7 = model->addOperand(&type0);
  auto input_values7 = model->addOperand(&type10);
  auto default_value7 = model->addOperand(&type11);
  auto output7 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 default_value7_init[] = {0.0f};
  model->setOperandValue(default_value7, default_value7_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices7, output_shape7, input_values7, default_value7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices7, output_shape7, input_values7},
    {output7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_9(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type12(Type::TENSOR_FLOAT16, {7});
  // Phase 1, operands
  auto input_indices8 = model->addOperand(&type0);
  auto output_shape8 = model->addOperand(&type1);
  auto input_values8 = model->addOperand(&type10);
  auto default_value8 = model->addOperand(&type11);
  auto output8 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 default_value8_init[] = {-1.0f};
  model->setOperandValue(default_value8, default_value8_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices8, output_shape8, input_values8, default_value8}, {output8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices8, output_shape8, input_values8},
    {output8});
  assert(model->isValid());
}

inline bool is_ignored_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_9(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type12(Type::TENSOR_FLOAT16, {7});
  // Phase 1, operands
  auto input_indices8 = model->addOperand(&type0);
  auto output_shape8 = model->addOperand(&type1);
  auto input_values8 = model->addOperand(&type10);
  auto default_value8 = model->addOperand(&type11);
  auto output8 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 default_value8_init[] = {-1.0f};
  model->setOperandValue(default_value8, default_value8_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices8, output_shape8, input_values8, default_value8}, {output8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices8, output_shape8, input_values8},
    {output8});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_9(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type21(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input_indices8 = model->addOperand(&type0);
  auto output_shape8 = model->addOperand(&type1);
  auto input_values8 = model->addOperand(&type10);
  auto default_value8 = model->addOperand(&type11);
  auto output8 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 default_value8_init[] = {-1.0f};
  model->setOperandValue(default_value8, default_value8_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices8, output_shape8, input_values8, default_value8}, {output8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices8, output_shape8, input_values8},
    {output8});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_9(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type10(Type::TENSOR_FLOAT16, {3});
  OperandType type11(Type::FLOAT16, {});
  OperandType type21(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input_indices8 = model->addOperand(&type0);
  auto output_shape8 = model->addOperand(&type1);
  auto input_values8 = model->addOperand(&type10);
  auto default_value8 = model->addOperand(&type11);
  auto output8 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 default_value8_init[] = {-1.0f};
  model->setOperandValue(default_value8, default_value8_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices8, output_shape8, input_values8, default_value8}, {output8});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices8, output_shape8, input_values8},
    {output8});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_10(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {7}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices9 = model->addOperand(&type0);
  auto output_shape9 = model->addOperand(&type1);
  auto input_values9 = model->addOperand(&type14);
  auto default_value9 = model->addOperand(&type7);
  auto output9 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t default_value9_init[] = {128};
  model->setOperandValue(default_value9, default_value9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices9, output_shape9, input_values9, default_value9}, {output9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices9, output_shape9, input_values9},
    {output9});
  assert(model->isValid());
}

inline bool is_ignored_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_10(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {7}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices9 = model->addOperand(&type0);
  auto output_shape9 = model->addOperand(&type1);
  auto input_values9 = model->addOperand(&type14);
  auto default_value9 = model->addOperand(&type7);
  auto output9 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t default_value9_init[] = {128};
  model->setOperandValue(default_value9, default_value9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices9, output_shape9, input_values9, default_value9}, {output9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices9, output_shape9, input_values9},
    {output9});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_10(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices9 = model->addOperand(&type0);
  auto output_shape9 = model->addOperand(&type1);
  auto input_values9 = model->addOperand(&type14);
  auto default_value9 = model->addOperand(&type7);
  auto output9 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t default_value9_init[] = {128};
  model->setOperandValue(default_value9, default_value9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices9, output_shape9, input_values9, default_value9}, {output9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices9, output_shape9, input_values9},
    {output9});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_10(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices9 = model->addOperand(&type0);
  auto output_shape9 = model->addOperand(&type1);
  auto input_values9 = model->addOperand(&type14);
  auto default_value9 = model->addOperand(&type7);
  auto output9 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t default_value9_init[] = {128};
  model->setOperandValue(default_value9, default_value9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices9, output_shape9, input_values9, default_value9}, {output9});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices9, output_shape9, input_values9},
    {output9});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_11(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {3, 3, 3}, 1.0f, 128);
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices10 = model->addOperand(&type5);
  auto output_shape10 = model->addOperand(&type0);
  auto input_values10 = model->addOperand(&type14);
  auto default_value10 = model->addOperand(&type7);
  auto output10 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t default_value10_init[] = {128};
  model->setOperandValue(default_value10, default_value10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices10, output_shape10, input_values10, default_value10}, {output10});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices10, output_shape10, input_values10},
    {output10});
  assert(model->isValid());
}

inline bool is_ignored_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_11(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {3, 3, 3}, 1.0f, 128);
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices10 = model->addOperand(&type5);
  auto output_shape10 = model->addOperand(&type0);
  auto input_values10 = model->addOperand(&type14);
  auto default_value10 = model->addOperand(&type7);
  auto output10 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t default_value10_init[] = {128};
  model->setOperandValue(default_value10, default_value10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices10, output_shape10, input_values10, default_value10}, {output10});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices10, output_shape10, input_values10},
    {output10});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_11(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 1.0f, 128);
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices10 = model->addOperand(&type5);
  auto output_shape10 = model->addOperand(&type0);
  auto input_values10 = model->addOperand(&type14);
  auto default_value10 = model->addOperand(&type7);
  auto output10 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t default_value10_init[] = {128};
  model->setOperandValue(default_value10, default_value10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices10, output_shape10, input_values10, default_value10}, {output10});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices10, output_shape10, input_values10},
    {output10});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_11(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 1.0f, 128);
  OperandType type5(Type::TENSOR_INT32, {3, 3});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices10 = model->addOperand(&type5);
  auto output_shape10 = model->addOperand(&type0);
  auto input_values10 = model->addOperand(&type14);
  auto default_value10 = model->addOperand(&type7);
  auto output10 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t default_value10_init[] = {128};
  model->setOperandValue(default_value10, default_value10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices10, output_shape10, input_values10, default_value10}, {output10});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices10, output_shape10, input_values10},
    {output10});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_12(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {7}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices11 = model->addOperand(&type0);
  auto output_shape11 = model->addOperand(&type1);
  auto input_values11 = model->addOperand(&type14);
  auto default_value11 = model->addOperand(&type7);
  auto output11 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t default_value11_init[] = {127};
  model->setOperandValue(default_value11, default_value11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices11, output_shape11, input_values11, default_value11}, {output11});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices11, output_shape11, input_values11},
    {output11});
  assert(model->isValid());
}

inline bool is_ignored_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_12(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {7}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices11 = model->addOperand(&type0);
  auto output_shape11 = model->addOperand(&type1);
  auto input_values11 = model->addOperand(&type14);
  auto default_value11 = model->addOperand(&type7);
  auto output11 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t default_value11_init[] = {127};
  model->setOperandValue(default_value11, default_value11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices11, output_shape11, input_values11, default_value11}, {output11});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices11, output_shape11, input_values11},
    {output11});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_12(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices11 = model->addOperand(&type0);
  auto output_shape11 = model->addOperand(&type1);
  auto input_values11 = model->addOperand(&type14);
  auto default_value11 = model->addOperand(&type7);
  auto output11 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t default_value11_init[] = {127};
  model->setOperandValue(default_value11, default_value11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices11, output_shape11, input_values11, default_value11}, {output11});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices11, output_shape11, input_values11},
    {output11});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_12(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto input_indices11 = model->addOperand(&type0);
  auto output_shape11 = model->addOperand(&type1);
  auto input_values11 = model->addOperand(&type14);
  auto default_value11 = model->addOperand(&type7);
  auto output11 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t default_value11_init[] = {127};
  model->setOperandValue(default_value11, default_value11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPARSE_TO_DENSE, {input_indices11, output_shape11, input_values11, default_value11}, {output11});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_indices11, output_shape11, input_values11},
    {output11});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

