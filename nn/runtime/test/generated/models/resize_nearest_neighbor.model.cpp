// clang-format off
// Generated file (from: resize_nearest_neighbor.mod.py). Do not edit
void CreateModel_shape_nhwc(Model *model) {
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

inline bool is_ignored_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed(Model *model) {
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

inline bool is_ignored_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type11);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
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

inline bool is_ignored_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type13);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type14);
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

inline bool is_ignored_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
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

inline bool is_ignored_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
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

inline bool is_ignored_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type16);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
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

inline bool is_ignored_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type17);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type14);
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

inline bool is_ignored_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
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

inline bool is_ignored_shape_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
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
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type11);
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

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type13);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
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

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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

inline bool is_ignored_shape_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
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

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type17);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
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

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type11);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type13);
  auto param2 = model->addOperand(&type21);
  auto param3 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type16);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type17);
  auto param2 = model->addOperand(&type21);
  auto param3 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type11);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type13);
  auto param2 = model->addOperand(&type21);
  auto param3 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type15);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type16);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type17);
  auto param2 = model->addOperand(&type21);
  auto param3 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param2_init[] = {0.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {0.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in, param2, param3, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type13);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type26);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type13);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type26);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type22);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in1 = model->addOperand(&type13);
  auto param6 = model->addOperand(&type21);
  auto param7 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type24);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type26);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type27);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type21(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type17);
  auto param6 = model->addOperand(&type21);
  auto param7 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type28);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type22);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type29);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type13);
  auto param6 = model->addOperand(&type21);
  auto param7 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type15);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type26);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type29);
  // Phase 2, operations
  static float param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type17);
  auto param6 = model->addOperand(&type21);
  auto param7 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.5f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.5f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in1, param6, param7, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type30);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type24);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type32);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type28);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type30);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type24);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in2 = model->addOperand(&type32);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type28);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {2};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param8, param9, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type1);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type30);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type31);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type24);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type32);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type33);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type21(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type28);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type30);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type34);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type24);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type18);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type32);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type34);
  // Phase 2, operations
  static float param10_init[] = {0.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto in2 = model->addOperand(&type28);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param10_init[] = {0.800000011920929f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.800000011920929f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in2, param10, param11, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2},
    {out2});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type31);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type13);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type31);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type13);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type3);
  auto param13 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {5};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param12, param13, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type6);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 5, 1}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type31);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type35);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2, 5, 1});
  // Phase 1, operands
  auto in3 = model->addOperand(&type13);
  auto param14 = model->addOperand(&type21);
  auto param15 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static _Float16 param14_init[] = {1.100000023841858f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {2.5999999046325684f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 1, 2, 5});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type37);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 5}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type38);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type21(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 1, 2, 5});
  // Phase 1, operands
  auto in3 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type21);
  auto param15 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type39);
  // Phase 2, operations
  static _Float16 param14_init[] = {1.100000023841858f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {2.5999999046325684f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type1);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type31);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type34);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type13);
  auto param14 = model->addOperand(&type21);
  auto param15 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param14_init[] = {1.100000023841858f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {2.5999999046325684f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type15);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type18);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type33);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type34);
  // Phase 2, operations
  static float param14_init[] = {1.1f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static float param15_init[] = {2.6f};
  model->setOperandValue(param15, param15_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type21);
  auto param15 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param14_init[] = {1.100000023841858f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static _Float16 param15_init[] = {2.5999999046325684f};
  model->setOperandValue(param15, param15_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in3, param14, param15, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3},
    {out3});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type41);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type43);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type44);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type41);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type43);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type44);
  auto param16 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param16, param17, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type5);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type41);
  auto param18 = model->addOperand(&type21);
  auto param19 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type24);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type43);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type32);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type44);
  auto param18 = model->addOperand(&type21);
  auto param19 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type28);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type40);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type34);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in4 = model->addOperand(&type41);
  auto param18 = model->addOperand(&type21);
  auto param19 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type42);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type18);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in4 = model->addOperand(&type43);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type34);
  // Phase 2, operations
  static float param18_init[] = {0.9f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static float param19_init[] = {0.9f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in4 = model->addOperand(&type44);
  auto param18 = model->addOperand(&type21);
  auto param19 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param18_init[] = {0.8999999761581421f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static _Float16 param19_init[] = {0.8999999761581421f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in4, param18, param19, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {out4});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type31);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type49(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type17);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type31);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type17);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param20_init[] = {5};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param20, param21, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type8);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type31);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type45);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto in5 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type21);
  auto param23 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type46);
  // Phase 2, operations
  static _Float16 param22_init[] = {2.799999952316284f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {1.399999976158142f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type47);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type47);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type48);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type21(Type::FLOAT16, {});
  OperandType type49(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto in5 = model->addOperand(&type17);
  auto param22 = model->addOperand(&type21);
  auto param23 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type49);
  // Phase 2, operations
  static _Float16 param22_init[] = {2.799999952316284f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {1.399999976158142f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type1);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type31);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type34);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type21);
  auto param23 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param22_init[] = {2.799999952316284f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {1.399999976158142f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type15);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type18);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type33);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type34);
  // Phase 2, operations
  static float param22_init[] = {2.8f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {1.4f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_6(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type17);
  auto param22 = model->addOperand(&type21);
  auto param23 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out5 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param22_init[] = {2.799999952316284f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {1.399999976158142f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in5, param22, param23, layout}, {out5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5},
    {out5});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type31);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type3(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type17);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type31);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type17);
  auto param24 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {4};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param24, param25, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type7);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type31);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type40);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  // Phase 1, operands
  auto in6 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type21);
  auto param27 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type41);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type42);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type42);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 100);
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type43);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type21(Type::FLOAT16, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto in6 = model->addOperand(&type17);
  auto param26 = model->addOperand(&type21);
  auto param27 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type44);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type1);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type31);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type34);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type21);
  auto param27 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type15);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type18);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.25f, 100);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type33);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type34);
  // Phase 2, operations
  static float param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(float) * 1);
  static float param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_7(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  // Phase 1, operands
  auto in6 = model->addOperand(&type17);
  auto param26 = model->addOperand(&type21);
  auto param27 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out6 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param26_init[] = {2.0f};
  model->setOperandValue(param26, param26_init, sizeof(_Float16) * 1);
  static _Float16 param27_init[] = {2.0f};
  model->setOperandValue(param27, param27_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in6, param26, param27, layout}, {out6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in6},
    {out6});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type51);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type53(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type54);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type56(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type56);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_shape_dynamic_output_shape_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param28 = model->addOperand(&type3);
  auto param29 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param28, param29, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_shape_dynamic_output_shape_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 3, 2});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type10);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {2, 3, 3, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type51);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type53(Type::TENSOR_FLOAT16, {2, 3, 3, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param30 = model->addOperand(&type21);
  auto param31 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type53);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type54);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {2, 2, 3, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type54);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 3}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type55);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type56(Type::TENSOR_FLOAT16, {2, 2, 3, 3});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param30 = model->addOperand(&type21);
  auto param31 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type56);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type34);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nhwc_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param30 = model->addOperand(&type21);
  auto param31 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nhwc_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_relaxed_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type18);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_quant8_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 100);
  OperandType type4(Type::FLOAT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 2}, 0.25f, 100);
  // Phase 1, operands
  auto in7 = model->addOperand(&type50);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type34);
  // Phase 2, operations
  static float param30_init[] = {1.6f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {1.8f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_scale_dynamic_output_shape_nchw_float16_8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::FLOAT16, {});
  OperandType type52(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in7 = model->addOperand(&type52);
  auto param30 = model->addOperand(&type21);
  auto param31 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out7 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param30_init[] = {1.600000023841858f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {1.7999999523162842f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR, {in7, param30, param31, layout}, {out7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in7},
    {out7});
  assert(model->isValid());
}

inline bool is_ignored_scale_dynamic_output_shape_nchw_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

