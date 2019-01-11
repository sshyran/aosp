// clang-format off
// Generated file (from: box_with_nms_limit.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {12}}, {1, {12, 4}}, {2, {12}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.75f, 0.95f, 0.8f, 0.7f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 9.0f, 9.0f, 19.0f, 19.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 19.0f, 19.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2}}, {3, {5, 7}}},
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
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {12}}, {1, {12, 4}}, {2, {12}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.75f, 0.95f, 0.8f, 0.7f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 9.0f, 9.0f, 19.0f, 19.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 19.0f, 19.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2}}, {3, {5, 7}}},
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
}
},
}, // End of an example
};
return examples_relaxed;
};

std::vector<MixedTypedExample>& get_examples_float16() {
static std::vector<MixedTypedExample> examples_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.5f, 0.8999999761581421f, 0.800000011920929f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {12}}, {1, {12, 4}}, {2, {12}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2}}, {3, {5, 7}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8500000238418579f, 0.75f, 0.949999988079071f, 0.699999988079071f, 0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.75f, 0.949999988079071f, 0.800000011920929f, 0.699999988079071f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 9.0f, 9.0f, 19.0f, 19.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 19.0f, 19.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {12}}, {1, {12, 4}}, {2, {12}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.75f, 0.95f, 0.8f, 0.7f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 9.0f, 9.0f, 19.0f, 19.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 19.0f, 19.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2}}, {3, {5, 7}}},
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
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {12}}, {1, {12, 4}}, {2, {12}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.75f, 0.95f, 0.8f, 0.7f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 9.0f, 9.0f, 19.0f, 19.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 19.0f, 19.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2}}, {3, {5, 7}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.5f, 0.8999999761581421f, 0.800000011920929f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {12}}, {1, {12, 4}}, {2, {12}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2}}, {3, {5, 7}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8500000238418579f, 0.75f, 0.949999988079071f, 0.699999988079071f, 0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.75f, 0.949999988079071f, 0.800000011920929f, 0.699999988079071f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 9.0f, 9.0f, 19.0f, 19.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 19.0f, 19.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_float16;
};

std::vector<MixedTypedExample>& get_examples_2() {
static std::vector<MixedTypedExample> examples_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {10}}, {1, {10, 4}}, {2, {10}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.95f, 0.8f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 2, 2}}, {3, {5, 5}}},
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
}
},
}, // End of an example
};
return examples_2;
};

std::vector<MixedTypedExample>& get_examples_relaxed_2() {
static std::vector<MixedTypedExample> examples_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {10}}, {1, {10, 4}}, {2, {10}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.95f, 0.8f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 2, 2}}, {3, {5, 5}}},
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
}
},
}, // End of an example
};
return examples_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_float16_2() {
static std::vector<MixedTypedExample> examples_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.5f, 0.8999999761581421f, 0.800000011920929f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {10}}, {1, {10, 4}}, {2, {10}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 2, 2}}, {3, {5, 5}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8500000238418579f, 0.75f, 0.949999988079071f, 0.699999988079071f, 0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.949999988079071f, 0.800000011920929f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_float16_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {10}}, {1, {10, 4}}, {2, {10}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.95f, 0.8f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 2, 2}}, {3, {5, 5}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.9f, 0.95f, 0.75f, 0.8f, 0.7f, 0.85f, 0.6f, 0.9f, 0.95f, 0.9f, 0.65f, 0.9f, 0.8f, 0.85f, 0.8f, 0.6f, 0.6f, 0.2f, 0.6f, 0.8f, 0.4f, 0.9f, 0.55f, 0.6f, 0.9f, 0.75f, 0.7f, 0.8f, 0.7f, 0.85f, 0.9f, 0.95f, 0.75f, 0.8f, 0.85f, 0.8f, 0.6f, 0.9f, 0.95f, 0.6f, 0.6f, 0.2f, 0.5f, 0.9f, 0.8f, 0.9f, 0.75f, 0.7f, 0.9f, 0.65f, 0.9f, 0.9f, 0.55f, 0.6f, 0.6f, 0.8f, 0.4f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
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
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {10}}, {1, {10, 4}}, {2, {10}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.85f, 0.75f, 0.95f, 0.7f, 0.95f, 0.9f, 0.85f, 0.95f, 0.8f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 2, 2}}, {3, {5, 5}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_float16_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {19, 3}}, {1, {19, 12}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {9, 10}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.800000011920929f, 0.699999988079071f, 0.8500000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.75f, 0.800000011920929f, 0.8500000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.8999999761581421f, 0.949999988079071f, 0.6000000238418579f, 0.6000000238418579f, 0.20000000298023224f, 0.5f, 0.8999999761581421f, 0.800000011920929f, 0.8999999761581421f, 0.75f, 0.699999988079071f, 0.8999999761581421f, 0.6499999761581421f, 0.8999999761581421f, 0.8999999761581421f, 0.550000011920929f, 0.6000000238418579f, 0.6000000238418579f, 0.800000011920929f, 0.4000000059604645f}}, {1, {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f, 2.0f, 2.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 3.0f, 3.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 4.0f, 4.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 5.0f, 5.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 6.0f, 6.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 7.0f, 7.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 8.0f, 8.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f, 9.0f, 9.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 11.0f, 11.0f, 2.0f, 2.0f, 12.0f, 12.0f, 2.0f, 2.0f, 12.0f, 12.0f, 1.0f, 1.0f, 10.0f, 10.0f, 1.0f, 1.0f, 11.0f, 11.0f, 1.0f, 1.0f, 11.0f, 11.0f, 5.0f, 5.0f, 14.0f, 14.0f, 5.0f, 5.0f, 15.0f, 15.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 12.0f, 12.0f, 3.0f, 3.0f, 13.0f, 13.0f, 3.0f, 3.0f, 13.0f, 13.0f, 6.0f, 6.0f, 15.0f, 15.0f, 6.0f, 6.0f, 16.0f, 16.0f, 6.0f, 6.0f, 16.0f, 16.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f, 0.0f, 0.0f, 2.0f, 2.0f, 9.0f, 9.0f, 18.0f, 18.0f, 9.0f, 9.0f, 19.0f, 19.0f, 9.0f, 9.0f, 19.0f, 19.0f, 4.0f, 4.0f, 13.0f, 13.0f, 4.0f, 4.0f, 14.0f, 14.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 17.0f, 17.0f, 8.0f, 8.0f, 18.0f, 18.0f, 8.0f, 8.0f, 18.0f, 18.0f, 7.0f, 7.0f, 16.0f, 16.0f, 7.0f, 7.0f, 17.0f, 17.0f, 7.0f, 7.0f, 17.0f, 17.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {10}}, {1, {10, 4}}, {2, {10}}, {3, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 1, 2, 2, 1, 1, 1, 2, 2}}, {3, {5, 5}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8500000238418579f, 0.75f, 0.949999988079071f, 0.699999988079071f, 0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.949999988079071f, 0.800000011920929f}}, {1, {0.0f, 0.0f, 10.0f, 10.0f, 4.0f, 4.0f, 14.0f, 14.0f, 8.0f, 8.0f, 18.0f, 18.0f, 2.0f, 2.0f, 12.0f, 12.0f, 8.0f, 8.0f, 18.0f, 18.0f, 1.0f, 1.0f, 11.0f, 11.0f, 0.0f, 0.0f, 2.0f, 2.0f, 5.0f, 5.0f, 15.0f, 15.0f, 3.0f, 3.0f, 13.0f, 13.0f, 0.0f, 0.0f, 2.0f, 2.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_float16_2;
};

