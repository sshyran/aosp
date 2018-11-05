// clang-format off
// Generated file (from: tile_3.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}}},
  // int -> INT32 map
  {{1, {2, 3, 1}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}}},
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

std::vector<MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}}},
  // int -> INT32 map
  {{1, {2, 3, 1}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}}},
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

std::vector<MixedTypedExample> examples_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{1, {2, 3, 1}}},
  // int -> QUANT8_ASYMM map
  {{0, {149, 151, 153, 169, 171, 173}}},
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
  {{0, {149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_int32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {11, 12, 13, 21, 22, 23}}, {1, {2, 3, 1}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {11, 12, 13, 21, 22, 23, 11, 12, 13, 21, 22, 23, 11, 12, 13, 21, 22, 23, 11, 12, 13, 21, 22, 23, 11, 12, 13, 21, 22, 23, 11, 12, 13, 21, 22, 23}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

