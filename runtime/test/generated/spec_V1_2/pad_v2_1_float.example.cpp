// Generated from pad_v2_1_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

namespace generated_tests::pad_v2_1_float {

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
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

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
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_all_inputs_as_internal = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_all_inputs_as_internal;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_all_inputs_as_internal_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}, {1, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{1, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_all_tensors_as_inputs;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}, {1, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{1, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_all_tensors_as_inputs_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs_all_inputs_as_internal = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{0, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_all_tensors_as_inputs_all_inputs_as_internal;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{0, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16() {
static std::vector<::test_helper::MixedTypedExample> examples_float16 = {
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_dynamic_output_shape = {
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_all_inputs_as_internal = {
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_all_inputs_as_internal;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_all_inputs_as_internal_dynamic_output_shape = {
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_all_tensors_as_inputs = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}, {1, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{1, {0, 0, 0, 2, 1, 3, 0, 0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_all_tensors_as_inputs;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_all_tensors_as_inputs_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}, {1, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{1, {0, 0, 0, 2, 1, 3, 0, 0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_all_tensors_as_inputs_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_all_tensors_as_inputs_all_inputs_as_internal = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {0, 0, 0, 2, 1, 3, 0, 0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_all_tensors_as_inputs_all_inputs_as_internal;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {0, 0, 0, 2, 1, 3, 0, 0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
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
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
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
return examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_all_inputs_as_internal = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_all_inputs_as_internal;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_all_inputs_as_internal_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_all_tensors_as_inputs = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}, {1, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{1, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_all_tensors_as_inputs;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_all_tensors_as_inputs_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 3, 1}}, {1, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{1, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_all_tensors_as_inputs_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{0, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal;
};

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {1, 2, 3, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  .int32Operands = {{0, {0, 0, 0, 2, 1, 3, 0, 0}}},
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
  .operandDimensions = {{0, {1, 4, 7, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  .int32Operands = {},
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
return examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::pad_v2_1_float
