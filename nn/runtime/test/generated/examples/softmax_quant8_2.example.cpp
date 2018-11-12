// clang-format off
// Generated file (from: softmax_quant8_2.mod.py). Do not edit
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
  {{0, {1, 2, 3, 4, 5, 255, 254, 253, 252, 251}}},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {15, 24, 40, 67, 110, 110, 67, 40, 24, 15}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

