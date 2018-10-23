// clang-format off
// Generated file (from: conv2d_v1_2.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
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
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
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
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-200.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-200.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
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
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 0.5f, 127);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 127);
  OperandType type25(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 1.0f, 50);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type23);
  auto op21 = model->addOperand(&type24);
  auto op31 = model->addOperand(&type25);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type26);
  // Phase 2, operations
  static uint8_t op21_init[] = {129, 135, 141, 131, 137, 143, 133, 139, 145};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-800};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_weight_as_input_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 0.5f, 127);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 127);
  OperandType type25(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 1.0f, 50);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type23);
  auto op21 = model->addOperand(&type24);
  auto op31 = model->addOperand(&type25);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_weight_as_input_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type27);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-200.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type27);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-200.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
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
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 127);
  OperandType type25(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 0.5f, 127);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 1.0f, 50);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type24);
  auto op31 = model->addOperand(&type25);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type29);
  // Phase 2, operations
  static uint8_t op21_init[] = {129, 135, 141, 131, 137, 143, 133, 139, 145};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-800};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type27);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 3, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type27);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_weight_as_input_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 127);
  OperandType type25(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 0.5f, 127);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 4}, 1.0f, 50);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type24);
  auto op31 = model->addOperand(&type25);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_nchw_weight_as_input_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  // Phase 2, operations
  static float op22_init[] = {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 9);
  static float op32_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 3);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  // Phase 2, operations
  static float op22_init[] = {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 9);
  static float op32_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 3);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 3}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto op22 = model->addOperand(&type31);
  auto op32 = model->addOperand(&type32);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type30);
  // Phase 2, operations
  static uint8_t op22_init[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 9);
  static int32_t op32_init[] = {0, 0, 0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 3);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc_weight_as_input_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_weight_as_input_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc_weight_as_input_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 3}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto op22 = model->addOperand(&type31);
  auto op32 = model->addOperand(&type32);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_weight_as_input_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type33);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type33);
  // Phase 2, operations
  static float op22_init[] = {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 9);
  static float op32_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 3);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type33);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type33);
  // Phase 2, operations
  static float op22_init[] = {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 9);
  static float op32_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 3);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type34);
  auto op22 = model->addOperand(&type31);
  auto op32 = model->addOperand(&type32);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type34);
  // Phase 2, operations
  static uint8_t op22_init[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 9);
  static int32_t op32_init[] = {0, 0, 0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 3);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type33);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw_weight_as_input_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type33);
  auto op22 = model->addOperand(&type7);
  auto op32 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_weight_as_input_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw_weight_as_input_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type34);
  auto op22 = model->addOperand(&type31);
  auto op32 = model->addOperand(&type32);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {1};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param11, param12, param13, param14, param15, param16, param17, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_weight_as_input_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type9);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 3);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type9);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 3);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 2.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type35);
  auto op23 = model->addOperand(&type36);
  auto op33 = model->addOperand(&type32);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type37);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 136, 142, 132, 138, 144, 134, 140, 146};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0, 0, 0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 3);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_weight_as_input_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_weight_as_input_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_weight_as_input_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 2.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type35);
  auto op23 = model->addOperand(&type36);
  auto op33 = model->addOperand(&type32);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_weight_as_input_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 3);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 3);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 3}, 0.5f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 3}, 2.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type38);
  auto op23 = model->addOperand(&type36);
  auto op33 = model->addOperand(&type32);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type39);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 136, 142, 132, 138, 144, 134, 140, 146};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0, 0, 0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 3);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_weight_as_input_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {3, 1, 1, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op13 = model->addOperand(&type11);
  auto op23 = model->addOperand(&type7);
  auto op33 = model->addOperand(&type8);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_weight_as_input_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_weight_as_input_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {3, 1, 1, 3}, 0.5f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 3}, 0.5f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 3}, 2.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type38);
  auto op23 = model->addOperand(&type36);
  auto op33 = model->addOperand(&type32);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param18, param19, param20, param21, param22, param23, param24, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_weight_as_input_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_SAME_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8, 8, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type12);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param25, param26, param27, param28, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_SAME_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_SAME_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 8, 8, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type12);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param25, param26, param27, param28, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_SAME_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_SAME_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type41(Type::TENSOR_FLOAT32, {1, 1, 8, 8});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type41);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param25, param26, param27, param28, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_SAME_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_SAME_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type41(Type::TENSOR_FLOAT32, {1, 1, 8, 8});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op44 = model->addOperand(&type41);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param25, param26, param27, param28, layout}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_SAME_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_VALID_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 7, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op45 = model->addOperand(&type13);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param29, param30, param31, param32, layout}, {op45});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op45});
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_VALID_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_VALID_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 7, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op45 = model->addOperand(&type13);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param29, param30, param31, param32, layout}, {op45});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op45});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_VALID_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_VALID_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 6, 7});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op45 = model->addOperand(&type42);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param29, param30, param31, param32, layout}, {op45});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op45});
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_VALID_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_1_H3_W2_VALID_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 6, 7});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op45 = model->addOperand(&type42);
  // Phase 2, operations
  static float op24_init[] = {-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {1};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param29, param30, param31, param32, layout}, {op45});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op45});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_1_H3_W2_VALID_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_SAME_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type10);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op46 = model->addOperand(&type10);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param33_init[] = {1};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param33, param34, param35, param36, layout}, {op46});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op46});
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_SAME_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_SAME_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type10);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op46 = model->addOperand(&type10);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param33_init[] = {1};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param33, param34, param35, param36, layout}, {op46});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op46});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_SAME_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_SAME_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type40);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op46 = model->addOperand(&type40);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param33_init[] = {1};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param33, param34, param35, param36, layout}, {op46});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op46});
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_SAME_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_SAME_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type40);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op46 = model->addOperand(&type40);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param33_init[] = {1};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param33, param34, param35, param36, layout}, {op46});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op46});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_SAME_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_VALID_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 6, 7, 3});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type10);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op47 = model->addOperand(&type15);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param37_init[] = {2};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {1};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param37, param38, param39, param40, layout}, {op47});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op47});
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_VALID_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_VALID_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 6, 7, 3});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type10);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op47 = model->addOperand(&type15);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param37_init[] = {2};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {1};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param37, param38, param39, param40, layout}, {op47});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op47});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_VALID_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_VALID_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 3, 6, 7});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type40);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op47 = model->addOperand(&type43);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param37_init[] = {2};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {1};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param37, param38, param39, param40, layout}, {op47});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op47});
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_VALID_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3_H3_W2_VALID_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 3, 2, 3});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 3, 8, 8});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 3, 6, 7});
  OperandType type8(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op15 = model->addOperand(&type40);
  auto op25 = model->addOperand(&type14);
  auto op35 = model->addOperand(&type8);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op47 = model->addOperand(&type43);
  // Phase 2, operations
  static float op25_init[] = {-0.966213f, -0.579455f, -0.684259f, 0.738216f, 0.184325f, 0.0973683f, -0.176863f, -0.23936f, -0.000233404f, 0.055546f, -0.232658f, -0.316404f, -0.012904f, 0.320705f, -0.326657f, -0.919674f, 0.868081f, -0.824608f, -0.467474f, 0.0278809f, 0.563238f, 0.386045f, -0.270568f, -0.941308f, -0.779227f, -0.261492f, -0.774804f, -0.79665f, 0.22473f, -0.414312f, 0.685897f, -0.327792f, 0.77395f, -0.714578f, -0.972365f, 0.0696099f, -0.82203f, -0.79946f, 0.37289f, -0.917775f, 0.82236f, -0.144706f, -0.167188f, 0.268062f, 0.702641f, -0.412223f, 0.755759f, 0.721547f, -0.43637f, -0.274905f, -0.269165f, 0.16102f, 0.819857f, -0.312008f};
  model->setOperandValue(op25, op25_init, sizeof(float) * 54);
  static float op35_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op35, op35_init, sizeof(float) * 3);
  static int32_t param37_init[] = {2};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {1};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op15, op25, op35, param37, param38, param39, param40, layout}, {op47});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op15},
    {op47});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_3_H3_W2_VALID_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

