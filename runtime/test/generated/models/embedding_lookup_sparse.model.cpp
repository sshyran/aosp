// clang-format off
// Generated file (from: embedding_lookup_sparse.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids = model->addOperand(&type0);
  auto indices = model->addOperand(&type1);
  auto dense_shape = model->addOperand(&type2);
  auto weights = model->addOperand(&type3);
  auto combiner = model->addOperand(&type4);
  auto values = model->addOperand(&type5);
  auto output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t combiner_init[] = {0};
  model->setOperandValue(combiner, combiner_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids, indices, dense_shape, weights, combiner, values}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids, indices, dense_shape, weights, values},
    {output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids = model->addOperand(&type0);
  auto indices = model->addOperand(&type1);
  auto dense_shape = model->addOperand(&type2);
  auto weights = model->addOperand(&type3);
  auto combiner = model->addOperand(&type4);
  auto values = model->addOperand(&type5);
  auto output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t combiner_init[] = {0};
  model->setOperandValue(combiner, combiner_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids, indices, dense_shape, weights, combiner, values}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids, indices, dense_shape, weights, values},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids = model->addOperand(&type0);
  auto indices = model->addOperand(&type1);
  auto dense_shape = model->addOperand(&type2);
  auto weights = model->addOperand(&type11);
  auto combiner = model->addOperand(&type4);
  auto values = model->addOperand(&type10);
  auto output = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t combiner_init[] = {0};
  model->setOperandValue(combiner, combiner_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids, indices, dense_shape, weights, combiner, values}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids, indices, dense_shape, weights, values},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  // Phase 1, operands
  auto lookup_ids = model->addOperand(&type0);
  auto indices = model->addOperand(&type1);
  auto dense_shape = model->addOperand(&type2);
  auto weights = model->addOperand(&type3);
  auto combiner = model->addOperand(&type4);
  auto values = model->addOperand(&type5);
  auto output = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t combiner_init[] = {0};
  model->setOperandValue(combiner, combiner_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids, indices, dense_shape, weights, combiner, values}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids, indices, dense_shape, weights, values},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  // Phase 1, operands
  auto lookup_ids = model->addOperand(&type0);
  auto indices = model->addOperand(&type1);
  auto dense_shape = model->addOperand(&type2);
  auto weights = model->addOperand(&type3);
  auto combiner = model->addOperand(&type4);
  auto values = model->addOperand(&type5);
  auto output = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t combiner_init[] = {0};
  model->setOperandValue(combiner, combiner_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids, indices, dense_shape, weights, combiner, values}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids, indices, dense_shape, weights, values},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto lookup_ids = model->addOperand(&type0);
  auto indices = model->addOperand(&type1);
  auto dense_shape = model->addOperand(&type2);
  auto weights = model->addOperand(&type11);
  auto combiner = model->addOperand(&type4);
  auto values = model->addOperand(&type10);
  auto output = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t combiner_init[] = {0};
  model->setOperandValue(combiner, combiner_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids, indices, dense_shape, weights, combiner, values}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids, indices, dense_shape, weights, values},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids1 = model->addOperand(&type0);
  auto indices1 = model->addOperand(&type1);
  auto dense_shape1 = model->addOperand(&type2);
  auto weights1 = model->addOperand(&type3);
  auto combiner1 = model->addOperand(&type4);
  auto values1 = model->addOperand(&type5);
  auto output1 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t combiner1_init[] = {1};
  model->setOperandValue(combiner1, combiner1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids1, indices1, dense_shape1, weights1, combiner1, values1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids1, indices1, dense_shape1, weights1, values1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids1 = model->addOperand(&type0);
  auto indices1 = model->addOperand(&type1);
  auto dense_shape1 = model->addOperand(&type2);
  auto weights1 = model->addOperand(&type3);
  auto combiner1 = model->addOperand(&type4);
  auto values1 = model->addOperand(&type5);
  auto output1 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t combiner1_init[] = {1};
  model->setOperandValue(combiner1, combiner1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids1, indices1, dense_shape1, weights1, combiner1, values1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids1, indices1, dense_shape1, weights1, values1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids1 = model->addOperand(&type0);
  auto indices1 = model->addOperand(&type1);
  auto dense_shape1 = model->addOperand(&type2);
  auto weights1 = model->addOperand(&type11);
  auto combiner1 = model->addOperand(&type4);
  auto values1 = model->addOperand(&type10);
  auto output1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t combiner1_init[] = {1};
  model->setOperandValue(combiner1, combiner1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids1, indices1, dense_shape1, weights1, combiner1, values1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids1, indices1, dense_shape1, weights1, values1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  // Phase 1, operands
  auto lookup_ids1 = model->addOperand(&type0);
  auto indices1 = model->addOperand(&type1);
  auto dense_shape1 = model->addOperand(&type2);
  auto weights1 = model->addOperand(&type3);
  auto combiner1 = model->addOperand(&type4);
  auto values1 = model->addOperand(&type5);
  auto output1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t combiner1_init[] = {1};
  model->setOperandValue(combiner1, combiner1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids1, indices1, dense_shape1, weights1, combiner1, values1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids1, indices1, dense_shape1, weights1, values1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  // Phase 1, operands
  auto lookup_ids1 = model->addOperand(&type0);
  auto indices1 = model->addOperand(&type1);
  auto dense_shape1 = model->addOperand(&type2);
  auto weights1 = model->addOperand(&type3);
  auto combiner1 = model->addOperand(&type4);
  auto values1 = model->addOperand(&type5);
  auto output1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t combiner1_init[] = {1};
  model->setOperandValue(combiner1, combiner1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids1, indices1, dense_shape1, weights1, combiner1, values1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids1, indices1, dense_shape1, weights1, values1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_2(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto lookup_ids1 = model->addOperand(&type0);
  auto indices1 = model->addOperand(&type1);
  auto dense_shape1 = model->addOperand(&type2);
  auto weights1 = model->addOperand(&type11);
  auto combiner1 = model->addOperand(&type4);
  auto values1 = model->addOperand(&type10);
  auto output1 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t combiner1_init[] = {1};
  model->setOperandValue(combiner1, combiner1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids1, indices1, dense_shape1, weights1, combiner1, values1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids1, indices1, dense_shape1, weights1, values1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids2 = model->addOperand(&type0);
  auto indices2 = model->addOperand(&type1);
  auto dense_shape2 = model->addOperand(&type2);
  auto weights2 = model->addOperand(&type3);
  auto combiner2 = model->addOperand(&type4);
  auto values2 = model->addOperand(&type5);
  auto output2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t combiner2_init[] = {2};
  model->setOperandValue(combiner2, combiner2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids2, indices2, dense_shape2, weights2, combiner2, values2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids2, indices2, dense_shape2, weights2, values2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids2 = model->addOperand(&type0);
  auto indices2 = model->addOperand(&type1);
  auto dense_shape2 = model->addOperand(&type2);
  auto weights2 = model->addOperand(&type3);
  auto combiner2 = model->addOperand(&type4);
  auto values2 = model->addOperand(&type5);
  auto output2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t combiner2_init[] = {2};
  model->setOperandValue(combiner2, combiner2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids2, indices2, dense_shape2, weights2, combiner2, values2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids2, indices2, dense_shape2, weights2, values2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 3, 2});
  // Phase 1, operands
  auto lookup_ids2 = model->addOperand(&type0);
  auto indices2 = model->addOperand(&type1);
  auto dense_shape2 = model->addOperand(&type2);
  auto weights2 = model->addOperand(&type11);
  auto combiner2 = model->addOperand(&type4);
  auto values2 = model->addOperand(&type10);
  auto output2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t combiner2_init[] = {2};
  model->setOperandValue(combiner2, combiner2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids2, indices2, dense_shape2, weights2, combiner2, values2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids2, indices2, dense_shape2, weights2, values2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  // Phase 1, operands
  auto lookup_ids2 = model->addOperand(&type0);
  auto indices2 = model->addOperand(&type1);
  auto dense_shape2 = model->addOperand(&type2);
  auto weights2 = model->addOperand(&type3);
  auto combiner2 = model->addOperand(&type4);
  auto values2 = model->addOperand(&type5);
  auto output2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t combiner2_init[] = {2};
  model->setOperandValue(combiner2, combiner2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids2, indices2, dense_shape2, weights2, combiner2, values2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids2, indices2, dense_shape2, weights2, values2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  // Phase 1, operands
  auto lookup_ids2 = model->addOperand(&type0);
  auto indices2 = model->addOperand(&type1);
  auto dense_shape2 = model->addOperand(&type2);
  auto weights2 = model->addOperand(&type3);
  auto combiner2 = model->addOperand(&type4);
  auto values2 = model->addOperand(&type5);
  auto output2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t combiner2_init[] = {2};
  model->setOperandValue(combiner2, combiner2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids2, indices2, dense_shape2, weights2, combiner2, values2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids2, indices2, dense_shape2, weights2, values2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_3(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto lookup_ids2 = model->addOperand(&type0);
  auto indices2 = model->addOperand(&type1);
  auto dense_shape2 = model->addOperand(&type2);
  auto weights2 = model->addOperand(&type11);
  auto combiner2 = model->addOperand(&type4);
  auto values2 = model->addOperand(&type10);
  auto output2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t combiner2_init[] = {2};
  model->setOperandValue(combiner2, combiner2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids2, indices2, dense_shape2, weights2, combiner2, values2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids2, indices2, dense_shape2, weights2, values2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3, 2, 3, 2});
  // Phase 1, operands
  auto lookup_ids3 = model->addOperand(&type0);
  auto indices3 = model->addOperand(&type7);
  auto dense_shape3 = model->addOperand(&type0);
  auto weights3 = model->addOperand(&type3);
  auto combiner3 = model->addOperand(&type4);
  auto values3 = model->addOperand(&type5);
  auto output3 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t combiner3_init[] = {0};
  model->setOperandValue(combiner3, combiner3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids3, indices3, dense_shape3, weights3, combiner3, values3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids3, indices3, dense_shape3, weights3, values3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3, 2, 3, 2});
  // Phase 1, operands
  auto lookup_ids3 = model->addOperand(&type0);
  auto indices3 = model->addOperand(&type7);
  auto dense_shape3 = model->addOperand(&type0);
  auto weights3 = model->addOperand(&type3);
  auto combiner3 = model->addOperand(&type4);
  auto values3 = model->addOperand(&type5);
  auto output3 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t combiner3_init[] = {0};
  model->setOperandValue(combiner3, combiner3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids3, indices3, dense_shape3, weights3, combiner3, values3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids3, indices3, dense_shape3, weights3, values3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type14(Type::TENSOR_FLOAT16, {3, 2, 3, 2});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto lookup_ids3 = model->addOperand(&type0);
  auto indices3 = model->addOperand(&type7);
  auto dense_shape3 = model->addOperand(&type0);
  auto weights3 = model->addOperand(&type11);
  auto combiner3 = model->addOperand(&type4);
  auto values3 = model->addOperand(&type10);
  auto output3 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t combiner3_init[] = {0};
  model->setOperandValue(combiner3, combiner3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids3, indices3, dense_shape3, weights3, combiner3, values3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids3, indices3, dense_shape3, weights3, values3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto lookup_ids3 = model->addOperand(&type0);
  auto indices3 = model->addOperand(&type7);
  auto dense_shape3 = model->addOperand(&type0);
  auto weights3 = model->addOperand(&type3);
  auto combiner3 = model->addOperand(&type4);
  auto values3 = model->addOperand(&type5);
  auto output3 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t combiner3_init[] = {0};
  model->setOperandValue(combiner3, combiner3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids3, indices3, dense_shape3, weights3, combiner3, values3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids3, indices3, dense_shape3, weights3, values3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {4, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto lookup_ids3 = model->addOperand(&type0);
  auto indices3 = model->addOperand(&type7);
  auto dense_shape3 = model->addOperand(&type0);
  auto weights3 = model->addOperand(&type3);
  auto combiner3 = model->addOperand(&type4);
  auto values3 = model->addOperand(&type5);
  auto output3 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t combiner3_init[] = {0};
  model->setOperandValue(combiner3, combiner3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids3, indices3, dense_shape3, weights3, combiner3, values3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids3, indices3, dense_shape3, weights3, values3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_4(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type10(Type::TENSOR_FLOAT16, {4, 3, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {3, 3});
  // Phase 1, operands
  auto lookup_ids3 = model->addOperand(&type0);
  auto indices3 = model->addOperand(&type7);
  auto dense_shape3 = model->addOperand(&type0);
  auto weights3 = model->addOperand(&type11);
  auto combiner3 = model->addOperand(&type4);
  auto values3 = model->addOperand(&type10);
  auto output3 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t combiner3_init[] = {0};
  model->setOperandValue(combiner3, combiner3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP_SPARSE, {lookup_ids3, indices3, dense_shape3, weights3, combiner3, values3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup_ids3, indices3, dense_shape3, weights3, values3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

