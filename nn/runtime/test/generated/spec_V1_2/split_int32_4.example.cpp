// Generated from split_int32_4.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

namespace generated_tests::split_int32_4 {

std::vector<::test_helper::MixedTypedExample>& get_examples() {
static std::vector<::test_helper::MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 3, 4, 5, 6, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 1, 2}}, {1, {2, 1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 5, 6}}, {1, {3, 4, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples;
};

} // namespace generated_tests::split_int32_4
namespace generated_tests::split_int32_4 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 3, 4, 5, 6, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 1, 2}}, {1, {2, 1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 5, 6}}, {1, {3, 4, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_relaxed;
};

} // namespace generated_tests::split_int32_4
namespace generated_tests::split_int32_4 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 3, 4, 5, 6, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 1, 2}}, {1, {2, 1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 5, 6}}, {1, {3, 4, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape;
};

} // namespace generated_tests::split_int32_4
namespace generated_tests::split_int32_4 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed() {
static std::vector<::test_helper::MixedTypedExample> examples_dynamic_output_shape_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 3, 4, 5, 6, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 1, 2}}, {1, {2, 1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 2, 5, 6}}, {1, {3, 4, 7, 8}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed;
};

} // namespace generated_tests::split_int32_4
