// clang-format off
// Generated file (from: axis_aligned_bbox_transform.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {4});
  OperandType type6(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type7(Type::TENSOR_FLOAT16, {4, 3});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto roi = model->addOperand(&type8);
  auto bboxDeltas = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type7);
  auto out = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type4(Type::TENSOR_INT32, {7});
  OperandType type5(Type::TENSOR_FLOAT32, {7, 3});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type4);
  auto imageInfo1 = model->addOperand(&type5);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type4(Type::TENSOR_INT32, {7});
  OperandType type5(Type::TENSOR_FLOAT32, {7, 3});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type4);
  auto imageInfo1 = model->addOperand(&type5);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_2(Model *model) {
  OperandType type4(Type::TENSOR_INT32, {7});
  OperandType type6(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type9(Type::TENSOR_FLOAT16, {7, 3});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type8);
  auto bboxDeltas1 = model->addOperand(&type6);
  auto batchSplit1 = model->addOperand(&type4);
  auto imageInfo1 = model->addOperand(&type9);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

