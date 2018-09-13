// clang-format off
// Generated file (from: split_int32_4_relaxed.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 2, 3, 4, 5, 6, 7, 8}}},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 2, 5, 6}}, {1, {3, 4, 7, 8}}},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

