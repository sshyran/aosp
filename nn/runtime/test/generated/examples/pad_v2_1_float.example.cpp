// clang-format off
// Generated file (from: pad_v2_1_float.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {9.3f, 1.0f, 2.0f, 3.0f, 9.3f, 9.3f, 9.3f, 9.3f, 4.0f, 5.0f, 6.0f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f, 9.3f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples;
};

std::vector<MixedTypedExample>& get_examples_float16() {
static std::vector<MixedTypedExample> examples_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}}},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {9.300000190734863f, 1.0f, 2.0f, 3.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 4.0f, 5.0f, 6.0f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f, 9.300000190734863f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_float16;
};

