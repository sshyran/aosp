// clang-format off
// Generated file (from: sub_float16_broadcast.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
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
  // int -> QUANT16_ASYMM map
  {},
  // int -> FLOAT16 map
  {{0, {10.0f, 20.0f}}, {1, {0.1f, 0.2f, 0.3f, 0.4f}}},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {},
  // int -> FLOAT16 map
  {{0, {9.9f, 19.8f, 9.7f, 19.6f}}},
}
},
}, // End of an example
};
