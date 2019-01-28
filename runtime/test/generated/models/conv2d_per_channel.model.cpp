// clang-format off
// Generated file (from: conv2d_per_channel.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int8_t op2_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 6);
  static int32_t op3_init[] = {4, 4, 4};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 3);
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
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
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
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type7);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
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
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
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

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type8);
  // Phase 2, operations
  static int8_t op2_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 6);
  static int32_t op3_init[] = {4, 4, 4};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 3);
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
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_weight_as_input(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_nhwc(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type3);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 3}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type10);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_nchw(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 1.0f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  // Phase 1, operands
  auto op11 = model->addOperand(&type11);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type12);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_nchw_weight_as_input(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 1.0f, 128);
  OperandType type13(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type11);
  auto op21 = model->addOperand(&type13);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_dynamic_output_shape_nhwc_weight_as_input(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 2}, 0.5f, 128);
  OperandType type14(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type0);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_dynamic_output_shape_nhwc_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_dynamic_output_shape_nchw(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type11);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 2, 1, 2, 1, 2};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 6);
  static int32_t op31_init[] = {4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 3);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_layouts_dynamic_output_shape_nchw_weight_as_input(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 0.5f, 128);
  OperandType type15(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {3, 1, 1, 2}, 0.0f, 0, SymmPerChannelQuantParams({0.5f, 0.75f, 1.0f},0));
  OperandType type2(Type::TENSOR_INT32, {3});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::BOOL, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type11);
  auto op21 = model->addOperand(&type15);
  auto op31 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto layout = model->addOperand(&type5);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param7, param8, param9, param10, param11, param12, param13, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

inline bool is_ignored_layouts_dynamic_output_shape_nchw_weight_as_input(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

