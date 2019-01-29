// clang-format off
// Generated file (from: transpose_conv2d.mod.py). Do not edit
void CreateModel_nhwc_none(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type23(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type24(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type23);
  auto op3 = model->addOperand(&type24);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_none_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_none_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type31(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type32(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type31);
  auto op3 = model->addOperand(&type32);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type33(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type34(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type33);
  auto op3 = model->addOperand(&type34);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu1_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu1_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 80);
  OperandType type35(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type36(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type35);
  auto op3 = model->addOperand(&type36);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relu6_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 5, 5, 2});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relu6_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type43(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type44(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type43);
  auto op3 = model->addOperand(&type44);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_none_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_none_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type47(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type48(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type47);
  auto op3 = model->addOperand(&type48);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type49(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type49);
  auto op3 = model->addOperand(&type50);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu1_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu1_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 2, 5, 5});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 5}, 0.5f, 80);
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type52(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type51);
  auto op3 = model->addOperand(&type52);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relu6_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2, 5, 5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_relu6_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type56(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type57(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type56);
  auto op3 = model->addOperand(&type57);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_none_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_none_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type59(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type60(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type59);
  auto op3 = model->addOperand(&type60);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type61(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type62(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type61);
  auto op3 = model->addOperand(&type62);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu1_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu1_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type63(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type64(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type63);
  auto op3 = model->addOperand(&type64);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relu6_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 5, 5, 2};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relu6_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type65(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type66(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type65);
  auto op3 = model->addOperand(&type66);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_none_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_none_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type67(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type68(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type67);
  auto op3 = model->addOperand(&type68);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type69(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type70(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type69);
  auto op3 = model->addOperand(&type70);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu1_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu1_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-6, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type39);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type17);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type21(Type::TENSOR_INT32, {2}, 0.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int8_t op2_init[] = {4, 12, 20, 28, 36, 44, 52, 60, 68, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 18);
  static int32_t op3_init[] = {-24, -16};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 80);
  OperandType type71(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f, 0.5f},0));
  OperandType type72(Type::TENSOR_INT32, {2}, 0.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto op2 = model->addOperand(&type71);
  auto op3 = model->addOperand(&type72);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type26);
  auto op3 = model->addOperand(&type27);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 18);
  static _Float16 op3_init[] = {-1.5f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 2);
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relu6_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 3, 3, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto op2 = model->addOperand(&type29);
  auto op3 = model->addOperand(&type30);
  auto shape = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto act = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape_init[] = {1, 2, 5, 5};
  model->setOperandValue(shape, shape_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, shape, param, param1, param2, act, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relu6_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type76(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type76);
  // Phase 2, operations
  static uint8_t op21_init[] = {164, 148, 152, 164, 160, 148, 140, 132, 144};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type76(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type76);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type76(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type77(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type78(Type::TENSOR_INT32, {1}, 0.0f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type77);
  auto op31 = model->addOperand(&type78);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type76);
  // Phase 2, operations
  static int8_t op21_init[] = {36, 20, 24, 36, 32, 20, 12, 4, 16};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type76(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type79(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type80(Type::TENSOR_INT32, {1}, 0.0f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type79);
  auto op31 = model->addOperand(&type80);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type76);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type81(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type82(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  OperandType type84(Type::TENSOR_FLOAT16, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type81);
  auto op21 = model->addOperand(&type82);
  auto op31 = model->addOperand(&type83);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type84);
  // Phase 2, operations
  static _Float16 op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type81(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type84(Type::TENSOR_FLOAT16, {1, 3, 4, 1});
  OperandType type85(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type81);
  auto op21 = model->addOperand(&type85);
  auto op31 = model->addOperand(&type86);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type84);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type88(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type88);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type88(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type88);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type88(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type88);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type88(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type88);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type90(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type90);
  // Phase 2, operations
  static uint8_t op21_init[] = {164, 148, 152, 164, 160, 148, 140, 132, 144};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type90(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type90);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type77(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type78(Type::TENSOR_INT32, {1}, 0.0f, 0);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type90(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type77);
  auto op31 = model->addOperand(&type78);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type90);
  // Phase 2, operations
  static int8_t op21_init[] = {36, 20, 24, 36, 32, 20, 12, 4, 16};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type90(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 20.0f, 50);
  OperandType type91(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type92(Type::TENSOR_INT32, {1}, 0.0f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type91);
  auto op31 = model->addOperand(&type92);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type90);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type82(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  OperandType type93(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type94(Type::TENSOR_FLOAT16, {1, 1, 3, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type93);
  auto op21 = model->addOperand(&type82);
  auto op31 = model->addOperand(&type83);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type94);
  // Phase 2, operations
  static _Float16 op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type85(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  OperandType type93(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type94(Type::TENSOR_FLOAT16, {1, 1, 3, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type93);
  auto op21 = model->addOperand(&type85);
  auto op31 = model->addOperand(&type86);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type94);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type7);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static uint8_t op21_init[] = {164, 148, 152, 164, 160, 148, 140, 132, 144};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type77(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type78(Type::TENSOR_INT32, {1}, 0.0f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type77);
  auto op31 = model->addOperand(&type78);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static int8_t op21_init[] = {36, 20, 24, 36, 32, 20, 12, 4, 16};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  OperandType type96(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type97(Type::TENSOR_INT32, {1}, 0.0f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type73);
  auto op21 = model->addOperand(&type96);
  auto op31 = model->addOperand(&type97);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type81(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type82(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type81);
  auto op21 = model->addOperand(&type82);
  auto op31 = model->addOperand(&type83);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type81(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type85(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type81);
  auto op21 = model->addOperand(&type85);
  auto op31 = model->addOperand(&type86);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 3, 4, 1};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type87(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type87);
  auto op21 = model->addOperand(&type8);
  auto op31 = model->addOperand(&type9);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static uint8_t op21_init[] = {164, 148, 152, 164, 160, 148, 140, 132, 144};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type74(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type75(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type74);
  auto op31 = model->addOperand(&type75);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_channelQuant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type77(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type78(Type::TENSOR_INT32, {1}, 0.0f, 0);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type77);
  auto op31 = model->addOperand(&type78);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static int8_t op21_init[] = {36, 20, 24, 36, 32, 20, 12, 4, 16};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_channelQuant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 2.0f, 0);
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  OperandType type98(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 3, 3, 1}, 0.0f, 0, SymmPerChannelQuantParams({0.25f},0));
  OperandType type99(Type::TENSOR_INT32, {1}, 0.0f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type89);
  auto op21 = model->addOperand(&type98);
  auto op31 = model->addOperand(&type99);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type95);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_channelQuant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type82(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  OperandType type93(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type93);
  auto op21 = model->addOperand(&type82);
  auto op31 = model->addOperand(&type83);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type85(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  OperandType type93(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type93);
  auto op21 = model->addOperand(&type85);
  auto op31 = model->addOperand(&type86);
  auto shape1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape1_init[] = {1, 1, 3, 4};
  model->setOperandValue(shape1, shape1_init, sizeof(int32_t) * 4);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, shape1, param3, param4, param5, param6, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type13);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type13);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type103(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type100);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type103);
  // Phase 2, operations
  static uint8_t op22_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type103(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type100);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type103);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type106(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type104);
  auto op22 = model->addOperand(&type105);
  auto op32 = model->addOperand(&type83);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type106);
  // Phase 2, operations
  static _Float16 op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 18);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type106(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type104);
  auto op22 = model->addOperand(&type107);
  auto op32 = model->addOperand(&type86);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type106);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type109);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type109);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type109);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type109);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type111(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type110);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type111);
  // Phase 2, operations
  static uint8_t op22_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type111(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type110);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type111);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type113(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type112);
  auto op22 = model->addOperand(&type105);
  auto op32 = model->addOperand(&type83);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type113);
  // Phase 2, operations
  static _Float16 op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 18);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type113(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type112);
  auto op22 = model->addOperand(&type107);
  auto op32 = model->addOperand(&type86);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type113);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type114(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type100);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type114);
  // Phase 2, operations
  static uint8_t op22_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type114(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type100);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type114);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type104);
  auto op22 = model->addOperand(&type105);
  auto op32 = model->addOperand(&type83);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 18);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type104);
  auto op22 = model->addOperand(&type107);
  auto op32 = model->addOperand(&type86);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 4, 4, 1};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type108);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type9);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type114(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type110);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type114);
  // Phase 2, operations
  static uint8_t op22_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type102(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type114(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 16.0f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type110);
  auto op22 = model->addOperand(&type101);
  auto op32 = model->addOperand(&type102);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type114);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type112);
  auto op22 = model->addOperand(&type105);
  auto op32 = model->addOperand(&type83);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 18);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type112);
  auto op22 = model->addOperand(&type107);
  auto op32 = model->addOperand(&type86);
  auto shape2 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape2_init[] = {1, 1, 4, 4};
  model->setOperandValue(shape2, shape2_init, sizeof(int32_t) * 4);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, shape2, param7, param8, param9, param10, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type14);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type14);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type115(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type117(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type115);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type117);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 18);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type115(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type117(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type115);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type117);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type118(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type104);
  auto op23 = model->addOperand(&type105);
  auto op33 = model->addOperand(&type83);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type118);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 18);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type118(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type104);
  auto op23 = model->addOperand(&type107);
  auto op33 = model->addOperand(&type86);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type118);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type119(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type119);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type119(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type119);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type119(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type119);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type119(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type119);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type120(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.25f, 10);
  OperandType type121(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type120);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type121);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 18);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type120(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.25f, 10);
  OperandType type121(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type120);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type121);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type122(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type112);
  auto op23 = model->addOperand(&type105);
  auto op33 = model->addOperand(&type83);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type122);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 18);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type122(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type112);
  auto op23 = model->addOperand(&type107);
  auto op33 = model->addOperand(&type86);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type122);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type115(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type123(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type115);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type123);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 18);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type115(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type123(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type115);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type123);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type104);
  auto op23 = model->addOperand(&type105);
  auto op33 = model->addOperand(&type83);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 18);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type104);
  auto op23 = model->addOperand(&type107);
  auto op33 = model->addOperand(&type86);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 6, 6, 1};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type108);
  auto op23 = model->addOperand(&type12);
  auto op33 = model->addOperand(&type9);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type120(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.25f, 10);
  OperandType type123(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type120);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type123);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 18);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type120(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.25f, 10);
  OperandType type123(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 32.0f, 80);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type120);
  auto op23 = model->addOperand(&type101);
  auto op33 = model->addOperand(&type116);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type123);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type112);
  auto op23 = model->addOperand(&type105);
  auto op33 = model->addOperand(&type83);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 18);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_weight_as_input_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type112);
  auto op23 = model->addOperand(&type107);
  auto op33 = model->addOperand(&type86);
  auto shape3 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t shape3_init[] = {1, 1, 6, 6};
  model->setOperandValue(shape3, shape3_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, shape3, param11, param12, param13, param14, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type8);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type8);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type125(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 20.0f, 50);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type100);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type125);
  // Phase 2, operations
  static uint8_t op24_init[] = {132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 18);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type125(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 20.0f, 50);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type100);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type125);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type82(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type104);
  auto op24 = model->addOperand(&type105);
  auto op34 = model->addOperand(&type83);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type82);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 18);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type82(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type104);
  auto op24 = model->addOperand(&type107);
  auto op34 = model->addOperand(&type86);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type82);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type126(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type126);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type126(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type126);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type126(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type126);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type126(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type5(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type126);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type127(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 20.0f, 50);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type110);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type127);
  // Phase 2, operations
  static uint8_t op24_init[] = {132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 18);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type127(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 20.0f, 50);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type110);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type127);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type128(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type5(Type::INT32, {});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type112);
  auto op24 = model->addOperand(&type105);
  auto op34 = model->addOperand(&type83);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type128);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 18);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type128(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type5(Type::INT32, {});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type112);
  auto op24 = model->addOperand(&type107);
  auto op34 = model->addOperand(&type86);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type128);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type11);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op14 = model->addOperand(&type100);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type95);
  // Phase 2, operations
  static uint8_t op24_init[] = {132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 18);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op14 = model->addOperand(&type100);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type95);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type104);
  auto op24 = model->addOperand(&type105);
  auto op34 = model->addOperand(&type83);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 18);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type104);
  auto op24 = model->addOperand(&type107);
  auto op34 = model->addOperand(&type86);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type108);
  auto op24 = model->addOperand(&type12);
  auto op34 = model->addOperand(&type9);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op14 = model->addOperand(&type110);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type95);
  // Phase 2, operations
  static uint8_t op24_init[] = {132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 18);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 0.5f, 100);
  OperandType type116(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type124(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type95(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 20.0f, 50);
  // Phase 1, operands
  auto op14 = model->addOperand(&type110);
  auto op24 = model->addOperand(&type124);
  auto op34 = model->addOperand(&type116);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type95);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type83(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type112);
  auto op24 = model->addOperand(&type105);
  auto op34 = model->addOperand(&type83);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type58);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 18);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_weight_as_input_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type86(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type112);
  auto op24 = model->addOperand(&type107);
  auto op34 = model->addOperand(&type86);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {2};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param15, param16, param17, param18, param19, param20, param21, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}
