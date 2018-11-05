// clang-format off
// Generated file (from: fully_connected_quant8_weights_as_inputs.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {4}}},
  // int -> QUANT8_ASYMM map
  {{0, {2, 32, 16}}, {1, {2}}},
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
  {{0, {2, 17, 9}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

