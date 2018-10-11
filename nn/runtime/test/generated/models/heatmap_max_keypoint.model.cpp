// clang-format off
// Generated file (from: heatmap_max_keypoint.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 3});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type0);
  auto boxes = model->addOperand(&type1);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {out});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 3});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type0);
  auto boxes = model->addOperand(&type1);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 3});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type3);
  auto boxes1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 3});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type3);
  auto boxes1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

