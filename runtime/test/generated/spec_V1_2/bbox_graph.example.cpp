// Generated from bbox_graph.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.5f}}, {1, {0.0f, 0.0f, -10.0f, -10.0f}}, {2, {0.0f, 0.0f, 10.0f, 10.0f}}, {3, {32.0f, 32.0f}}, {4, {1.0f}}},
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
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f}}, {1, {0.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
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
return examples_zero_sized;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.5f}}, {1, {0.0f, 0.0f, -10.0f, -10.0f}}, {2, {0.0f, 0.0f, 10.0f, 10.0f}}, {3, {32.0f, 32.0f}}, {4, {1.0f}}},
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
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f}}, {1, {0.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
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
return examples_zero_sized_dynamic_output_shape;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.5f}}, {1, {0.0f, 0.0f, -10.0f, -10.0f}}, {2, {0.0f, 0.0f, 10.0f, 10.0f}}, {3, {32.0f, 32.0f}}, {4, {1.0f}}},
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
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f}}, {1, {0.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
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
return examples_zero_sized_relaxed;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_relaxed_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.5f}}, {1, {0.0f, 0.0f, -10.0f, -10.0f}}, {2, {0.0f, 0.0f, 10.0f, 10.0f}}, {3, {32.0f, 32.0f}}, {4, {1.0f}}},
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
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0f}}, {1, {0.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
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
return examples_zero_sized_relaxed_dynamic_output_shape;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.5f}}, {1, {0.0f, 0.0f, -10.0f, -10.0f}}, {2, {0.0f, 0.0f, 10.0f, 10.0f}}, {3, {32.0f, 32.0f}}, {4, {1.0f}}},
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
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f}}, {1, {0.0f}}, {2, {0.0f}}},
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
return examples_zero_sized_float16;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_float16_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.5f}}, {1, {0.0f, 0.0f, -10.0f, -10.0f}}, {2, {0.0f, 0.0f, 10.0f, 10.0f}}, {3, {32.0f, 32.0f}}, {4, {1.0f}}},
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
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.0f}}, {1, {0.0f}}, {2, {0.0f}}},
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
return examples_zero_sized_float16_dynamic_output_shape;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {133}}, {1, {128, 128, 28, 28}}, {4, {138}}},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {{2, {0, 0, 80, 80}}},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {{3, {256, 256}}},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {0}}, {1, {0}}},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {{2, {0}}},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_zero_sized_quant8;
};

} // namespace generated_tests::bbox_graph
namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_zero_sized_quant8_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 1, 1, 1}}, {1, {1, 1, 1, 4}}, {2, {1, 4}}, {3, {1, 2}}, {4, {1, 1, 1, 1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {133}}, {1, {128, 128, 28, 28}}, {4, {138}}},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {{2, {0, 0, 80, 80}}},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {{3, {256, 256}}},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {0}}, {1, {0}}, {2, {0, 4}}, {3, {0}}, {4, {0}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{3, {0}}, {4, {0}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{0, {0}}, {1, {0}}},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {{2, {0}}},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_zero_sized_quant8_dynamic_output_shape;
};

} // namespace generated_tests::bbox_graph
