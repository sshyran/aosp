// clang-format off
// Generated file (from: quantize.mod.py). Do not edit
void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.4f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float param6_init[] = {2.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {2.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {4};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {4};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param4, param5, param6, param7, param8, param9, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_relaxed(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.4f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float param6_init[] = {2.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {2.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {4};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {4};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param4, param5, param6, param7, param8, param9, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_float16(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type22(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type24(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type26(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type27);
  auto roi = model->addOperand(&type25);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type24);
  auto param2 = model->addOperand(&type24);
  auto param3 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type28);
  auto roiOut = model->addOperand(&type26);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type23);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type24);
  auto param7 = model->addOperand(&type24);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type22);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {0.4000000059604645f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static _Float16 param6_init[] = {2.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {2.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {4};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {4};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param4, param5, param6, param7, param8, param9, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type29);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.4f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float param6_init[] = {2.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {2.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {4};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {4};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param4, param5, param6, param7, param8, param9, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_relaxed(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type29);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.4f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float param6_init[] = {2.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {2.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {4};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {4};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param4, param5, param6, param7, param8, param9, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_float16(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type24(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type26(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type30(Type::TENSOR_FLOAT16, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type27);
  auto roi = model->addOperand(&type25);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type24);
  auto param2 = model->addOperand(&type24);
  auto param3 = model->addOperand(&type9);
  auto scoresOut = model->addOperand(&type30);
  auto roiOut = model->addOperand(&type26);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type23);
  auto param4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type24);
  auto param7 = model->addOperand(&type24);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type22);
  auto out = model->addOperand(&type29);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {0.4000000059604645f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static _Float16 param6_init[] = {2.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {2.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {4};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {4};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param4, param5, param6, param7, param8, param9, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

