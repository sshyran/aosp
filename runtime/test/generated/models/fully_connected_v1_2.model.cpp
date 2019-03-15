// clang-format off
// Generated file (from: fully_connected_v1_2.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16(Model *model) {
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type6(Type::TENSOR_FLOAT16, {1, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto op2 = model->addOperand(&type6);
  auto b0 = model->addOperand(&type4);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 1);
  static _Float16 b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(_Float16) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

inline bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_mult_gt_1(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto b0 = model->addOperand(&type7);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t op2_init[] = {124};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 1);
  static int32_t b0_init[] = {16};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

inline bool is_ignored_quant8_mult_gt_1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type11);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type11);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type6(Type::TENSOR_FLOAT16, {1, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto op2 = model->addOperand(&type6);
  auto b0 = model->addOperand(&type4);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 1);
  static _Float16 b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(_Float16) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_mult_gt_1(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto b0 = model->addOperand(&type7);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type13);
  // Phase 2, operations
  static uint8_t op2_init[] = {124};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 1);
  static int32_t b0_init[] = {16};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_mult_gt_1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

