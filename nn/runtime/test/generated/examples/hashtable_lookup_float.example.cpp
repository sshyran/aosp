// clang-format off
// Generated file (from: hashtable_lookup_float.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {0.0f, 0.1f, 1.0f, 1.1f, 2.0f, 2.1f}}},
  // int -> INT32 map
  {{0, {1234, -292, -11, 0}}, {1, {-11, 0, 1234}}},
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
  {{0, {2.0f, 2.1f, 0.0f, 0.0f, 0.0f, 0.1f, 1.0f, 1.1f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{1, {1, 0, 1, 1}}},
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

