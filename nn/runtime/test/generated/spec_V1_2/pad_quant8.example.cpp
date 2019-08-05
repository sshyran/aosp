// Generated from pad_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

namespace generated_tests::pad_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples() {
static std::vector<::test_helper::MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {1, 2, 3, 4, 5, 6}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {0, 1, 2, 3, 0, 0, 0, 0, 4, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}}},
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

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {1, 2, 3, 4, 5, 6}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {0, 1, 2, 3, 0, 0, 0, 0, 4, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}}},
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

} // namespace generated_tests::pad_quant8
