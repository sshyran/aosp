// clang-format off
// Generated file (from: expand_dims.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {},
  // int -> QUANT8_ASYMM map
  {{0, {129, 120, 138, 143}}},
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
  {{0, {129, 120, 138, 143}}},
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
  {{0, {1, -3, 6, 8}}},
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
  {{0, {1, -3, 6, 8}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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

std::vector<MixedTypedExample> examples_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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

std::vector<MixedTypedExample> examples_quant8_2 = {
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
  {{0, {129, 120, 138, 143}}},
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
  {{0, {129, 120, 138, 143}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_int32_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, -3, 6, 8}}},
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
  {{0, {1, -3, 6, 8}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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

std::vector<MixedTypedExample> examples_relaxed_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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

std::vector<MixedTypedExample> examples_quant8_3 = {
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
  {{0, {129, 120, 138, 143}}},
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
  {{0, {129, 120, 138, 143}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_int32_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, -3, 6, 8}}},
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
  {{0, {1, -3, 6, 8}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_4 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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

std::vector<MixedTypedExample> examples_relaxed_4 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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
  {{0, {1.2f, -3.4f, 5.6f, 7.8f}}},
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

std::vector<MixedTypedExample> examples_quant8_4 = {
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
  {{0, {129, 120, 138, 143}}},
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
  {{0, {129, 120, 138, 143}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_int32_4 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, -3, 6, 8}}},
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
  {{0, {1, -3, 6, 8}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

