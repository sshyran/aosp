// clang-format off
// Generated file (from: fully_connected_float_large_weights_as_inputs.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 5}}, {1, {1, 5}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 10.0f, 100.0f, 1000.0f, 10000.0f}}, {1, {2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}, {2, {900000.0f}}},
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
  .operandDimensions = {{0, {1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {965432.0f}}},
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

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 5}}, {1, {1, 5}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 10.0f, 100.0f, 1000.0f, 10000.0f}}, {1, {2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}, {2, {900000.0f}}},
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
  .operandDimensions = {{0, {1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {965432.0f}}},
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

