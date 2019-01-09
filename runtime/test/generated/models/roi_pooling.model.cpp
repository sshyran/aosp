// clang-format off
// Generated file (from: roi_pooling.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
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
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
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
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  // Phase 1, operands
  auto in = model->addOperand(&type9);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
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

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type13(Type::FLOAT16, {});
  OperandType type14(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto in = model->addOperand(&type11);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type13);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static _Float16 param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type16(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
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
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type16(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
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
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type17);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static float param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
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

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::FLOAT16, {});
  OperandType type14(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto in = model->addOperand(&type19);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type13);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static _Float16 param1_init[] = {0.5f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto roi1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static float param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
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
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto roi1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static float param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
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
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.04f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type21);
  auto roi1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static float param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
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

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type25(Type::TENSOR_FLOAT16, {4, 5});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type23);
  auto roi1 = model->addOperand(&type25);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type13);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static _Float16 param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type27(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type26);
  auto roi1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static float param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
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
  OperandType type26(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type27(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type26);
  auto roi1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static float param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
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
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.04f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 5});
  // Phase 1, operands
  auto in1 = model->addOperand(&type28);
  auto roi1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static float param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
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

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {4, 5});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  OperandType type31(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type30);
  auto roi1 = model->addOperand(&type25);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type13);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param2_init[] = {2, 3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static _Float16 param3_init[] = {0.25f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

