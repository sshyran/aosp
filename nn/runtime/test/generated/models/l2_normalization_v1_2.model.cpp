// clang-format off
// Generated file (from: l2_normalization_v1_2.mod.py). Do not edit
void CreateModel_dim1_axis0(Model *model) {
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
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

void CreateModel_dim1_axis0_float16(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim2_axis1(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim2_axis1_float16(Model *model) {
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis2(Model *model) {
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
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

void CreateModel_dim3_axis2_float16(Model *model) {
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim1_axis0(Model *model) {
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
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

void CreateModel_relaxed_dim1_axis0_float16(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim2_axis1(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim2_axis1_float16(Model *model) {
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis2(Model *model) {
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
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

void CreateModel_relaxed_dim3_axis2_float16(Model *model) {
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_dim1_axis0(Model *model) {
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type8(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_dim1_axis0_float16(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  OperandType type9(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_dim2_axis1(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_dim2_axis1_float16(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_dim3_axis2(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_dim3_axis2_float16(Model *model) {
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_dim1_axis0(Model *model) {
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type8(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_dim1_axis0_float16(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  OperandType type9(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_dim2_axis1(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_dim2_axis1_float16(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_dim3_axis2(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_dim3_axis2_float16(Model *model) {
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis3_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis3_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim4_axis3_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim4_axis3_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim3_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim3_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim3_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim3_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim3_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim3_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim3_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim2_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim2_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim2_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim2_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim2_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim1_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_dim1_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dim1_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis3_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis3_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim4_axis3_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim4_axis3_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim3_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim3_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim3_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim3_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim3_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim3_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim3_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim2_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim2_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim2_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim2_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim2_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim1_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_relaxed_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
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

void CreateModel_axis_relaxed_dim1_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_relaxed_dim1_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis3_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis3_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim4_axis3_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim4_axis3_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim3_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim3_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim2_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim2_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type8(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim1_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  OperandType type9(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type8(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_dim1_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  OperandType type9(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_dim1_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {3, 2, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {3, 2, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT32, {2, 3, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 3, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT32, {2, 2, 3, 2});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2, 3, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis3_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis3_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim4_axis3_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type28(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim4_axis3_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT32, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis2_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim3_axis2_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim3_axis2_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type25(Type::TENSOR_FLOAT32, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {3, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis1_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim2_axis1_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type5(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim2_axis1_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type8(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim1_axis0_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  OperandType type9(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type8(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_axis_dynamic_output_shape_relaxed_dim1_axis0_neg_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT16, {3});
  OperandType type9(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_axis_dynamic_output_shape_relaxed_dim1_axis0_neg_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

