// clang-format off
// Generated file (from: grouped_conv2d.mod.py). Do not edit
void CreateModel_nhwc_none(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nhwc_relu(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nhwc_relu1(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nhwc_relu6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
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
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 100);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nchw_none(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nchw_relu(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nchw_relu1(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_nchw_relu6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 8);
  static float op3_init[] = {10.0f, -33.5f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type16(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type5);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static uint8_t op2_init[] = {132, 136, 136, 132, 144, 140, 136, 132};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 8);
  static int32_t op3_init[] = {160, -536};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 1}, 0.25f, 128);
  OperandType type14(Type::TENSOR_INT32, {2}, 0.0625f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto act = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, act, layout}, {op4});
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

void CreateModel_large_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static float op21_init[] = {100.0f, 20.0f, 1.0f, 200.0f, 10.0f, 2.0f, 200.0f, 30.0f, 1.0f, 100.0f, 20.0f, 3.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 12);
  static float op31_init[] = {500.0f, -1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 2);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static float op21_init[] = {100.0f, 20.0f, 1.0f, 200.0f, 10.0f, 2.0f, 200.0f, 30.0f, 1.0f, 100.0f, 20.0f, 3.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 12);
  static float op31_init[] = {500.0f, -1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 2);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type6);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 1}, 1.0f, 0);
  OperandType type20(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 2}, 10.0f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type18);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type20);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static uint8_t op21_init[] = {100, 20, 1, 200, 10, 2, 200, 30, 1, 100, 20, 3};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 12);
  static int32_t op31_init[] = {2000, -4000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 2);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nhwc_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 1}, 1.0f, 0);
  OperandType type20(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 2, 2}, 10.0f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type18);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type20);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nhwc_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 2, 3, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type22);
  // Phase 2, operations
  static float op21_init[] = {100.0f, 20.0f, 1.0f, 200.0f, 10.0f, 2.0f, 200.0f, 30.0f, 1.0f, 100.0f, 20.0f, 3.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 12);
  static float op31_init[] = {500.0f, -1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 2);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 2, 3, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 2, 3, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type22);
  // Phase 2, operations
  static float op21_init[] = {100.0f, 20.0f, 1.0f, 200.0f, 10.0f, 2.0f, 200.0f, 30.0f, 1.0f, 100.0f, 20.0f, 3.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 12);
  static float op31_init[] = {500.0f, -1000.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 2);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 2, 3, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 2, 3, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto op21 = model->addOperand(&type7);
  auto op31 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 1}, 1.0f, 0);
  OperandType type20(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 2}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 2}, 10.0f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type23);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type20);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type24);
  // Phase 2, operations
  static uint8_t op21_init[] = {100, 20, 1, 200, 10, 2, 200, 30, 1, 100, 20, 3};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 12);
  static int32_t op31_init[] = {2000, -4000};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 2);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_large_nchw_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 1}, 1.0f, 0);
  OperandType type20(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 2}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 2}, 10.0f, 100);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type23);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type20);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_large_nchw_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2, 2, 6});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2, 9});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 3.0f, 3.0f, 6.0f, 6.0f, 6.0f, 9.0f, 8.0f, 5.0f, 2.0f, 1.0f, 1.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {10.0f, -20.0f, 30.0f, -40.0f, 50.0f, -60.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 6);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2, 2, 6});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2, 9});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2, 2, 6});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2, 9});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 3.0f, 3.0f, 6.0f, 6.0f, 6.0f, 9.0f, 8.0f, 5.0f, 2.0f, 1.0f, 1.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {10.0f, -20.0f, 30.0f, -40.0f, 50.0f, -60.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 6);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nhwc_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2, 2, 6});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2, 9});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 9}, 0.5f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {6, 1, 1, 3}, 0.25f, 0);
  OperandType type27(Type::TENSOR_INT32, {6}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 6}, 2.0f, 60);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type25);
  auto op22 = model->addOperand(&type26);
  auto op32 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type28);
  // Phase 2, operations
  static uint8_t op22_init[] = {4, 8, 12, 8, 4, 0, 8, 12, 12, 24, 24, 24, 36, 32, 20, 8, 4, 4};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {80, -160, 240, -320, 400, -480};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 6);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nhwc_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 9}, 0.5f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {6, 1, 1, 3}, 0.25f, 0);
  OperandType type27(Type::TENSOR_INT32, {6}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 6}, 2.0f, 60);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type25);
  auto op22 = model->addOperand(&type26);
  auto op32 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nhwc_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 9, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 6, 2, 2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type29);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type30);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 3.0f, 3.0f, 6.0f, 6.0f, 6.0f, 9.0f, 8.0f, 5.0f, 2.0f, 1.0f, 1.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {10.0f, -20.0f, 30.0f, -40.0f, 50.0f, -60.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 6);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nchw_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 9, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 6, 2, 2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type29);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 9, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 6, 2, 2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type29);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type30);
  // Phase 2, operations
  static float op22_init[] = {1.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 3.0f, 3.0f, 6.0f, 6.0f, 6.0f, 9.0f, 8.0f, 5.0f, 2.0f, 1.0f, 1.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 18);
  static float op32_init[] = {10.0f, -20.0f, 30.0f, -40.0f, 50.0f, -60.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 6);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nchw_relaxed_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 9, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 6, 2, 2});
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {6, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type29);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_relaxed_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_channel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {6, 1, 1, 3}, 0.25f, 0);
  OperandType type27(Type::TENSOR_INT32, {6}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 9, 2, 2}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 6, 2, 2}, 2.0f, 60);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type26);
  auto op32 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type32);
  // Phase 2, operations
  static uint8_t op22_init[] = {4, 8, 12, 8, 4, 0, 8, 12, 12, 24, 24, 24, 36, 32, 20, 8, 4, 4};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 18);
  static int32_t op32_init[] = {80, -160, 240, -320, 400, -480};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 6);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
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

void CreateModel_channel_nchw_quant8_weight_as_input(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {6, 1, 1, 3}, 0.25f, 0);
  OperandType type27(Type::TENSOR_INT32, {6}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 9, 2, 2}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 6, 2, 2}, 2.0f, 60);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type26);
  auto op32 = model->addOperand(&type27);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static bool layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool) * 1);
  model->addOperation(ANEURALNETWORKS_GROUPED_CONV_2D, {op12, op22, op32, param12, param13, param14, param15, param16, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

inline bool is_ignored_channel_nchw_quant8_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

