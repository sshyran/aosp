// clang-format off
// Generated file (from: local_response_norm_float_4_relaxed.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 6}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {-1.1f, 0.6f, 0.7f, 1.2f, -0.7f, 0.1f}}},
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
  .operandDimensions = {{0, {1, 1, 1, 6}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {-0.26492569f, 0.12510864f, 0.14011213f, 0.26726127f, -0.16178755f, 0.0244266f}}},
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
  .operandDimensions = {{0, {1, 1, 1, 6}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {-1.1f, 0.6f, 0.7f, 1.2f, -0.7f, 0.1f}}},
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
  .operandDimensions = {{0, {1, 1, 1, 6}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {-0.26492569f, 0.12510864f, 0.14011213f, 0.26726127f, -0.16178755f, 0.0244266f}}},
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

