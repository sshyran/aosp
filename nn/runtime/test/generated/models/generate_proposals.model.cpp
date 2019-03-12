// clang-format off
// Generated file (from: generate_proposals.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 0.05f, 128);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {4}, 0.01f, 100);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type26);
  auto bboxDeltas = model->addOperand(&type23);
  auto anchors = model->addOperand(&type22);
  auto imageInfo = model->addOperand(&type24);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type27);
  auto roiOut = model->addOperand(&type25);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type32(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type34(Type::TENSOR_FLOAT16, {4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type33);
  auto bboxDeltas = model->addOperand(&type29);
  auto anchors = model->addOperand(&type28);
  auto imageInfo = model->addOperand(&type30);
  auto param = model->addOperand(&type31);
  auto param1 = model->addOperand(&type31);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type31);
  auto param5 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type34);
  auto roiOut = model->addOperand(&type32);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type35);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type35);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {4}, 0.01f, 100);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 0.05f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type26);
  auto bboxDeltas = model->addOperand(&type36);
  auto anchors = model->addOperand(&type22);
  auto imageInfo = model->addOperand(&type24);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type27);
  auto roiOut = model->addOperand(&type25);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type32(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type34(Type::TENSOR_FLOAT16, {4});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type33);
  auto bboxDeltas = model->addOperand(&type37);
  auto anchors = model->addOperand(&type28);
  auto imageInfo = model->addOperand(&type30);
  auto param = model->addOperand(&type31);
  auto param1 = model->addOperand(&type31);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type31);
  auto param5 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type34);
  auto roiOut = model->addOperand(&type32);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type19);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type19);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type22(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 0.05f, 128);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type26);
  auto bboxDeltas = model->addOperand(&type23);
  auto anchors = model->addOperand(&type22);
  auto imageInfo = model->addOperand(&type24);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type39);
  auto roiOut = model->addOperand(&type40);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type41(Type::TENSOR_FLOAT16, {0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type33);
  auto bboxDeltas = model->addOperand(&type29);
  auto anchors = model->addOperand(&type28);
  auto imageInfo = model->addOperand(&type30);
  auto param = model->addOperand(&type31);
  auto param1 = model->addOperand(&type31);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type31);
  auto param5 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type41);
  auto roiOut = model->addOperand(&type42);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type35);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type19);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type35);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type19);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type22(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 0.05f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type26);
  auto bboxDeltas = model->addOperand(&type36);
  auto anchors = model->addOperand(&type22);
  auto imageInfo = model->addOperand(&type24);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type39);
  auto roiOut = model->addOperand(&type40);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type41(Type::TENSOR_FLOAT16, {0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type33);
  auto bboxDeltas = model->addOperand(&type37);
  auto anchors = model->addOperand(&type28);
  auto imageInfo = model->addOperand(&type30);
  auto param = model->addOperand(&type31);
  auto param1 = model->addOperand(&type31);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type31);
  auto param5 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type41);
  auto roiOut = model->addOperand(&type42);
  auto batchSplit = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type43(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 16}, 0.1f, 128);
  OperandType type45(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type46(Type::TENSOR_QUANT16_ASYMM, {30, 4}, 0.125f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {30}, 0.005f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type47);
  auto bboxDeltas1 = model->addOperand(&type44);
  auto anchors1 = model->addOperand(&type43);
  auto imageInfo1 = model->addOperand(&type45);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type48);
  auto roiOut1 = model->addOperand(&type46);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type31(Type::FLOAT16, {});
  OperandType type32(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type49(Type::TENSOR_FLOAT16, {2, 4, 4, 16});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type51(Type::TENSOR_FLOAT16, {30, 4});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type53(Type::TENSOR_FLOAT16, {30});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type49);
  auto anchors1 = model->addOperand(&type32);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type31);
  auto param7 = model->addOperand(&type31);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type31);
  auto param11 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type53);
  auto roiOut1 = model->addOperand(&type51);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type54);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type54);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type43(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type45(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type46(Type::TENSOR_QUANT16_ASYMM, {30, 4}, 0.125f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {30}, 0.005f, 0);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {2, 16, 4, 4}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type47);
  auto bboxDeltas1 = model->addOperand(&type55);
  auto anchors1 = model->addOperand(&type43);
  auto imageInfo1 = model->addOperand(&type45);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type48);
  auto roiOut1 = model->addOperand(&type46);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type31(Type::FLOAT16, {});
  OperandType type32(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type51(Type::TENSOR_FLOAT16, {30, 4});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type53(Type::TENSOR_FLOAT16, {30});
  OperandType type56(Type::TENSOR_FLOAT16, {2, 16, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type56);
  auto anchors1 = model->addOperand(&type32);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type31);
  auto param7 = model->addOperand(&type31);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type31);
  auto param11 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type53);
  auto roiOut1 = model->addOperand(&type51);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type19);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type19);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type43(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 16}, 0.1f, 128);
  OperandType type45(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {0}, 0.005f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type47);
  auto bboxDeltas1 = model->addOperand(&type44);
  auto anchors1 = model->addOperand(&type43);
  auto imageInfo1 = model->addOperand(&type45);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type57);
  auto roiOut1 = model->addOperand(&type40);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type31(Type::FLOAT16, {});
  OperandType type32(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type41(Type::TENSOR_FLOAT16, {0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type49(Type::TENSOR_FLOAT16, {2, 4, 4, 16});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type49);
  auto anchors1 = model->addOperand(&type32);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type31);
  auto param7 = model->addOperand(&type31);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type31);
  auto param11 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type41);
  auto roiOut1 = model->addOperand(&type42);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type54);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type19);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type54);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type19);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type43(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type45(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {2, 16, 4, 4}, 0.1f, 128);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {0}, 0.005f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type47);
  auto bboxDeltas1 = model->addOperand(&type55);
  auto anchors1 = model->addOperand(&type43);
  auto imageInfo1 = model->addOperand(&type45);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type57);
  auto roiOut1 = model->addOperand(&type40);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type31(Type::FLOAT16, {});
  OperandType type32(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type41(Type::TENSOR_FLOAT16, {0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type56(Type::TENSOR_FLOAT16, {2, 16, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type56);
  auto anchors1 = model->addOperand(&type32);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type31);
  auto param7 = model->addOperand(&type31);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type31);
  auto param11 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type41);
  auto roiOut1 = model->addOperand(&type42);
  auto batchSplit1 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type20(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type16);
  auto bboxDeltas2 = model->addOperand(&type17);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type20);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type20(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type16);
  auto bboxDeltas2 = model->addOperand(&type17);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type20);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type58(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.125f, 0);
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 128);
  OperandType type60(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 100);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type61);
  auto bboxDeltas2 = model->addOperand(&type59);
  auto anchors2 = model->addOperand(&type58);
  auto imageInfo2 = model->addOperand(&type24);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type39);
  auto roiOut2 = model->addOperand(&type60);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type64(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type66(Type::TENSOR_FLOAT16, {0});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type65);
  auto bboxDeltas2 = model->addOperand(&type63);
  auto anchors2 = model->addOperand(&type62);
  auto imageInfo2 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type31);
  auto param13 = model->addOperand(&type31);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type31);
  auto param17 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type66);
  auto roiOut2 = model->addOperand(&type64);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.30000001192092896f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type20(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type67(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type68(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type68);
  auto bboxDeltas2 = model->addOperand(&type67);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type20);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type20(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type67(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type68(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type68);
  auto bboxDeltas2 = model->addOperand(&type67);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type20);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type58(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.125f, 0);
  OperandType type60(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 128);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 100);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type70);
  auto bboxDeltas2 = model->addOperand(&type69);
  auto anchors2 = model->addOperand(&type58);
  auto imageInfo2 = model->addOperand(&type24);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type39);
  auto roiOut2 = model->addOperand(&type60);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type64(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type66(Type::TENSOR_FLOAT16, {0});
  OperandType type71(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type72(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type72);
  auto bboxDeltas2 = model->addOperand(&type71);
  auto anchors2 = model->addOperand(&type62);
  auto imageInfo2 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type31);
  auto param13 = model->addOperand(&type31);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type31);
  auto param17 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type66);
  auto roiOut2 = model->addOperand(&type64);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.30000001192092896f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type16);
  auto bboxDeltas2 = model->addOperand(&type17);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type38);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type16);
  auto bboxDeltas2 = model->addOperand(&type17);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type38);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type58(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.125f, 0);
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 128);
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 100);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type61);
  auto bboxDeltas2 = model->addOperand(&type59);
  auto anchors2 = model->addOperand(&type58);
  auto imageInfo2 = model->addOperand(&type24);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type39);
  auto roiOut2 = model->addOperand(&type40);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type41(Type::TENSOR_FLOAT16, {0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type65);
  auto bboxDeltas2 = model->addOperand(&type63);
  auto anchors2 = model->addOperand(&type62);
  auto imageInfo2 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type31);
  auto param13 = model->addOperand(&type31);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type31);
  auto param17 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type41);
  auto roiOut2 = model->addOperand(&type42);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.30000001192092896f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type67(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type68(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type68);
  auto bboxDeltas2 = model->addOperand(&type67);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type38);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type19(Type::TENSOR_FLOAT32, {0});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type38(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type67(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type68(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type68);
  auto bboxDeltas2 = model->addOperand(&type67);
  auto anchors2 = model->addOperand(&type18);
  auto imageInfo2 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type19);
  auto roiOut2 = model->addOperand(&type38);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type58(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.125f, 0);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 128);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 100);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type70);
  auto bboxDeltas2 = model->addOperand(&type69);
  auto anchors2 = model->addOperand(&type58);
  auto imageInfo2 = model->addOperand(&type24);
  auto param12 = model->addOperand(&type8);
  auto param13 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type8);
  auto param17 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type39);
  auto roiOut2 = model->addOperand(&type40);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.3f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::TENSOR_INT32, {0});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::FLOAT16, {});
  OperandType type41(Type::TENSOR_FLOAT16, {0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type62(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type71(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type72(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type72);
  auto bboxDeltas2 = model->addOperand(&type71);
  auto anchors2 = model->addOperand(&type62);
  auto imageInfo2 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type31);
  auto param13 = model->addOperand(&type31);
  auto param14 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type9);
  auto param16 = model->addOperand(&type31);
  auto param17 = model->addOperand(&type31);
  auto layout = model->addOperand(&type0);
  auto scoresOut2 = model->addOperand(&type41);
  auto roiOut2 = model->addOperand(&type42);
  auto batchSplit2 = model->addOperand(&type21);
  // Phase 2, operations
  static _Float16 param12_init[] = {4.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {4.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {-1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.30000001192092896f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores2, bboxDeltas2, anchors2, imageInfo2, param12, param13, param14, param15, param16, param17, layout}, {scoresOut2, roiOut2, batchSplit2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, bboxDeltas2, anchors2, imageInfo2},
    {scoresOut2, roiOut2, batchSplit2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

