// clang-format off
// Generated file (from: depthwise_conv2d_float_large_weights_as_inputs_relaxed.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f}}, {1, {0.25f, 0.0f, 0.25f, 1.0f, 0.25f, 0.0f, 0.25f, 1.0f}}, {2, {100.0f, 200.0f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {110.0f, 246.0f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples;
};

