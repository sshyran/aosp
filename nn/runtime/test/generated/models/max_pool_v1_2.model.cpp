// clang-format off
// Generated file (from: max_pool_v1_2.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type1);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type1);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type7);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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
  OperandType type2(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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
  OperandType type2(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type9);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.5f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {5, 2, 3, 3}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type13(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type12);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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
  OperandType type12(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type13(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type12);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {5, 3, 2, 3}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type14);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
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
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {5, 2, 3, 3}, 0.25f, 0);
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type13(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type12);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type13(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type12);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
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
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.25f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {5, 3, 2, 3}, 0.25f, 0);
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
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
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 1}, 0.25f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type20);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type22);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type22);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
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
  OperandType type2(Type::INT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 4}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type24);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

