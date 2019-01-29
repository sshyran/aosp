// clang-format off
// Generated file (from: slice.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type16(Type::TENSOR_FLOAT16, {4});
  OperandType type17(Type::TENSOR_FLOAT16, {2});
  // Phase 1, operands
  auto input = model->addOperand(&type16);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type18(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type18(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type16(Type::TENSOR_FLOAT16, {4});
  OperandType type19(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type16);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_2(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type20);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_2(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_2(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type20);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_3(Model *model) {
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type24);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type24);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type25);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_3(Model *model) {
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type25);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_3(Model *model) {
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type24);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type26);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {3, 1, 1, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {3, 1, 1, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_4(Model *model) {
  OperandType type27(Type::TENSOR_FLOAT16, {4, 1, 1, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {3, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type27);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type28);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type29(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_4(Model *model) {
  OperandType type29(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_4(Model *model) {
  OperandType type27(Type::TENSOR_FLOAT16, {4, 1, 1, 1});
  OperandType type30(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type27);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type30);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type12(Type::TENSOR_INT32, {1, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

inline bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type12(Type::TENSOR_INT32, {1, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type12(Type::TENSOR_INT32, {1, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

inline bool is_ignored_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

inline bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

inline bool is_ignored_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

inline bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

inline bool is_ignored_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

inline bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

inline bool is_ignored_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type31(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

