// clang-format off
// Generated file (from: heatmap_max_keypoint.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 3, 1});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 3, 1});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type7);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type7);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type4);
  auto boxes1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type4);
  auto boxes1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type4);
  auto boxes1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type4);
  auto boxes1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

