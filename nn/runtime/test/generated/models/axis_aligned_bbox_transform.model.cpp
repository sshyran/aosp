// clang-format off
// Generated file (from: axis_aligned_bbox_transform.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param, param_init, sizeof(float) * 4);
  static bool param1_init[] = {false};
  model->setOperandValue(param1, param1_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param, param1}, {out, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, imageInfo},
    {out, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param, param_init, sizeof(float) * 4);
  static bool param1_init[] = {false};
  model->setOperandValue(param1, param1_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param, param1}, {out, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, imageInfo},
    {out, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 4);
  static bool param3_init[] = {true};
  model->setOperandValue(param3, param3_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param2, param3}, {out, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, imageInfo},
    {out, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 4);
  static bool param3_init[] = {true};
  model->setOperandValue(param3, param3_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param2, param3}, {out, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, imageInfo},
    {out, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_single_batch(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type6);
  auto bboxDeltas1 = model->addOperand(&type7);
  auto imageInfo1 = model->addOperand(&type8);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type5);
  auto out1 = model->addOperand(&type7);
  auto batchSplit1 = model->addOperand(&type9);
  // Phase 2, operations
  static float param4_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 4);
  static bool param5_init[] = {true};
  model->setOperandValue(param5, param5_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, imageInfo1, param4, param5}, {out1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, imageInfo1},
    {out1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_single_batch(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_single_batch_relaxed(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type6);
  auto bboxDeltas1 = model->addOperand(&type7);
  auto imageInfo1 = model->addOperand(&type8);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type5);
  auto out1 = model->addOperand(&type7);
  auto batchSplit1 = model->addOperand(&type9);
  // Phase 2, operations
  static float param4_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 4);
  static bool param5_init[] = {true};
  model->setOperandValue(param5, param5_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, imageInfo1, param4, param5}, {out1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, imageInfo1},
    {out1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_single_batch_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

