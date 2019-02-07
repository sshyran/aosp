// clang-format off
// Generated file (from: resize_nearest_neighbor.mod.py). Do not edit
void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
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
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type10);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type12);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
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
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type16);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
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
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type10);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type12);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
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
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type16);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {1};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param, param1, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
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
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type20);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
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
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type24);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type16);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
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
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type20);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
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
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type24);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type16);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param2_init[] = {3};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {3};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param2, param3, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
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
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type28);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type23);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type23);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
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
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type26);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
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
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type28);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type23);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type23);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
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
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type30);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type26);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param4_init[] = {2};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {2};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param4, param5, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
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
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type29);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
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
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type31);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type16);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
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
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type29);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
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
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type31);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type16);
  auto param6 = model->addOperand(&type3);
  auto param7 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {5};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param6, param7, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type38);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type39);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type41);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type38);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type39);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type41);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param8, param9, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type29);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type12);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type14);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type14);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type31);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type29);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type12);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type14);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type14);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type31);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param10_init[] = {5};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param10, param11, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type29);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type31);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type16);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type29);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type31);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type16);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param12, param13, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type48);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type51);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type52);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type52);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type48);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type54(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type48);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type8);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type48);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param14_init[] = {3};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {3};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param14, param15, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

