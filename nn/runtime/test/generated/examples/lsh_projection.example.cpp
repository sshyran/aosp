// clang-format off
// Generated file (from: lsh_projection.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {0.12f, 0.34f, 0.56f}}},
  // int -> INT32 map
  {{0, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
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
  {},
  // int -> INT32 map
  {{0, {1, 1, 1, 0, 1, 1, 1, 0}}},
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

