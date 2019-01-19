// clang-format off
// Generated file (from: quantize.mod.py). Do not edit
void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

