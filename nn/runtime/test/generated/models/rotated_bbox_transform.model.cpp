// clang-format off
// Generated file (from: rotated_bbox_transform.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {8, 6});
  OperandType type1(Type::TENSOR_FLOAT32, {8, 10});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type7);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param, param_init, sizeof(float) * 4);
  static bool param1_init[] = {false};
  model->setOperandValue(param1, param1_init, sizeof(bool) * 1);
  static bool param2_init[] = {true};
  model->setOperandValue(param2, param2_init, sizeof(bool) * 1);
  static int32_t param3_init[] = {-90};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {90};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param, param1, param2, param3, param4, param5}, {out, batchSplit});
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
  OperandType type0(Type::TENSOR_FLOAT32, {8, 6});
  OperandType type1(Type::TENSOR_FLOAT32, {8, 10});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type7);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param, param_init, sizeof(float) * 4);
  static bool param1_init[] = {false};
  model->setOperandValue(param1, param1_init, sizeof(bool) * 1);
  static bool param2_init[] = {true};
  model->setOperandValue(param2, param2_init, sizeof(bool) * 1);
  static int32_t param3_init[] = {-90};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {90};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param, param1, param2, param3, param4, param5}, {out, batchSplit});
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
  OperandType type0(Type::TENSOR_FLOAT32, {8, 6});
  OperandType type1(Type::TENSOR_FLOAT32, {8, 10});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type7);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 4);
  static bool param7_init[] = {true};
  model->setOperandValue(param7, param7_init, sizeof(bool) * 1);
  static bool param8_init[] = {false};
  model->setOperandValue(param8, param8_init, sizeof(bool) * 1);
  static int32_t param9_init[] = {-90};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {90};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param6, param7, param8, param9, param10, param11}, {out, batchSplit});
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
  OperandType type0(Type::TENSOR_FLOAT32, {8, 6});
  OperandType type1(Type::TENSOR_FLOAT32, {8, 10});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type7);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 4);
  static bool param7_init[] = {true};
  model->setOperandValue(param7, param7_init, sizeof(bool) * 1);
  static bool param8_init[] = {false};
  model->setOperandValue(param8, param8_init, sizeof(bool) * 1);
  static int32_t param9_init[] = {-90};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {90};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param6, param7, param8, param9, param10, param11}, {out, batchSplit});
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

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {8, 6});
  OperandType type1(Type::TENSOR_FLOAT32, {8, 10});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type6);
  auto param16 = model->addOperand(&type6);
  auto param17 = model->addOperand(&type7);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param12_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 4);
  static bool param13_init[] = {true};
  model->setOperandValue(param13, param13_init, sizeof(bool) * 1);
  static bool param14_init[] = {true};
  model->setOperandValue(param14, param14_init, sizeof(bool) * 1);
  static int32_t param15_init[] = {-90};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {90};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {-1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param12, param13, param14, param15, param16, param17}, {out, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, imageInfo},
    {out, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {8, 6});
  OperandType type1(Type::TENSOR_FLOAT32, {8, 10});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 3});
  OperandType type3(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto imageInfo = model->addOperand(&type2);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type6);
  auto param16 = model->addOperand(&type6);
  auto param17 = model->addOperand(&type7);
  auto out = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type3);
  // Phase 2, operations
  static float param12_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 4);
  static bool param13_init[] = {true};
  model->setOperandValue(param13, param13_init, sizeof(bool) * 1);
  static bool param14_init[] = {true};
  model->setOperandValue(param14, param14_init, sizeof(bool) * 1);
  static int32_t param15_init[] = {-90};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {90};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {-1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi, bboxDeltas, imageInfo, param12, param13, param14, param15, param16, param17}, {out, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, imageInfo},
    {out, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_single_batch(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type11(Type::TENSOR_INT32, {1});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 10});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type8);
  auto bboxDeltas1 = model->addOperand(&type9);
  auto imageInfo1 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type6);
  auto param22 = model->addOperand(&type6);
  auto param23 = model->addOperand(&type7);
  auto out1 = model->addOperand(&type9);
  auto batchSplit1 = model->addOperand(&type11);
  // Phase 2, operations
  static float param18_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 4);
  static bool param19_init[] = {true};
  model->setOperandValue(param19, param19_init, sizeof(bool) * 1);
  static bool param20_init[] = {true};
  model->setOperandValue(param20, param20_init, sizeof(bool) * 1);
  static int32_t param21_init[] = {-90};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {90};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float param23_init[] = {-1.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi1, bboxDeltas1, imageInfo1, param18, param19, param20, param21, param22, param23}, {out1, batchSplit1});
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
  OperandType type10(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type11(Type::TENSOR_INT32, {1});
  OperandType type4(Type::TENSOR_FLOAT32, {4});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 10});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type8);
  auto bboxDeltas1 = model->addOperand(&type9);
  auto imageInfo1 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type6);
  auto param22 = model->addOperand(&type6);
  auto param23 = model->addOperand(&type7);
  auto out1 = model->addOperand(&type9);
  auto batchSplit1 = model->addOperand(&type11);
  // Phase 2, operations
  static float param18_init[] = {2.0f, 2.0f, 0.5f, 0.5f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 4);
  static bool param19_init[] = {true};
  model->setOperandValue(param19, param19_init, sizeof(bool) * 1);
  static bool param20_init[] = {true};
  model->setOperandValue(param20, param20_init, sizeof(bool) * 1);
  static int32_t param21_init[] = {-90};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {90};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float param23_init[] = {-1.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_ROTATED_BBOX_TRANSFORM, {roi1, bboxDeltas1, imageInfo1, param18, param19, param20, param21, param22, param23}, {out1, batchSplit1});
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

