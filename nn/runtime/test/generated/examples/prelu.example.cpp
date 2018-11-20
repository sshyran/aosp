// clang-format off
// Generated file (from: prelu.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples;
};

std::vector<MixedTypedExample>& get_examples_relaxed() {
static std::vector<MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_relaxed;
};

std::vector<MixedTypedExample>& get_examples_quant8() {
static std::vector<MixedTypedExample> examples_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {128, 128, 128, 132, 132, 132, 124, 124, 124, 120, 120, 120}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {120, 120, 120, 122, 122, 122, 120, 118, 116, 120, 116, 112}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_quant8;
};

std::vector<MixedTypedExample>& get_examples_float16() {
static std::vector<MixedTypedExample> examples_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_float16;
};

std::vector<MixedTypedExample>& get_examples_weight_as_input() {
static std::vector<MixedTypedExample> examples_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}, {1, {0.0f, 1.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_weight_as_input;
};

std::vector<MixedTypedExample>& get_examples_weight_as_input_relaxed() {
static std::vector<MixedTypedExample> examples_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}, {1, {0.0f, 1.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_weight_as_input_relaxed;
};

std::vector<MixedTypedExample>& get_examples_weight_as_input_quant8() {
static std::vector<MixedTypedExample> examples_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {128, 128, 128, 132, 132, 132, 124, 124, 124, 120, 120, 120}}, {1, {50, 54, 58}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {120, 120, 120, 122, 122, 122, 120, 118, 116, 120, 116, 112}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_weight_as_input_quant8;
};

std::vector<MixedTypedExample>& get_examples_weight_as_input_float16() {
static std::vector<MixedTypedExample> examples_weight_as_input_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}, {1, {0.0f, 1.0f, 2.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_weight_as_input_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_relaxed() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_quant8() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {128, 128, 128, 132, 132, 132, 124, 124, 124, 120, 120, 120}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {120, 120, 120, 122, 122, 122, 120, 118, 116, 120, 116, 112}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_quant8;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}, {1, {0.0f, 1.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_weight_as_input;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_relaxed() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}, {1, {0.0f, 1.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_weight_as_input_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_quant8() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {128, 128, 128, 132, 132, 132, 124, 124, 124, 120, 120, 120}}, {1, {50, 54, 58}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {{0, {120, 120, 120, 122, 122, 122, 120, 118, 116, 120, 116, 112}}},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_weight_as_input_quant8;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_weight_as_input_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}, {1, {1, 1, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -2.0f, -2.0f, -2.0f}}, {1, {0.0f, 1.0f, 2.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8Operands = {},
  // int -> QUANT16_SYMM map
  .quant16Operands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, -2.0f, 0.0f, -2.0f, -4.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_weight_as_input_float16;
};

