// clang-format off
// Generated file (from: softmax_v1_2.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim1_axis0(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim1_axis0(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.25f, 128);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim1_axis0(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {5}, 0.25f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis2(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type2);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim1_axis0_2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis2_2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim1_axis0_2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis2_2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.25f, 128);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim1_axis0_2(Model *model) {
  OperandType type2(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {5}, 0.25f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis2_2(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static float param1_init[] = {1e-06f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.25f, 128);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis3_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.25f, 128);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.25f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type31);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.25f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type31);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {5}, 0.25f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {5}, 0.25f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static float param2_init[] = {1.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param2, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis2_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis2_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis3_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis3_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis3_neg_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis3_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis2_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis2_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim1_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim1_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim1_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis2_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis2_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {2, 2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis3_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis3_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis3_neg_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 5});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis3_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {5, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT32, {2, 5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis2_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis2_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {5, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim1_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim1_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim1_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 2}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis2_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis2_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis3_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.25f, 128);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis3_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim4_axis3_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.25f, 128);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim4_axis3_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis2_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim3_axis2_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.00390625f, 0);
  OperandType type2(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 5}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim3_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {5, 2}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis1_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.25f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type31);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim2_axis1_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.25f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type31);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim2_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim1_axis0_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {5}, 0.25f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_quant8_dim1_axis0_neg_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {5}, 0.25f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {5}, 0.00390625f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static float param3_init[] = {1e-06f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SOFTMAX, {op1, param3, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_quant8_dim1_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

