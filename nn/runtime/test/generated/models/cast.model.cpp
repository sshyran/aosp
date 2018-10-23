// clang-format off
// Generated file (from: cast.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_5(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_6(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_7(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_8(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {2, 3});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_9(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

