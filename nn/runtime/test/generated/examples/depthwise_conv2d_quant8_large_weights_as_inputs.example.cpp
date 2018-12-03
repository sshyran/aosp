// clang-format off
// Generated file (from: depthwise_conv2d_quant8_large_weights_as_inputs.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0, 0}}},
  // int -> QUANT8_ASYMM map
  {{0, {4, 16, 4, 32, 4, 64, 4, 128}}, {1, {2, 4, 2, 0, 2, 2, 2, 0}}},
  // int -> QUANT16_ASYMM map
  {},
  // int -> FLOAT16 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {8, 48}}},
  // int -> QUANT16_ASYMM map
  {},
  // int -> FLOAT16 map
  {},
}
},
}, // End of an example
};
