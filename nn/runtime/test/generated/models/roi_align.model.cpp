// clang-format off
// Generated file (from: roi_align.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.0625f, 128);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type22);
  auto roi = model->addOperand(&type24);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type25(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type25);
  auto roi = model->addOperand(&type28);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type27);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type30(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type30(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.0625f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto roi = model->addOperand(&type24);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto roi = model->addOperand(&type28);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type27);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
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

void CreateModel_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
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
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type22);
  auto roi = model->addOperand(&type24);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type25);
  auto roi = model->addOperand(&type28);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type27);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto roi = model->addOperand(&type24);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto roi = model->addOperand(&type28);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type27);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type38);
  auto roi1 = model->addOperand(&type24);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type41(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type40);
  auto roi1 = model->addOperand(&type28);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type43(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type42);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type43(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type42);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type24);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type46(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type46);
  auto roi1 = model->addOperand(&type28);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
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

void CreateModel_dynamic_output_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type38);
  auto roi1 = model->addOperand(&type24);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type40);
  auto roi1 = model->addOperand(&type28);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type42);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type42);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type24);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type46(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type46);
  auto roi1 = model->addOperand(&type28);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto roi2 = model->addOperand(&type24);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
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

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type50);
  auto roi2 = model->addOperand(&type28);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type27);
  auto param18 = model->addOperand(&type27);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type43(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
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
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type43(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type52);
  auto roi2 = model->addOperand(&type24);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
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

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type47(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type53);
  auto roi2 = model->addOperand(&type28);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type27);
  auto param18 = model->addOperand(&type27);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type49);
  auto roi2 = model->addOperand(&type24);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type50);
  auto roi2 = model->addOperand(&type28);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type27);
  auto param18 = model->addOperand(&type27);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
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
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type52);
  auto roi2 = model->addOperand(&type24);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type53);
  auto roi2 = model->addOperand(&type28);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type27);
  auto param18 = model->addOperand(&type27);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.0625f, 128);
  OperandType type56(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type54);
  auto roi3 = model->addOperand(&type56);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type27(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type57(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  OperandType type58(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type59(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type57);
  auto roi3 = model->addOperand(&type59);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type27);
  auto param25 = model->addOperand(&type27);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type61(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type60);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type61);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type61(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type60);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type61);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type56(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.0625f, 128);
  // Phase 1, operands
  auto in3 = model->addOperand(&type62);
  auto roi3 = model->addOperand(&type56);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type63);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type27(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type59(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type64(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type64);
  auto roi3 = model->addOperand(&type59);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type27);
  auto param25 = model->addOperand(&type27);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type65);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type56(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type54);
  auto roi3 = model->addOperand(&type56);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type27(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type57(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  OperandType type59(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type57);
  auto roi3 = model->addOperand(&type59);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type27);
  auto param25 = model->addOperand(&type27);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type60);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type60(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type60);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type56(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  // Phase 1, operands
  auto in3 = model->addOperand(&type62);
  auto roi3 = model->addOperand(&type56);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type27(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type59(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type64(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type64);
  auto roi3 = model->addOperand(&type59);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type27);
  auto param25 = model->addOperand(&type27);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type21);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type21);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type69(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type71(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type70);
  auto roi4 = model->addOperand(&type68);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type71);
  auto roiOut = model->addOperand(&type69);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type67);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type66);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type72(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type74(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type75(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type76(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type77(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type76);
  auto roi4 = model->addOperand(&type74);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type27);
  auto param30 = model->addOperand(&type27);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type77);
  auto roiOut = model->addOperand(&type75);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type73);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type27);
  auto param35 = model->addOperand(&type27);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type72);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.4000000059604645f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type78);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type78);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type69(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type71(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type70);
  auto roi4 = model->addOperand(&type68);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type71);
  auto roiOut = model->addOperand(&type69);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type67);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type79);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type74(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type75(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type76(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type77(Type::TENSOR_FLOAT16, {0});
  OperandType type80(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type76);
  auto roi4 = model->addOperand(&type74);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type27);
  auto param30 = model->addOperand(&type27);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type77);
  auto roiOut = model->addOperand(&type75);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type73);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type27);
  auto param35 = model->addOperand(&type27);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type80);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.4000000059604645f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type35);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type35);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type69(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type71(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type81(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type70);
  auto roi4 = model->addOperand(&type68);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type71);
  auto roiOut = model->addOperand(&type69);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type67);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type81);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type74(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type75(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type76(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type82(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type76);
  auto roi4 = model->addOperand(&type74);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type27);
  auto param30 = model->addOperand(&type27);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type82);
  auto roiOut = model->addOperand(&type75);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type73);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type27);
  auto param35 = model->addOperand(&type27);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type37);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.4000000059604645f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type35);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type35);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type69(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type70(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type71(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type81(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type70);
  auto roi4 = model->addOperand(&type68);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type71);
  auto roiOut = model->addOperand(&type69);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type67);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type6);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type81);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.4f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_zero_sized_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type74(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type75(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type76(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type82(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type76);
  auto roi4 = model->addOperand(&type74);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type27);
  auto param30 = model->addOperand(&type27);
  auto param31 = model->addOperand(&type5);
  auto scoresOut = model->addOperand(&type82);
  auto roiOut = model->addOperand(&type75);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type73);
  auto param32 = model->addOperand(&type5);
  auto param33 = model->addOperand(&type5);
  auto param34 = model->addOperand(&type27);
  auto param35 = model->addOperand(&type27);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type37);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.4000000059604645f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {-1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {2.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {4};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param32, param33, param34, param35, param36, param37, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

inline bool is_ignored_zero_sized_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

