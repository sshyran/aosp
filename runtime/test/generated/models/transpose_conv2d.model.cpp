// clang-format off
// Generated file (from: transpose_conv2d.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.0f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t param_init[] = {1, 5, 5, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_weight_as_input(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1, 5, 5, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 18);
  static float op3_init[] = {-1.0f, -2.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
  static int32_t param_init[] = {1, 5, 5, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {1, 5, 5, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 18);
  static int32_t op3_init[] = {-4, -8};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
  static int32_t param_init[] = {1, 5, 5, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type5);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {1, 5, 5, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto op41 = model->addOperand(&type9);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param5_init[] = {1, 3, 4, 1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, param5, param6, param7, param8, param9}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_weight_as_input_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto op41 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param5_init[] = {1, 3, 4, 1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, param5, param6, param7, param8, param9}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto op41 = model->addOperand(&type9);
  // Phase 2, operations
  static float op21_init[] = {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {-1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param5_init[] = {1, 3, 4, 1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, param5, param6, param7, param8, param9}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_weight_as_input_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto op41 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param5_init[] = {1, 3, 4, 1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, param5, param6, param7, param8, param9}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type18);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type20);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static uint8_t op21_init[] = {164, 148, 152, 164, 160, 148, 140, 132, 144};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {-2000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1, 3, 4, 1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, param5, param6, param7, param8, param9}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_weight_as_input_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type18);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type20);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param5_init[] = {1, 3, 4, 1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op11, op21, op31, param5, param6, param7, param8, param9}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_quant8_weight_as_input_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type10);
  auto op22 = model->addOperand(&type11);
  auto op32 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param10_init[] = {1, 4, 4, 1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, param10, param11, param12, param13, param14}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_weight_as_input_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type10);
  auto op22 = model->addOperand(&type11);
  auto op32 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param10_init[] = {1, 4, 4, 1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, param10, param11, param12, param13, param14}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type10);
  auto op22 = model->addOperand(&type11);
  auto op32 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param10_init[] = {1, 4, 4, 1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, param10, param11, param12, param13, param14}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_weight_as_input_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type10);
  auto op22 = model->addOperand(&type11);
  auto op32 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param10_init[] = {1, 4, 4, 1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, param10, param11, param12, param13, param14}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type22);
  auto op22 = model->addOperand(&type23);
  auto op32 = model->addOperand(&type24);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto op42 = model->addOperand(&type25);
  // Phase 2, operations
  static uint8_t op22_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {1, 4, 4, 1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, param10, param11, param12, param13, param14}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_weight_as_input_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type22);
  auto op22 = model->addOperand(&type23);
  auto op32 = model->addOperand(&type24);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type5);
  auto op42 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param10_init[] = {1, 4, 4, 1};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 4);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op12, op22, op32, param10, param11, param12, param13, param14}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_quant8_weight_as_input_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type10);
  auto op23 = model->addOperand(&type11);
  auto op33 = model->addOperand(&type8);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto op43 = model->addOperand(&type13);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1, 6, 6, 1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, param15, param16, param17, param18, param19}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_weight_as_input_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type10);
  auto op23 = model->addOperand(&type11);
  auto op33 = model->addOperand(&type8);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto op43 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param15_init[] = {1, 6, 6, 1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, param15, param16, param17, param18, param19}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type10);
  auto op23 = model->addOperand(&type11);
  auto op33 = model->addOperand(&type8);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto op43 = model->addOperand(&type13);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 18);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param15_init[] = {1, 6, 6, 1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, param15, param16, param17, param18, param19}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_weight_as_input_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type10);
  auto op23 = model->addOperand(&type11);
  auto op33 = model->addOperand(&type8);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto op43 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param15_init[] = {1, 6, 6, 1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, param15, param16, param17, param18, param19}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type26);
  auto op23 = model->addOperand(&type23);
  auto op33 = model->addOperand(&type27);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto op43 = model->addOperand(&type28);
  // Phase 2, operations
  static uint8_t op23_init[] = {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 18);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1, 6, 6, 1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, param15, param16, param17, param18, param19}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_weight_as_input_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type26);
  auto op23 = model->addOperand(&type23);
  auto op33 = model->addOperand(&type27);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type5);
  auto op43 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param15_init[] = {1, 6, 6, 1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op13, op23, op33, param15, param16, param17, param18, param19}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

inline bool is_ignored_quant8_weight_as_input_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type8);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type5);
  auto param25 = model->addOperand(&type5);
  auto param26 = model->addOperand(&type5);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {1};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param20, param21, param22, param23, param24, param25, param26}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_weight_as_input_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type8);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type5);
  auto param25 = model->addOperand(&type5);
  auto param26 = model->addOperand(&type5);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {1};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param20, param21, param22, param23, param24, param25, param26}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_weight_as_input_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type8);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type5);
  auto param25 = model->addOperand(&type5);
  auto param26 = model->addOperand(&type5);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 18);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {1};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param20, param21, param22, param23, param24, param25, param26}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_weight_as_input_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type10);
  auto op24 = model->addOperand(&type11);
  auto op34 = model->addOperand(&type8);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type5);
  auto param25 = model->addOperand(&type5);
  auto param26 = model->addOperand(&type5);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {1};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param20, param21, param22, param23, param24, param25, param26}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_weight_as_input_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 20.0f, 50);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type22);
  auto op24 = model->addOperand(&type29);
  auto op34 = model->addOperand(&type27);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type5);
  auto param25 = model->addOperand(&type5);
  auto param26 = model->addOperand(&type5);
  auto op44 = model->addOperand(&type30);
  // Phase 2, operations
  static uint8_t op24_init[] = {132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 18);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {1};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param20, param21, param22, param23, param24, param25, param26}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_weight_as_input_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3, 3, 1});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 5, 5, 2}, 0.5f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 2.0f, 0);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type20(Type::TENSOR_INT32, {1}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 4, 1}, 20.0f, 50);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.5f, 100);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 16.0f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 0.25f, 10);
  OperandType type27(Type::TENSOR_INT32, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 32.0f, 80);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 5, 5, 2});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 20.0f, 50);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 4, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type22);
  auto op24 = model->addOperand(&type29);
  auto op34 = model->addOperand(&type27);
  auto param20 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type5);
  auto param25 = model->addOperand(&type5);
  auto param26 = model->addOperand(&type5);
  auto op44 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {1};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TRANSPOSE_CONV_2D, {op14, op24, op34, param20, param21, param22, param23, param24, param25, param26}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

inline bool is_ignored_quant8_weight_as_input_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

