// clang-format off
// Generated file (from: depthwise_conv2d_float_large_2_weights_as_inputs.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 100.0f, 10.0f, 22.0f, 200.0f, 10.0f, 23.0f, 300.0f, 10.0f, 24.0f, 400.0f}}, {1, {0.25f, 0.0f, 10.0f, 100.0f, 0.25f, 1.0f, 20.0f, 100.0f, 0.25f, 0.0f, 30.0f, 100.0f, 0.25f, 1.0f, 40.0f, 100.0f}}, {2, {600000.0f, 700000.0f, 800000.0f, 900000.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {600010.0f, 700046.0f, 830000.0f, 900000.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

