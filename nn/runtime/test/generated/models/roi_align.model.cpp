// clang-format off
// Generated file (from: roi_align.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
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
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.0625f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type10);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type12);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type12);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
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
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.0625f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {4};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
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
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type16);
  auto roi1 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type19(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type18);
  auto roi1 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type19(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type18);
  auto roi1 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
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
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type20);
  auto roi1 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param3_init[] = {2, 3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static float param4_init[] = {0.25f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type7);
  auto roi2 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type7);
  auto roi2 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
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
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in2 = model->addOperand(&type16);
  auto roi2 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type19(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in2 = model->addOperand(&type18);
  auto roi2 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type19(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in2 = model->addOperand(&type18);
  auto roi2 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
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
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in2 = model->addOperand(&type20);
  auto roi2 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param6_init[] = {2, 3};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 2);
  static float param7_init[] = {0.25f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param6, param7, param8, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

