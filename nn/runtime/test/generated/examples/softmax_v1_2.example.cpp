// clang-format off
// Generated file (from: softmax_v1_2.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_dim1_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f}}},
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

std::vector<MixedTypedExample> examples_dim3_axis2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_relaxed_dim1_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f}}},
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

std::vector<MixedTypedExample> examples_relaxed_dim3_axis2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_dim1_axis0 = {
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
  {{0, {132, 136, 140, 144, 148}}},
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
  {{0, {3, 8, 22, 60, 163}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_dim3_axis2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
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
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_dim1_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_dim3_axis2_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_relaxed_dim1_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_relaxed_dim3_axis2_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_dim1_axis0_2 = {
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
  {{0, {132, 136, 140, 144, 148}}},
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
  {{0, {51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_dim3_axis2_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_dim4_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis1 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis1_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis2_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis3_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis1 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis1_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis2_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis1 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis1_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_dim1_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f}}},
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

std::vector<MixedTypedExample> examples_axis_dim1_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis1 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis1_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis2_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis3_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis1 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis1_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f, 0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis2_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f, 0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.636408647f, 0.031684921f, 0.234121657f, 0.086128544f, 0.086128544f, 0.234121657f, 0.031684921f, 0.636408647f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis1 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis1_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f, 0.636408647f, 0.234121657f, 0.086128544f, 0.031684921f, 0.011656231f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim1_axis0 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim1_axis0_neg = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.011656231f, 0.031684921f, 0.086128544f, 0.234121657f, 0.636408647f}}},
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

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis0 = {
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
  {{0, {132, 124, 132, 124, 132, 124, 132, 124, 136, 120, 136, 120, 136, 120, 136, 120, 140, 116, 140, 116, 140, 116, 140, 116, 144, 112, 144, 112, 144, 112, 144, 112, 148, 108, 148, 108, 148, 108, 148, 108}}},
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
  {{0, {3, 163, 3, 163, 3, 163, 3, 163, 8, 60, 8, 60, 8, 60, 8, 60, 22, 22, 22, 22, 22, 22, 22, 22, 60, 8, 60, 8, 60, 8, 60, 8, 163, 3, 163, 3, 163, 3, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis0_neg = {
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
  {{0, {132, 124, 132, 124, 132, 124, 132, 124, 136, 120, 136, 120, 136, 120, 136, 120, 140, 116, 140, 116, 140, 116, 140, 116, 144, 112, 144, 112, 144, 112, 144, 112, 148, 108, 148, 108, 148, 108, 148, 108}}},
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
  {{0, {3, 163, 3, 163, 3, 163, 3, 163, 8, 60, 8, 60, 8, 60, 8, 60, 22, 22, 22, 22, 22, 22, 22, 22, 60, 8, 60, 8, 60, 8, 60, 8, 163, 3, 163, 3, 163, 3, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis1 = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108, 132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {3, 163, 3, 163, 8, 60, 8, 60, 22, 22, 22, 22, 60, 8, 60, 8, 163, 3, 163, 3, 3, 163, 3, 163, 8, 60, 8, 60, 22, 22, 22, 22, 60, 8, 60, 8, 163, 3, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis1_neg = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108, 132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {3, 163, 3, 163, 8, 60, 8, 60, 22, 22, 22, 22, 60, 8, 60, 8, 163, 3, 163, 3, 3, 163, 3, 163, 8, 60, 8, 60, 22, 22, 22, 22, 60, 8, 60, 8, 163, 3, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis2_neg = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis3 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis3_neg = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis0 = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {3, 163, 3, 163, 8, 60, 8, 60, 22, 22, 22, 22, 60, 8, 60, 8, 163, 3, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis0_neg = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {3, 163, 3, 163, 8, 60, 8, 60, 22, 22, 22, 22, 60, 8, 60, 8, 163, 3, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis1 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis1_neg = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {3, 163, 8, 60, 22, 22, 60, 8, 163, 3, 3, 163, 8, 60, 22, 22, 60, 8, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis2_neg = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3, 3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis0 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {3, 163, 8, 60, 22, 22, 60, 8, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis0_neg = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {3, 163, 8, 60, 22, 22, 60, 8, 163, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis1 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis1_neg = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {3, 8, 22, 60, 163, 163, 60, 22, 8, 3}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim1_axis0 = {
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
  {{0, {132, 136, 140, 144, 148}}},
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
  {{0, {3, 8, 22, 60, 163}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim1_axis0_neg = {
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
  {{0, {132, 136, 140, 144, 148}}},
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
  {{0, {3, 8, 22, 60, 163}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_dim4_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis1_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis1_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis2_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis2_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis3_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim4_axis3_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis1_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis1_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis2_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim3_axis2_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis1_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim2_axis1_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim1_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_dim1_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis1_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis1_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f, 1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis2_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis2_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis3_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim4_axis3_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 1.0f, -1.0f, 2.0f, -2.0f, 2.0f, -2.0f, 3.0f, -3.0f, 3.0f, -3.0f, 4.0f, -4.0f, 4.0f, -4.0f, 5.0f, -5.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis1_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis1_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f, 1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis2_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim3_axis2_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, -1.0f, 2.0f, -2.0f, 3.0f, -3.0f, 4.0f, -4.0f, 5.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis1_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim2_axis1_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, -1.0f, -2.0f, -3.0f, -4.0f, -5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim1_axis0_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_relaxed_dim1_axis0_neg_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}}},
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
  {{0, {0.2f, 0.2f, 0.2f, 0.2f, 0.2f}}},
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

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis0_2 = {
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
  {{0, {132, 124, 132, 124, 132, 124, 132, 124, 136, 120, 136, 120, 136, 120, 136, 120, 140, 116, 140, 116, 140, 116, 140, 116, 144, 112, 144, 112, 144, 112, 144, 112, 148, 108, 148, 108, 148, 108, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis0_neg_2 = {
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
  {{0, {132, 124, 132, 124, 132, 124, 132, 124, 136, 120, 136, 120, 136, 120, 136, 120, 140, 116, 140, 116, 140, 116, 140, 116, 144, 112, 144, 112, 144, 112, 144, 112, 148, 108, 148, 108, 148, 108, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis1_2 = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108, 132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis1_neg_2 = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108, 132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis2_2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis2_neg_2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis3_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim4_axis3_neg_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis0_2 = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis0_neg_2 = {
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
  {{0, {132, 124, 132, 124, 136, 120, 136, 120, 140, 116, 140, 116, 144, 112, 144, 112, 148, 108, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis1_2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis1_neg_2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108, 132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis2_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim3_axis2_neg_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108, 132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis0_2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis0_neg_2 = {
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
  {{0, {132, 124, 136, 120, 140, 116, 144, 112, 148, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis1_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim2_axis1_neg_2 = {
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
  {{0, {132, 136, 140, 144, 148, 124, 120, 116, 112, 108}}},
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
  {{0, {51, 51, 51, 51, 51, 51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim1_axis0_2 = {
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
  {{0, {132, 136, 140, 144, 148}}},
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
  {{0, {51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_axis_quant8_dim1_axis0_neg_2 = {
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
  {{0, {132, 136, 140, 144, 148}}},
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
  {{0, {51, 51, 51, 51, 51}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

