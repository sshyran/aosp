// clang-format off
// Generated file (from: roi_align.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type5);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type5);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto roi1 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type5);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto roi1 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type5);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type6);
  auto roi2 = model->addOperand(&type7);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto out2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type6);
  auto roi2 = model->addOperand(&type7);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto out2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

