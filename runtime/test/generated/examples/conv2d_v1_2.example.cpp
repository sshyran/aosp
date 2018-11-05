// clang-format off
// Generated file (from: conv2d_v1_2.mod.py). Do not edit
std::vector<MixedTypedExample> examples_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nhwc_quant8 = {
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
  {{0, {2, 2, 2, 2, 1, 2, 2, 2, 2}}},
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
  {{0, {7, 7, 7, 7}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nhwc_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}, {1, {0.25f, 0.25f, 0.25f, 0.25f}}, {2, {0.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nhwc_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}, {1, {0.25f, 0.25f, 0.25f, 0.25f}}, {2, {0.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nhwc_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0}}},
  // int -> QUANT8_ASYMM map
  {{0, {2, 2, 2, 2, 1, 2, 2, 2, 2}}, {1, {2, 2, 2, 2}}},
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
  {{0, {7, 7, 7, 7}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nchw_quant8 = {
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
  {{0, {2, 2, 2, 2, 1, 2, 2, 2, 2}}},
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
  {{0, {7, 7, 7, 7}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nchw_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}, {1, {0.25f, 0.25f, 0.25f, 0.25f}}, {2, {0.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nchw_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f}}, {1, {0.25f, 0.25f, 0.25f, 0.25f}}, {2, {0.0f}}},
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
  {{0, {0.875f, 0.875f, 0.875f, 0.875f}}},
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

std::vector<MixedTypedExample> examples_nchw_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0}}},
  // int -> QUANT8_ASYMM map
  {{0, {2, 2, 2, 2, 1, 2, 2, 2, 2}}, {1, {2, 2, 2, 2}}},
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
  {{0, {7, 7, 7, 7}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nhwc_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nhwc_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nhwc_quant8_2 = {
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
  {{0, {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151}}},
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
  {{0, {50, 50, 50, 50, 85, 162, 207, 50, 50, 84, 111, 50}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nhwc_weight_as_input_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {-200.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nhwc_weight_as_input_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {-200.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nhwc_weight_as_input_quant8_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {-800}}},
  // int -> QUANT8_ASYMM map
  {{0, {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151}}, {1, {129, 135, 141, 131, 137, 143, 133, 139, 145}}},
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
  {{0, {50, 50, 50, 50, 85, 162, 207, 50, 50, 84, 111, 50}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nchw_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nchw_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nchw_quant8_2 = {
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
  {{0, {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151}}},
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
  {{0, {50, 50, 50, 50, 85, 162, 207, 50, 50, 84, 111, 50}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nchw_weight_as_input_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {-200.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nchw_weight_as_input_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {-200.0f}}},
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
  {{0, {0.0f, 0.0f, 0.0f, 0.0f, 35.0f, 112.0f, 157.0f, 0.0f, 0.0f, 34.0f, 61.0f, 0.0f}}},
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

std::vector<MixedTypedExample> examples_nchw_weight_as_input_quant8_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {-800}}},
  // int -> QUANT8_ASYMM map
  {{0, {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151}}, {1, {129, 135, 141, 131, 137, 143, 133, 139, 145}}},
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
  {{0, {50, 50, 50, 50, 85, 162, 207, 50, 50, 84, 111, 50}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nhwc_quant8 = {
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
  {{0, {10, 10, 10}}},
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
  {{0, {30, 75, 120}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_nhwc_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}, {1, {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nhwc_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}, {1, {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nhwc_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0, 0, 0}}},
  // int -> QUANT8_ASYMM map
  {{0, {10, 10, 10}}, {1, {1, 2, 3, 4, 5, 6, 7, 8, 9}}},
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
  {{0, {30, 75, 120}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nchw_quant8 = {
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
  {{0, {10, 10, 10}}},
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
  {{0, {30, 75, 120}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_nchw_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}, {1, {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nchw_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 5.0f, 5.0f}}, {1, {0.5f, 1.0f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {15.0f, 37.5f, 60.0f}}},
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

std::vector<MixedTypedExample> examples_channel_nchw_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0, 0, 0}}},
  // int -> QUANT8_ASYMM map
  {{0, {10, 10, 10}}, {1, {1, 2, 3, 4, 5, 6, 7, 8, 9}}},
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
  {{0, {30, 75, 120}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}},
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
  {{0, {30.0f, 36.0f, 42.0f, 66.0f, 81.0f, 96.0f, 102.0f, 126.0f, 150.0f, 138.0f, 171.0f, 204.0f, 174.0f, 216.0f, 258.0f, 210.0f, 261.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}},
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
  {{0, {30.0f, 36.0f, 42.0f, 66.0f, 81.0f, 96.0f, 102.0f, 126.0f, 150.0f, 138.0f, 171.0f, 204.0f, 174.0f, 216.0f, 258.0f, 210.0f, 261.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_quant8 = {
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
  {{0, {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}},
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
  {{0, {15, 18, 21, 33, 40, 48, 51, 63, 75, 69, 86, 102, 87, 108, 129, 105, 130, 156}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nhwc_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {30.0f, 36.0f, 42.0f, 66.0f, 81.0f, 96.0f, 102.0f, 126.0f, 150.0f, 138.0f, 171.0f, 204.0f, 174.0f, 216.0f, 258.0f, 210.0f, 261.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {30.0f, 36.0f, 42.0f, 66.0f, 81.0f, 96.0f, 102.0f, 126.0f, 150.0f, 138.0f, 171.0f, 204.0f, 174.0f, 216.0f, 258.0f, 210.0f, 261.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0, 0, 0}}},
  // int -> QUANT8_ASYMM map
  {{0, {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}, {1, {130, 136, 142, 132, 138, 144, 134, 140, 146}}},
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
  {{0, {15, 18, 21, 33, 40, 48, 51, 63, 75, 69, 86, 102, 87, 108, 129, 105, 130, 156}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 4.0f, 7.0f, 10.0f, 13.0f, 16.0f, 2.0f, 5.0f, 8.0f, 11.0f, 14.0f, 17.0f, 3.0f, 6.0f, 9.0f, 12.0f, 15.0f, 18.0f}}},
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
  {{0, {30.0f, 66.0f, 102.0f, 138.0f, 174.0f, 210.0f, 36.0f, 81.0f, 126.0f, 171.0f, 216.0f, 261.0f, 42.0f, 96.0f, 150.0f, 204.0f, 258.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 4.0f, 7.0f, 10.0f, 13.0f, 16.0f, 2.0f, 5.0f, 8.0f, 11.0f, 14.0f, 17.0f, 3.0f, 6.0f, 9.0f, 12.0f, 15.0f, 18.0f}}},
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
  {{0, {30.0f, 66.0f, 102.0f, 138.0f, 174.0f, 210.0f, 36.0f, 81.0f, 126.0f, 171.0f, 216.0f, 261.0f, 42.0f, 96.0f, 150.0f, 204.0f, 258.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_quant8 = {
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
  {{0, {130, 136, 142, 148, 154, 160, 132, 138, 144, 150, 156, 162, 134, 140, 146, 152, 158, 164}}},
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
  {{0, {15, 33, 51, 69, 87, 105, 18, 40, 63, 86, 108, 130, 21, 48, 75, 102, 129, 156}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nchw_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 4.0f, 7.0f, 10.0f, 13.0f, 16.0f, 2.0f, 5.0f, 8.0f, 11.0f, 14.0f, 17.0f, 3.0f, 6.0f, 9.0f, 12.0f, 15.0f, 18.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {30.0f, 66.0f, 102.0f, 138.0f, 174.0f, 210.0f, 36.0f, 81.0f, 126.0f, 171.0f, 216.0f, 261.0f, 42.0f, 96.0f, 150.0f, 204.0f, 258.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_weight_as_input_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 4.0f, 7.0f, 10.0f, 13.0f, 16.0f, 2.0f, 5.0f, 8.0f, 11.0f, 14.0f, 17.0f, 3.0f, 6.0f, 9.0f, 12.0f, 15.0f, 18.0f}}, {1, {1.0f, 4.0f, 7.0f, 2.0f, 5.0f, 8.0f, 3.0f, 6.0f, 9.0f}}, {2, {0.0f, 0.0f, 0.0f}}},
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
  {{0, {30.0f, 66.0f, 102.0f, 138.0f, 174.0f, 210.0f, 36.0f, 81.0f, 126.0f, 171.0f, 216.0f, 261.0f, 42.0f, 96.0f, 150.0f, 204.0f, 258.0f, 312.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_weight_as_input_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0, 0, 0}}},
  // int -> QUANT8_ASYMM map
  {{0, {130, 136, 142, 148, 154, 160, 132, 138, 144, 150, 156, 162, 134, 140, 146, 152, 158, 164}}, {1, {130, 136, 142, 132, 138, 144, 134, 140, 146}}},
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
  {{0, {15, 33, 51, 69, 87, 105, 18, 40, 63, 86, 108, 130, 21, 48, 75, 102, 129, 156}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_1_H3_W2_SAME_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {1.85284f, -0.0393656f, -0.127353f, 1.43115f, -0.302294f, -1.0402f, 0.655023f, -0.587614f, 1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -0.346357f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.104506f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, 1.42026f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, -0.343435f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, -1.46717f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f, 1.23741f, -0.527402f, -0.39954f, -0.0128623f, 1.3644f, 0.985755f, -0.718118f, -0.1008f, 1.24327f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {-0.000614278f, -1.21221f, 0.443861f, 0.102117f, -2.52714f, 1.47489f, 0.173474f, -0.237577f, 1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, -1.6271f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.133762f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 1.22372f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, -0.838905f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 0.891823f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f, 0.166228f, 0.434554f, -2.57529f, -0.958662f, -2.23978f, 2.66776f, 0.542601f, 1.76107f, -1.08134f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_SAME_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {1.85284f, -0.0393656f, -0.127353f, 1.43115f, -0.302294f, -1.0402f, 0.655023f, -0.587614f, 1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -0.346357f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.104506f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, 1.42026f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, -0.343435f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, -1.46717f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f, 1.23741f, -0.527402f, -0.39954f, -0.0128623f, 1.3644f, 0.985755f, -0.718118f, -0.1008f, 1.24327f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {-0.000614278f, -1.21221f, 0.443861f, 0.102117f, -2.52714f, 1.47489f, 0.173474f, -0.237577f, 1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, -1.6271f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.133762f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 1.22372f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, -0.838905f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 0.891823f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f, 0.166228f, 0.434554f, -2.57529f, -0.958662f, -2.23978f, 2.66776f, 0.542601f, 1.76107f, -1.08134f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_SAME_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {1.85284f, -0.0393656f, -0.127353f, 1.43115f, -0.302294f, -1.0402f, 0.655023f, -0.587614f, 1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -0.346357f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.104506f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, 1.42026f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, -0.343435f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, -1.46717f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f, 1.23741f, -0.527402f, -0.39954f, -0.0128623f, 1.3644f, 0.985755f, -0.718118f, -0.1008f, 1.24327f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {-0.000614278f, -1.21221f, 0.443861f, 0.102117f, -2.52714f, 1.47489f, 0.173474f, -0.237577f, 1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, -1.6271f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.133762f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 1.22372f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, -0.838905f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 0.891823f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f, 0.166228f, 0.434554f, -2.57529f, -0.958662f, -2.23978f, 2.66776f, 0.542601f, 1.76107f, -1.08134f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_SAME_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {1.85284f, -0.0393656f, -0.127353f, 1.43115f, -0.302294f, -1.0402f, 0.655023f, -0.587614f, 1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -0.346357f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.104506f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, 1.42026f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, -0.343435f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, -1.46717f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f, 1.23741f, -0.527402f, -0.39954f, -0.0128623f, 1.3644f, 0.985755f, -0.718118f, -0.1008f, 1.24327f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {-0.000614278f, -1.21221f, 0.443861f, 0.102117f, -2.52714f, 1.47489f, 0.173474f, -0.237577f, 1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, -1.6271f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.133762f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 1.22372f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, -0.838905f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 0.891823f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f, 0.166228f, 0.434554f, -2.57529f, -0.958662f, -2.23978f, 2.66776f, 0.542601f, 1.76107f, -1.08134f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_VALID_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_VALID_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_VALID_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}}},
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

std::vector<MixedTypedExample> examples_1_H3_W2_VALID_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_SAME_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {-1.27853f, 1.74987f, -0.876718f, 0.989692f, 0.298548f, 0.522103f, -0.536896f, -0.179382f, -0.966914f, 1.33708f, 1.37042f, -0.495494f, 1.43859f, -1.548f, -0.430026f, -0.662793f, -0.0867897f, -0.900658f, -0.524396f, 0.255731f, -0.779081f, 0.12666f, 0.915651f, -0.444765f, -0.186842f, -1.87308f, 1.21135f, -0.385009f, 1.72032f, -1.56036f, -1.23059f, 1.23694f, 0.00200015f, 0.359522f, 1.60084f, 0.434006f, -0.282945f, 2.37292f, -1.28653f, 0.0847837f, -0.352093f, -2.39659f, 0.149246f, 0.920351f, -1.34346f, 0.952311f, -0.35811f, 0.403449f, 0.484796f, -1.19989f, -0.684298f, -1.41301f, 0.103177f, -0.307039f, 1.17741f, 2.58936f, -2.76237f, -1.21565f, -1.09619f, 1.17432f, 0.512143f, 0.771379f, 0.399879f, -0.0533093f, 0.290864f, 0.95563f, 1.16328f, 1.80768f, -1.52564f, -0.126476f, -0.185224f, -0.114779f, 1.2248f, 0.237127f, -0.213297f, -0.619941f, 0.497944f, -1.68688f, 1.59314f, -0.127337f, 0.111419f, 1.13719f, 1.68537f, -0.479644f, 1.18608f, -2.52744f, 1.34136f, 0.548297f, -2.0838f, 2.64585f, -0.993354f, 0.128238f, 1.26092f, 0.318668f, 0.893795f, -0.0600559f, -0.629126f, -0.949229f, 2.25828f, -1.961f, 0.00589599f, -0.187854f, -1.02403f, 0.396121f, 1.3704f, 3.99355f, 0.434221f, 0.274464f, -0.562438f, -0.914871f, 0.539129f, -0.928687f, 0.834954f, 0.844178f, -0.566053f, -0.957341f, 0.933336f, 1.13613f, -1.22109f, 1.4649f, -0.414666f, -0.452821f, -0.706006f, -1.72657f, -0.726574f, -0.0979362f, -0.478669f, 1.78703f, -0.639288f, 1.48565f, -0.179904f, 1.01003f, -0.317118f, -0.675387f, 1.90969f, -1.38343f, 0.697255f, -0.292255f, 1.81634f, 0.717801f, 0.862479f, -0.407478f, -0.343106f, -0.0353232f, -0.481893f, -0.135565f, -2.95941f, 0.247846f, 2.67757f, -2.23999f, -0.519673f, 0.254447f, 0.415283f, -1.01065f, 0.507911f, 0.979926f, -0.184304f, -0.000950437f, -0.734348f, -0.196685f, -0.713241f, 0.594972f, 0.0845042f, 2.48496f, 0.385019f, -0.201145f, 0.533332f, -0.904872f, -0.333518f, -0.581063f, -2.07065f, 0.118687f, -1.86708f, -0.601987f, 0.432037f, 1.73923f, 0.590007f, 0.419788f, 0.314198f, 2.12817f, 0.570793f, -1.15998f, -0.348587f, -1.10231f, -2.13091f, 0.134467f, -0.460382f, 0.138338f, 3.455f, 0.679068f, -0.190282f, -0.0307461f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {0.78574f, 0.0700466f, -0.110245f, 0.0141003f, -0.621007f, -0.979104f, 1.24104f, 0.580398f, -0.512997f, 0.900559f, -0.683229f, -1.0162f, 1.0089f, -0.0752488f, 0.110969f, 0.270558f, 0.756819f, -0.10753f, -0.371484f, 0.149005f, 0.0973829f, 0.155766f, -0.476502f, 0.259481f, 1.06709f, -1.16534f, 1.52694f, -0.797245f, 0.802736f, -0.997109f, 2.2661f, -1.45548f, 2.15506f, -1.33682f, 1.15225f, -3.09324f, 0.943457f, 0.885211f, 0.987944f, -0.345875f, -0.114708f, 1.7107f, 0.104745f, 0.828324f, -2.49964f, -0.453742f, -0.288829f, -0.0948694f, -0.489415f, 1.74889f, -0.378257f, -2.10237f, 0.613022f, -2.5225f, -0.746785f, 3.63816f, -1.9287f, 0.774279f, -0.613917f, -0.650011f, 1.03753f, -0.177923f, 0.891815f, -1.00373f, 1.83859f, -1.59239f, -0.0662623f, 0.218806f, -1.088f, 0.280837f, 0.902901f, -1.90127f, 3.04734f, -1.57302f, 1.10881f, -0.980369f, -3.85305f, -0.955859f, 1.64909f, 2.33573f, 0.31144f, -0.594375f, 0.325747f, -0.952566f, -0.613449f, 2.85073f, 1.94692f, 1.12977f, 1.1351f, -0.449652f, 0.118765f, -0.199547f, 2.873f, 1.35182f, -1.85457f, 1.22364f, 1.38049f, 2.38342f, 0.882321f, 1.03795f, -0.321571f, -2.60202f, -1.6372f, 1.09302f, 0.461768f, 1.8485f, -0.158928f, 4.28871f, -0.437375f, -1.5794f, 1.59869f, 0.0811864f, 0.912054f, 0.452176f, 2.01812f, 2.62907f, 1.50304f, -0.840276f, -0.455854f, -0.224913f, 0.609824f, -0.11105f, 3.35635f, 2.02386f, 1.4687f, -0.708365f, -0.508992f, -3.02602f, -0.75725f, 1.85277f, 2.92817f, -0.172997f, -1.13279f, -0.355636f, -0.337669f, -0.588752f, 2.05759f, 1.0651f, 0.884758f, -0.0712112f, 3.81319f, 0.771629f, 0.949634f, 0.0838967f, -2.19264f, 0.114521f, 0.543556f, -1.63197f, -0.267442f, 1.15701f, -2.37862f, 2.57646f, 0.531208f, 0.9499f, -0.231441f, 1.51461f, 1.58888f, 0.895931f, -0.753084f, 0.545251f, 0.746903f, 0.012994f, -0.790398f, -1.1055f, 1.77789f, 0.430923f, 0.818241f, -0.731412f, 0.979546f, -2.48707f, -1.53658f, -1.66798f, -1.04585f, -0.667911f, 1.00299f, -2.20339f, 0.137826f, -2.31281f, 0.755535f, 0.495396f, 0.549629f, 0.713128f, 0.751369f, 0.283996f, -0.814532f, 1.4866f, 1.12105f, 0.927998f, 0.517938f, -0.612661f, -1.47756f, -1.42422f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_SAME_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {-1.27853f, 1.74987f, -0.876718f, 0.989692f, 0.298548f, 0.522103f, -0.536896f, -0.179382f, -0.966914f, 1.33708f, 1.37042f, -0.495494f, 1.43859f, -1.548f, -0.430026f, -0.662793f, -0.0867897f, -0.900658f, -0.524396f, 0.255731f, -0.779081f, 0.12666f, 0.915651f, -0.444765f, -0.186842f, -1.87308f, 1.21135f, -0.385009f, 1.72032f, -1.56036f, -1.23059f, 1.23694f, 0.00200015f, 0.359522f, 1.60084f, 0.434006f, -0.282945f, 2.37292f, -1.28653f, 0.0847837f, -0.352093f, -2.39659f, 0.149246f, 0.920351f, -1.34346f, 0.952311f, -0.35811f, 0.403449f, 0.484796f, -1.19989f, -0.684298f, -1.41301f, 0.103177f, -0.307039f, 1.17741f, 2.58936f, -2.76237f, -1.21565f, -1.09619f, 1.17432f, 0.512143f, 0.771379f, 0.399879f, -0.0533093f, 0.290864f, 0.95563f, 1.16328f, 1.80768f, -1.52564f, -0.126476f, -0.185224f, -0.114779f, 1.2248f, 0.237127f, -0.213297f, -0.619941f, 0.497944f, -1.68688f, 1.59314f, -0.127337f, 0.111419f, 1.13719f, 1.68537f, -0.479644f, 1.18608f, -2.52744f, 1.34136f, 0.548297f, -2.0838f, 2.64585f, -0.993354f, 0.128238f, 1.26092f, 0.318668f, 0.893795f, -0.0600559f, -0.629126f, -0.949229f, 2.25828f, -1.961f, 0.00589599f, -0.187854f, -1.02403f, 0.396121f, 1.3704f, 3.99355f, 0.434221f, 0.274464f, -0.562438f, -0.914871f, 0.539129f, -0.928687f, 0.834954f, 0.844178f, -0.566053f, -0.957341f, 0.933336f, 1.13613f, -1.22109f, 1.4649f, -0.414666f, -0.452821f, -0.706006f, -1.72657f, -0.726574f, -0.0979362f, -0.478669f, 1.78703f, -0.639288f, 1.48565f, -0.179904f, 1.01003f, -0.317118f, -0.675387f, 1.90969f, -1.38343f, 0.697255f, -0.292255f, 1.81634f, 0.717801f, 0.862479f, -0.407478f, -0.343106f, -0.0353232f, -0.481893f, -0.135565f, -2.95941f, 0.247846f, 2.67757f, -2.23999f, -0.519673f, 0.254447f, 0.415283f, -1.01065f, 0.507911f, 0.979926f, -0.184304f, -0.000950437f, -0.734348f, -0.196685f, -0.713241f, 0.594972f, 0.0845042f, 2.48496f, 0.385019f, -0.201145f, 0.533332f, -0.904872f, -0.333518f, -0.581063f, -2.07065f, 0.118687f, -1.86708f, -0.601987f, 0.432037f, 1.73923f, 0.590007f, 0.419788f, 0.314198f, 2.12817f, 0.570793f, -1.15998f, -0.348587f, -1.10231f, -2.13091f, 0.134467f, -0.460382f, 0.138338f, 3.455f, 0.679068f, -0.190282f, -0.0307461f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {0.78574f, 0.0700466f, -0.110245f, 0.0141003f, -0.621007f, -0.979104f, 1.24104f, 0.580398f, -0.512997f, 0.900559f, -0.683229f, -1.0162f, 1.0089f, -0.0752488f, 0.110969f, 0.270558f, 0.756819f, -0.10753f, -0.371484f, 0.149005f, 0.0973829f, 0.155766f, -0.476502f, 0.259481f, 1.06709f, -1.16534f, 1.52694f, -0.797245f, 0.802736f, -0.997109f, 2.2661f, -1.45548f, 2.15506f, -1.33682f, 1.15225f, -3.09324f, 0.943457f, 0.885211f, 0.987944f, -0.345875f, -0.114708f, 1.7107f, 0.104745f, 0.828324f, -2.49964f, -0.453742f, -0.288829f, -0.0948694f, -0.489415f, 1.74889f, -0.378257f, -2.10237f, 0.613022f, -2.5225f, -0.746785f, 3.63816f, -1.9287f, 0.774279f, -0.613917f, -0.650011f, 1.03753f, -0.177923f, 0.891815f, -1.00373f, 1.83859f, -1.59239f, -0.0662623f, 0.218806f, -1.088f, 0.280837f, 0.902901f, -1.90127f, 3.04734f, -1.57302f, 1.10881f, -0.980369f, -3.85305f, -0.955859f, 1.64909f, 2.33573f, 0.31144f, -0.594375f, 0.325747f, -0.952566f, -0.613449f, 2.85073f, 1.94692f, 1.12977f, 1.1351f, -0.449652f, 0.118765f, -0.199547f, 2.873f, 1.35182f, -1.85457f, 1.22364f, 1.38049f, 2.38342f, 0.882321f, 1.03795f, -0.321571f, -2.60202f, -1.6372f, 1.09302f, 0.461768f, 1.8485f, -0.158928f, 4.28871f, -0.437375f, -1.5794f, 1.59869f, 0.0811864f, 0.912054f, 0.452176f, 2.01812f, 2.62907f, 1.50304f, -0.840276f, -0.455854f, -0.224913f, 0.609824f, -0.11105f, 3.35635f, 2.02386f, 1.4687f, -0.708365f, -0.508992f, -3.02602f, -0.75725f, 1.85277f, 2.92817f, -0.172997f, -1.13279f, -0.355636f, -0.337669f, -0.588752f, 2.05759f, 1.0651f, 0.884758f, -0.0712112f, 3.81319f, 0.771629f, 0.949634f, 0.0838967f, -2.19264f, 0.114521f, 0.543556f, -1.63197f, -0.267442f, 1.15701f, -2.37862f, 2.57646f, 0.531208f, 0.9499f, -0.231441f, 1.51461f, 1.58888f, 0.895931f, -0.753084f, 0.545251f, 0.746903f, 0.012994f, -0.790398f, -1.1055f, 1.77789f, 0.430923f, 0.818241f, -0.731412f, 0.979546f, -2.48707f, -1.53658f, -1.66798f, -1.04585f, -0.667911f, 1.00299f, -2.20339f, 0.137826f, -2.31281f, 0.755535f, 0.495396f, 0.549629f, 0.713128f, 0.751369f, 0.283996f, -0.814532f, 1.4866f, 1.12105f, 0.927998f, 0.517938f, -0.612661f, -1.47756f, -1.42422f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_SAME_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {-1.27853f, 0.989692f, -0.536896f, 1.33708f, 1.43859f, -0.662793f, -0.524396f, 0.12666f, -0.186842f, -0.385009f, -1.23059f, 0.359522f, -0.282945f, 0.0847837f, 0.149246f, 0.952311f, 0.484796f, -1.41301f, 1.17741f, -1.21565f, 0.512143f, -0.0533093f, 1.16328f, -0.126476f, 1.2248f, -0.619941f, 1.59314f, 1.13719f, 1.18608f, 0.548297f, -0.993354f, 0.318668f, -0.629126f, -1.961f, -1.02403f, 3.99355f, -0.562438f, -0.928687f, -0.566053f, 1.13613f, -0.414666f, -1.72657f, -0.478669f, 1.48565f, -0.317118f, -1.38343f, 1.81634f, -0.407478f, -0.481893f, 0.247846f, -0.519673f, -1.01065f, -0.184304f, -0.196685f, 0.0845042f, -0.201145f, -0.333518f, 0.118687f, 0.432037f, 0.419788f, 0.570793f, -1.10231f, -0.460382f, 0.679068f, 1.74987f, 0.298548f, -0.179382f, 1.37042f, -1.548f, -0.0867897f, 0.255731f, 0.915651f, -1.87308f, 1.72032f, 1.23694f, 1.60084f, 2.37292f, -0.352093f, 0.920351f, -0.35811f, -1.19989f, 0.103177f, 2.58936f, -1.09619f, 0.771379f, 0.290864f, 1.80768f, -0.185224f, 0.237127f, 0.497944f, -0.127337f, 1.68537f, -2.52744f, -2.0838f, 0.128238f, 0.893795f, -0.949229f, 0.00589599f, 0.396121f, 0.434221f, -0.914871f, 0.834954f, -0.957341f, -1.22109f, -0.452821f, -0.726574f, 1.78703f, -0.179904f, -0.675387f, 0.697255f, 0.717801f, -0.343106f, -0.135565f, 2.67757f, 0.254447f, 0.507911f, -0.000950437f, -0.713241f, 2.48496f, 0.533332f, -0.581063f, -1.86708f, 1.73923f, 0.314198f, -1.15998f, -2.13091f, 0.138338f, -0.190282f, -0.876718f, 0.522103f, -0.966914f, -0.495494f, -0.430026f, -0.900658f, -0.779081f, -0.444765f, 1.21135f, -1.56036f, 0.00200015f, 0.434006f, -1.28653f, -2.39659f, -1.34346f, 0.403449f, -0.684298f, -0.307039f, -2.76237f, 1.17432f, 0.399879f, 0.95563f, -1.52564f, -0.114779f, -0.213297f, -1.68688f, 0.111419f, -0.479644f, 1.34136f, 2.64585f, 1.26092f, -0.0600559f, 2.25828f, -0.187854f, 1.3704f, 0.274464f, 0.539129f, 0.844178f, 0.933336f, 1.4649f, -0.706006f, -0.0979362f, -0.639288f, 1.01003f, 1.90969f, -0.292255f, 0.862479f, -0.0353232f, -2.95941f, -2.23999f, 0.415283f, 0.979926f, -0.734348f, 0.594972f, 0.385019f, -0.904872f, -2.07065f, -0.601987f, 0.590007f, 2.12817f, -0.348587f, 0.134467f, 3.455f, -0.0307461f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {0.78574f, 0.0141003f, 1.24104f, 0.900559f, 1.0089f, 0.270558f, -0.371484f, 0.155766f, 1.06709f, -0.797245f, 2.2661f, -1.33682f, 0.943457f, -0.345875f, 0.104745f, -0.453742f, -0.489415f, -2.10237f, -0.746785f, 0.774279f, 1.03753f, -1.00373f, -0.0662623f, 0.280837f, 3.04734f, -0.980369f, 1.64909f, -0.594375f, -0.613449f, 1.12977f, 0.118765f, 1.35182f, 1.38049f, 1.03795f, -1.6372f, 1.8485f, -0.437375f, 0.0811864f, 2.01812f, -0.840276f, 0.609824f, 2.02386f, -0.508992f, 1.85277f, -1.13279f, -0.588752f, 0.884758f, 0.771629f, -2.19264f, -1.63197f, -2.37862f, 0.9499f, 1.58888f, 0.545251f, -0.790398f, 0.430923f, 0.979546f, -1.66798f, 1.00299f, -2.31281f, 0.549629f, 0.283996f, 1.12105f, -0.612661f, 0.0700466f, -0.621007f, 0.580398f, -0.683229f, -0.0752488f, 0.756819f, 0.149005f, -0.476502f, -1.16534f, 0.802736f, -1.45548f, 1.15225f, 0.885211f, -0.114708f, 0.828324f, -0.288829f, 1.74889f, 0.613022f, 3.63816f, -0.613917f, -0.177923f, 1.83859f, 0.218806f, 0.902901f, -1.57302f, -3.85305f, 2.33573f, 0.325747f, 2.85073f, 1.1351f, -0.199547f, -1.85457f, 2.38342f, -0.321571f, 1.09302f, -0.158928f, -1.5794f, 0.912054f, 2.62907f, -0.455854f, -0.11105f, 1.4687f, -3.02602f, 2.92817f, -0.355636f, 2.05759f, -0.0712112f, 0.949634f, 0.114521f, -0.267442f, 2.57646f, -0.231441f, 0.895931f, 0.746903f, -1.1055f, 0.818241f, -2.48707f, -1.04585f, -2.20339f, 0.755535f, 0.713128f, -0.814532f, 0.927998f, -1.47756f, -0.110245f, -0.979104f, -0.512997f, -1.0162f, 0.110969f, -0.10753f, 0.0973829f, 0.259481f, 1.52694f, -0.997109f, 2.15506f, -3.09324f, 0.987944f, 1.7107f, -2.49964f, -0.0948694f, -0.378257f, -2.5225f, -1.9287f, -0.650011f, 0.891815f, -1.59239f, -1.088f, -1.90127f, 1.10881f, -0.955859f, 0.31144f, -0.952566f, 1.94692f, -0.449652f, 2.873f, 1.22364f, 0.882321f, -2.60202f, 0.461768f, 4.28871f, 1.59869f, 0.452176f, 1.50304f, -0.224913f, 3.35635f, -0.708365f, -0.75725f, -0.172997f, -0.337669f, 1.0651f, 3.81319f, 0.0838967f, 0.543556f, 1.15701f, 0.531208f, 1.51461f, -0.753084f, 0.012994f, 1.77789f, -0.731412f, -1.53658f, -0.667911f, 0.137826f, 0.495396f, 0.751369f, 1.4866f, 0.517938f, -1.42422f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_SAME_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {-1.27853f, 0.989692f, -0.536896f, 1.33708f, 1.43859f, -0.662793f, -0.524396f, 0.12666f, -0.186842f, -0.385009f, -1.23059f, 0.359522f, -0.282945f, 0.0847837f, 0.149246f, 0.952311f, 0.484796f, -1.41301f, 1.17741f, -1.21565f, 0.512143f, -0.0533093f, 1.16328f, -0.126476f, 1.2248f, -0.619941f, 1.59314f, 1.13719f, 1.18608f, 0.548297f, -0.993354f, 0.318668f, -0.629126f, -1.961f, -1.02403f, 3.99355f, -0.562438f, -0.928687f, -0.566053f, 1.13613f, -0.414666f, -1.72657f, -0.478669f, 1.48565f, -0.317118f, -1.38343f, 1.81634f, -0.407478f, -0.481893f, 0.247846f, -0.519673f, -1.01065f, -0.184304f, -0.196685f, 0.0845042f, -0.201145f, -0.333518f, 0.118687f, 0.432037f, 0.419788f, 0.570793f, -1.10231f, -0.460382f, 0.679068f, 1.74987f, 0.298548f, -0.179382f, 1.37042f, -1.548f, -0.0867897f, 0.255731f, 0.915651f, -1.87308f, 1.72032f, 1.23694f, 1.60084f, 2.37292f, -0.352093f, 0.920351f, -0.35811f, -1.19989f, 0.103177f, 2.58936f, -1.09619f, 0.771379f, 0.290864f, 1.80768f, -0.185224f, 0.237127f, 0.497944f, -0.127337f, 1.68537f, -2.52744f, -2.0838f, 0.128238f, 0.893795f, -0.949229f, 0.00589599f, 0.396121f, 0.434221f, -0.914871f, 0.834954f, -0.957341f, -1.22109f, -0.452821f, -0.726574f, 1.78703f, -0.179904f, -0.675387f, 0.697255f, 0.717801f, -0.343106f, -0.135565f, 2.67757f, 0.254447f, 0.507911f, -0.000950437f, -0.713241f, 2.48496f, 0.533332f, -0.581063f, -1.86708f, 1.73923f, 0.314198f, -1.15998f, -2.13091f, 0.138338f, -0.190282f, -0.876718f, 0.522103f, -0.966914f, -0.495494f, -0.430026f, -0.900658f, -0.779081f, -0.444765f, 1.21135f, -1.56036f, 0.00200015f, 0.434006f, -1.28653f, -2.39659f, -1.34346f, 0.403449f, -0.684298f, -0.307039f, -2.76237f, 1.17432f, 0.399879f, 0.95563f, -1.52564f, -0.114779f, -0.213297f, -1.68688f, 0.111419f, -0.479644f, 1.34136f, 2.64585f, 1.26092f, -0.0600559f, 2.25828f, -0.187854f, 1.3704f, 0.274464f, 0.539129f, 0.844178f, 0.933336f, 1.4649f, -0.706006f, -0.0979362f, -0.639288f, 1.01003f, 1.90969f, -0.292255f, 0.862479f, -0.0353232f, -2.95941f, -2.23999f, 0.415283f, 0.979926f, -0.734348f, 0.594972f, 0.385019f, -0.904872f, -2.07065f, -0.601987f, 0.590007f, 2.12817f, -0.348587f, 0.134467f, 3.455f, -0.0307461f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {0.78574f, 0.0141003f, 1.24104f, 0.900559f, 1.0089f, 0.270558f, -0.371484f, 0.155766f, 1.06709f, -0.797245f, 2.2661f, -1.33682f, 0.943457f, -0.345875f, 0.104745f, -0.453742f, -0.489415f, -2.10237f, -0.746785f, 0.774279f, 1.03753f, -1.00373f, -0.0662623f, 0.280837f, 3.04734f, -0.980369f, 1.64909f, -0.594375f, -0.613449f, 1.12977f, 0.118765f, 1.35182f, 1.38049f, 1.03795f, -1.6372f, 1.8485f, -0.437375f, 0.0811864f, 2.01812f, -0.840276f, 0.609824f, 2.02386f, -0.508992f, 1.85277f, -1.13279f, -0.588752f, 0.884758f, 0.771629f, -2.19264f, -1.63197f, -2.37862f, 0.9499f, 1.58888f, 0.545251f, -0.790398f, 0.430923f, 0.979546f, -1.66798f, 1.00299f, -2.31281f, 0.549629f, 0.283996f, 1.12105f, -0.612661f, 0.0700466f, -0.621007f, 0.580398f, -0.683229f, -0.0752488f, 0.756819f, 0.149005f, -0.476502f, -1.16534f, 0.802736f, -1.45548f, 1.15225f, 0.885211f, -0.114708f, 0.828324f, -0.288829f, 1.74889f, 0.613022f, 3.63816f, -0.613917f, -0.177923f, 1.83859f, 0.218806f, 0.902901f, -1.57302f, -3.85305f, 2.33573f, 0.325747f, 2.85073f, 1.1351f, -0.199547f, -1.85457f, 2.38342f, -0.321571f, 1.09302f, -0.158928f, -1.5794f, 0.912054f, 2.62907f, -0.455854f, -0.11105f, 1.4687f, -3.02602f, 2.92817f, -0.355636f, 2.05759f, -0.0712112f, 0.949634f, 0.114521f, -0.267442f, 2.57646f, -0.231441f, 0.895931f, 0.746903f, -1.1055f, 0.818241f, -2.48707f, -1.04585f, -2.20339f, 0.755535f, 0.713128f, -0.814532f, 0.927998f, -1.47756f, -0.110245f, -0.979104f, -0.512997f, -1.0162f, 0.110969f, -0.10753f, 0.0973829f, 0.259481f, 1.52694f, -0.997109f, 2.15506f, -3.09324f, 0.987944f, 1.7107f, -2.49964f, -0.0948694f, -0.378257f, -2.5225f, -1.9287f, -0.650011f, 0.891815f, -1.59239f, -1.088f, -1.90127f, 1.10881f, -0.955859f, 0.31144f, -0.952566f, 1.94692f, -0.449652f, 2.873f, 1.22364f, 0.882321f, -2.60202f, 0.461768f, 4.28871f, 1.59869f, 0.452176f, 1.50304f, -0.224913f, 3.35635f, -0.708365f, -0.75725f, -0.172997f, -0.337669f, 1.0651f, 3.81319f, 0.0838967f, 0.543556f, 1.15701f, 0.531208f, 1.51461f, -0.753084f, 0.012994f, 1.77789f, -0.731412f, -1.53658f, -0.667911f, 0.137826f, 0.495396f, 0.751369f, 1.4866f, 0.517938f, -1.42422f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_VALID_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {-0.186842f, -1.87308f, 1.21135f, -0.385009f, 1.72032f, -1.56036f, -1.23059f, 1.23694f, 0.00200015f, 0.359522f, 1.60084f, 0.434006f, -0.282945f, 2.37292f, -1.28653f, 0.0847837f, -0.352093f, -2.39659f, 0.149246f, 0.920351f, -1.34346f, 0.484796f, -1.19989f, -0.684298f, -1.41301f, 0.103177f, -0.307039f, 1.17741f, 2.58936f, -2.76237f, -1.21565f, -1.09619f, 1.17432f, 0.512143f, 0.771379f, 0.399879f, -0.0533093f, 0.290864f, 0.95563f, 1.16328f, 1.80768f, -1.52564f, 1.2248f, 0.237127f, -0.213297f, -0.619941f, 0.497944f, -1.68688f, 1.59314f, -0.127337f, 0.111419f, 1.13719f, 1.68537f, -0.479644f, 1.18608f, -2.52744f, 1.34136f, 0.548297f, -2.0838f, 2.64585f, -0.993354f, 0.128238f, 1.26092f, -0.629126f, -0.949229f, 2.25828f, -1.961f, 0.00589599f, -0.187854f, -1.02403f, 0.396121f, 1.3704f, 3.99355f, 0.434221f, 0.274464f, -0.562438f, -0.914871f, 0.539129f, -0.928687f, 0.834954f, 0.844178f, -0.566053f, -0.957341f, 0.933336f, -0.414666f, -0.452821f, -0.706006f, -1.72657f, -0.726574f, -0.0979362f, -0.478669f, 1.78703f, -0.639288f, 1.48565f, -0.179904f, 1.01003f, -0.317118f, -0.675387f, 1.90969f, -1.38343f, 0.697255f, -0.292255f, 1.81634f, 0.717801f, 0.862479f, -0.481893f, -0.135565f, -2.95941f, 0.247846f, 2.67757f, -2.23999f, -0.519673f, 0.254447f, 0.415283f, -1.01065f, 0.507911f, 0.979926f, -0.184304f, -0.000950437f, -0.734348f, -0.196685f, -0.713241f, 0.594972f, 0.0845044f, 2.48496f, 0.385019f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {1.06709f, -1.16534f, 1.52694f, -0.797245f, 0.802736f, -0.997109f, 2.2661f, -1.45548f, 2.15506f, -1.33682f, 1.15225f, -3.09324f, 0.943457f, 0.885211f, 0.987944f, -0.345875f, -0.114708f, 1.7107f, 0.104745f, 0.828324f, -2.49964f, -0.489415f, 1.74889f, -0.378257f, -2.10237f, 0.613022f, -2.5225f, -0.746785f, 3.63816f, -1.9287f, 0.774279f, -0.613917f, -0.650011f, 1.03753f, -0.177923f, 0.891815f, -1.00373f, 1.83859f, -1.59239f, -0.0662623f, 0.218806f, -1.088f, 3.04734f, -1.57302f, 1.10881f, -0.980369f, -3.85305f, -0.955859f, 1.64909f, 2.33573f, 0.31144f, -0.594375f, 0.325747f, -0.952566f, -0.613449f, 2.85073f, 1.94692f, 1.12977f, 1.1351f, -0.449652f, 0.118765f, -0.199547f, 2.873f, 1.38049f, 2.38342f, 0.882321f, 1.03795f, -0.321571f, -2.60202f, -1.6372f, 1.09302f, 0.461768f, 1.8485f, -0.158928f, 4.28871f, -0.437375f, -1.5794f, 1.59869f, 0.0811864f, 0.912054f, 0.452176f, 2.01812f, 2.62907f, 1.50304f, 0.609824f, -0.11105f, 3.35635f, 2.02386f, 1.4687f, -0.708365f, -0.508992f, -3.02602f, -0.75725f, 1.85277f, 2.92817f, -0.172997f, -1.13279f, -0.355636f, -0.337669f, -0.588752f, 2.05759f, 1.0651f, 0.884758f, -0.0712112f, 3.81319f, -2.19264f, 0.114521f, 0.543556f, -1.63197f, -0.267442f, 1.15701f, -2.37862f, 2.57646f, 0.531208f, 0.9499f, -0.231441f, 1.51461f, 1.58888f, 0.895931f, -0.753084f, 0.545251f, 0.746904f, 0.0129939f, -0.790398f, -1.1055f, 1.77789f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_VALID_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}}},
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
  {{0, {-0.186842f, -1.87308f, 1.21135f, -0.385009f, 1.72032f, -1.56036f, -1.23059f, 1.23694f, 0.00200015f, 0.359522f, 1.60084f, 0.434006f, -0.282945f, 2.37292f, -1.28653f, 0.0847837f, -0.352093f, -2.39659f, 0.149246f, 0.920351f, -1.34346f, 0.484796f, -1.19989f, -0.684298f, -1.41301f, 0.103177f, -0.307039f, 1.17741f, 2.58936f, -2.76237f, -1.21565f, -1.09619f, 1.17432f, 0.512143f, 0.771379f, 0.399879f, -0.0533093f, 0.290864f, 0.95563f, 1.16328f, 1.80768f, -1.52564f, 1.2248f, 0.237127f, -0.213297f, -0.619941f, 0.497944f, -1.68688f, 1.59314f, -0.127337f, 0.111419f, 1.13719f, 1.68537f, -0.479644f, 1.18608f, -2.52744f, 1.34136f, 0.548297f, -2.0838f, 2.64585f, -0.993354f, 0.128238f, 1.26092f, -0.629126f, -0.949229f, 2.25828f, -1.961f, 0.00589599f, -0.187854f, -1.02403f, 0.396121f, 1.3704f, 3.99355f, 0.434221f, 0.274464f, -0.562438f, -0.914871f, 0.539129f, -0.928687f, 0.834954f, 0.844178f, -0.566053f, -0.957341f, 0.933336f, -0.414666f, -0.452821f, -0.706006f, -1.72657f, -0.726574f, -0.0979362f, -0.478669f, 1.78703f, -0.639288f, 1.48565f, -0.179904f, 1.01003f, -0.317118f, -0.675387f, 1.90969f, -1.38343f, 0.697255f, -0.292255f, 1.81634f, 0.717801f, 0.862479f, -0.481893f, -0.135565f, -2.95941f, 0.247846f, 2.67757f, -2.23999f, -0.519673f, 0.254447f, 0.415283f, -1.01065f, 0.507911f, 0.979926f, -0.184304f, -0.000950437f, -0.734348f, -0.196685f, -0.713241f, 0.594972f, 0.0845044f, 2.48496f, 0.385019f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}}},
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
  {{0, {1.06709f, -1.16534f, 1.52694f, -0.797245f, 0.802736f, -0.997109f, 2.2661f, -1.45548f, 2.15506f, -1.33682f, 1.15225f, -3.09324f, 0.943457f, 0.885211f, 0.987944f, -0.345875f, -0.114708f, 1.7107f, 0.104745f, 0.828324f, -2.49964f, -0.489415f, 1.74889f, -0.378257f, -2.10237f, 0.613022f, -2.5225f, -0.746785f, 3.63816f, -1.9287f, 0.774279f, -0.613917f, -0.650011f, 1.03753f, -0.177923f, 0.891815f, -1.00373f, 1.83859f, -1.59239f, -0.0662623f, 0.218806f, -1.088f, 3.04734f, -1.57302f, 1.10881f, -0.980369f, -3.85305f, -0.955859f, 1.64909f, 2.33573f, 0.31144f, -0.594375f, 0.325747f, -0.952566f, -0.613449f, 2.85073f, 1.94692f, 1.12977f, 1.1351f, -0.449652f, 0.118765f, -0.199547f, 2.873f, 1.38049f, 2.38342f, 0.882321f, 1.03795f, -0.321571f, -2.60202f, -1.6372f, 1.09302f, 0.461768f, 1.8485f, -0.158928f, 4.28871f, -0.437375f, -1.5794f, 1.59869f, 0.0811864f, 0.912054f, 0.452176f, 2.01812f, 2.62907f, 1.50304f, 0.609824f, -0.11105f, 3.35635f, 2.02386f, 1.4687f, -0.708365f, -0.508992f, -3.02602f, -0.75725f, 1.85277f, 2.92817f, -0.172997f, -1.13279f, -0.355636f, -0.337669f, -0.588752f, 2.05759f, 1.0651f, 0.884758f, -0.0712112f, 3.81319f, -2.19264f, 0.114521f, 0.543556f, -1.63197f, -0.267442f, 1.15701f, -2.37862f, 2.57646f, 0.531208f, 0.9499f, -0.231441f, 1.51461f, 1.58888f, 0.895931f, -0.753084f, 0.545251f, 0.746904f, 0.0129939f, -0.790398f, -1.1055f, 1.77789f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_VALID_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {-0.186842f, -0.385009f, -1.23059f, 0.359522f, -0.282945f, 0.0847837f, 0.149246f, 0.484796f, -1.41301f, 1.17741f, -1.21565f, 0.512143f, -0.0533093f, 1.16328f, 1.2248f, -0.619941f, 1.59314f, 1.13719f, 1.18608f, 0.548297f, -0.993354f, -0.629126f, -1.961f, -1.02403f, 3.99355f, -0.562438f, -0.928687f, -0.566053f, -0.414666f, -1.72657f, -0.478669f, 1.48565f, -0.317118f, -1.38343f, 1.81634f, -0.481893f, 0.247846f, -0.519673f, -1.01065f, -0.184304f, -0.196685f, 0.0845044f, -1.87308f, 1.72032f, 1.23694f, 1.60084f, 2.37292f, -0.352093f, 0.920351f, -1.19989f, 0.103177f, 2.58936f, -1.09619f, 0.771379f, 0.290864f, 1.80768f, 0.237127f, 0.497944f, -0.127337f, 1.68537f, -2.52744f, -2.0838f, 0.128238f, -0.949229f, 0.00589599f, 0.396121f, 0.434221f, -0.914871f, 0.834954f, -0.957341f, -0.452821f, -0.726574f, 1.78703f, -0.179904f, -0.675387f, 0.697255f, 0.717801f, -0.135565f, 2.67757f, 0.254447f, 0.507911f, -0.000950437f, -0.713241f, 2.48496f, 1.21135f, -1.56036f, 0.00200015f, 0.434006f, -1.28653f, -2.39659f, -1.34346f, -0.684298f, -0.307039f, -2.76237f, 1.17432f, 0.399879f, 0.95563f, -1.52564f, -0.213297f, -1.68688f, 0.111419f, -0.479644f, 1.34136f, 2.64585f, 1.26092f, 2.25828f, -0.187854f, 1.3704f, 0.274464f, 0.539129f, 0.844178f, 0.933336f, -0.706006f, -0.0979362f, -0.639288f, 1.01003f, 1.90969f, -0.292255f, 0.862479f, -2.95941f, -2.23999f, 0.415283f, 0.979926f, -0.734348f, 0.594972f, 0.385019f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {1.06709f, -0.797245f, 2.2661f, -1.33682f, 0.943457f, -0.345875f, 0.104745f, -0.489415f, -2.10237f, -0.746785f, 0.774279f, 1.03753f, -1.00373f, -0.0662623f, 3.04734f, -0.980369f, 1.64909f, -0.594375f, -0.613449f, 1.12977f, 0.118765f, 1.38049f, 1.03795f, -1.6372f, 1.8485f, -0.437375f, 0.0811864f, 2.01812f, 0.609824f, 2.02386f, -0.508992f, 1.85277f, -1.13279f, -0.588752f, 0.884758f, -2.19264f, -1.63197f, -2.37862f, 0.9499f, 1.58888f, 0.545251f, -0.790398f, -1.16534f, 0.802736f, -1.45548f, 1.15225f, 0.885211f, -0.114708f, 0.828324f, 1.74889f, 0.613022f, 3.63816f, -0.613917f, -0.177923f, 1.83859f, 0.218806f, -1.57302f, -3.85305f, 2.33573f, 0.325747f, 2.85073f, 1.1351f, -0.199547f, 2.38342f, -0.321571f, 1.09302f, -0.158928f, -1.5794f, 0.912054f, 2.62907f, -0.11105f, 1.4687f, -3.02602f, 2.92817f, -0.355636f, 2.05759f, -0.0712112f, 0.114521f, -0.267442f, 2.57646f, -0.231441f, 0.895931f, 0.746904f, -1.1055f, 1.52694f, -0.997109f, 2.15506f, -3.09324f, 0.987944f, 1.7107f, -2.49964f, -0.378257f, -2.5225f, -1.9287f, -0.650011f, 0.891815f, -1.59239f, -1.088f, 1.10881f, -0.955859f, 0.31144f, -0.952566f, 1.94692f, -0.449652f, 2.873f, 0.882321f, -2.60202f, 0.461768f, 4.28871f, 1.59869f, 0.452176f, 1.50304f, 3.35635f, -0.708365f, -0.75725f, -0.172997f, -0.337669f, 1.0651f, 3.81319f, 0.543556f, 1.15701f, 0.531208f, 1.51461f, -0.753084f, 0.0129939f, 1.77789f}}},
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

std::vector<MixedTypedExample> examples_3_H3_W2_VALID_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.869931f, 0.153672f, -0.134931f, -0.259157f, 0.765559f, 0.658494f, -0.252893f, -0.0700663f, 0.150845f, 0.406537f, -0.356362f, 0.210483f, -0.752038f, -0.551178f, 0.216348f, 0.55906f, -0.363763f, 0.756097f, -0.656317f, -0.40316f, 0.612362f, -0.398092f, -0.925272f, 0.096833f, 0.031654f, 0.0948254f, 0.352665f, -0.968068f, 0.939052f, -0.0582711f, 0.459711f, -0.680175f, 0.506004f, -0.172496f, -0.953884f, 0.209727f, 0.113194f, -0.472863f, -0.839445f, 0.344867f, -0.540827f, 0.506164f, 0.756772f, 0.460821f, -0.640603f, -0.568262f, 0.159673f, -0.160254f, 0.600721f, 0.477962f, -0.939481f, -0.511637f, -0.323684f, 0.364171f, -0.404559f, -0.334276f, 0.156511f, 0.818597f, -0.586015f, 0.0892409f, 0.465509f, 0.413067f, 0.59614f, -0.704381f, 0.644628f, 0.868562f, -0.247565f, -0.284296f, 0.41986f, 0.214355f, -0.478935f, -0.988729f, 0.829915f, -0.355343f, 0.800482f, -0.634303f, 0.457547f, 0.446766f, -0.852806f, -0.668493f, -0.162837f, -0.142269f, -0.998086f, -0.893682f, -0.869588f, -0.0423559f, 0.176549f, -0.296802f, -0.254479f, 0.643769f, -0.901179f, -0.615401f, -0.116289f, 0.435172f, 0.717436f, -0.415066f, -0.337808f, 0.870638f, 0.903042f, -0.285384f, 0.0756611f, 0.960609f, 0.457097f, -0.131619f, 0.571259f, -0.155839f, -0.662069f, 0.177872f, 0.702598f, -0.0713716f, -0.305208f, 0.787323f, 0.263186f, -0.702951f, -0.524519f, -0.503499f, 0.534444f, 0.0370358f, -0.814178f, 0.66925f, -0.427949f, -0.649902f, -0.559789f, -0.621251f, 0.4704f, 0.180822f, 0.825575f, -0.297631f, -0.918393f, -0.358177f, 0.22174f, -0.538065f, -0.556241f, -0.850169f, 0.530526f, -0.303061f, 0.476349f, 0.757145f, -0.713861f, 0.718236f, -0.550769f, -0.227462f, -0.351486f, -0.303493f, 0.0701012f, 0.329724f, -0.652949f, 0.432744f, -0.71327f, 0.436576f, 0.822904f, -0.427195f, 0.244905f, -0.90391f, 0.266159f, -0.388975f, 0.107523f, 0.334675f, 0.496627f, 0.339848f, -0.107218f, 0.931872f, 0.760078f, -0.45514f, 0.0924435f, -0.160385f, 0.163348f, 0.688715f, -0.95587f, 0.0789621f, 0.242908f, -0.289839f, -0.506406f, 0.413792f, 0.133816f, -0.753244f, -0.162387f, -0.731036f, 0.934072f, 0.106236f, -0.843745f, -0.168801f, 0.91745f, -0.801201f, 0.379153f, 0.427087f, -0.833923f, 0.213826f, 0.380261f, 0.172866f, 0.662916f, 0.697778f}}},
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
  {{0, {-0.186842f, -0.385009f, -1.23059f, 0.359522f, -0.282945f, 0.0847837f, 0.149246f, 0.484796f, -1.41301f, 1.17741f, -1.21565f, 0.512143f, -0.0533093f, 1.16328f, 1.2248f, -0.619941f, 1.59314f, 1.13719f, 1.18608f, 0.548297f, -0.993354f, -0.629126f, -1.961f, -1.02403f, 3.99355f, -0.562438f, -0.928687f, -0.566053f, -0.414666f, -1.72657f, -0.478669f, 1.48565f, -0.317118f, -1.38343f, 1.81634f, -0.481893f, 0.247846f, -0.519673f, -1.01065f, -0.184304f, -0.196685f, 0.0845044f, -1.87308f, 1.72032f, 1.23694f, 1.60084f, 2.37292f, -0.352093f, 0.920351f, -1.19989f, 0.103177f, 2.58936f, -1.09619f, 0.771379f, 0.290864f, 1.80768f, 0.237127f, 0.497944f, -0.127337f, 1.68537f, -2.52744f, -2.0838f, 0.128238f, -0.949229f, 0.00589599f, 0.396121f, 0.434221f, -0.914871f, 0.834954f, -0.957341f, -0.452821f, -0.726574f, 1.78703f, -0.179904f, -0.675387f, 0.697255f, 0.717801f, -0.135565f, 2.67757f, 0.254447f, 0.507911f, -0.000950437f, -0.713241f, 2.48496f, 1.21135f, -1.56036f, 0.00200015f, 0.434006f, -1.28653f, -2.39659f, -1.34346f, -0.684298f, -0.307039f, -2.76237f, 1.17432f, 0.399879f, 0.95563f, -1.52564f, -0.213297f, -1.68688f, 0.111419f, -0.479644f, 1.34136f, 2.64585f, 1.26092f, 2.25828f, -0.187854f, 1.3704f, 0.274464f, 0.539129f, 0.844178f, 0.933336f, -0.706006f, -0.0979362f, -0.639288f, 1.01003f, 1.90969f, -0.292255f, 0.862479f, -2.95941f, -2.23999f, 0.415283f, 0.979926f, -0.734348f, 0.594972f, 0.385019f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-0.295335f, 0.166084f, -0.719885f, 0.823947f, 0.187631f, -0.755085f, 0.0483436f, 0.0125783f, -0.15166f, 0.129664f, 0.924519f, 0.350817f, -0.00283395f, -0.319117f, 0.32865f, 0.591266f, 0.462056f, 0.6234f, -0.955642f, 0.664377f, -0.276263f, -0.958981f, 0.305369f, -0.382887f, -0.299804f, -0.103055f, 0.543743f, -0.857182f, -0.715614f, -0.590142f, -0.473357f, 0.486607f, -0.800994f, -0.441162f, 0.96965f, -0.526886f, 0.332789f, -0.934084f, -0.700395f, -0.691721f, 0.0390966f, -0.97158f, -0.468986f, -0.273117f, -0.725381f, -0.0949207f, -0.222133f, -0.92949f, 0.330311f, 0.475942f, -0.512208f, 0.65171f, -0.469013f, -0.157841f, -0.659437f, 0.89032f, 0.772958f, 0.917052f, 0.484142f, 0.478872f, -0.73299f, -0.0987856f, -0.498108f, 0.928941f, -0.00387601f, -0.28482f, -0.869386f, 0.473183f, 0.0426571f, -0.472453f, 0.933418f, 0.219742f, 0.0934905f, 0.838844f, 0.342843f, 0.841638f, -0.128467f, 0.84634f, 0.0293755f, -0.0743476f, -0.583625f, 0.535269f, -0.770173f, 0.399445f, -0.901951f, 0.482658f, -0.947818f, -0.805741f, -0.229828f, -0.45568f, -0.96073f, -0.96426f, 0.765278f, -0.238507f, -0.319626f, 0.580844f, 0.290763f, 0.718677f, 7.53637e-05f, -0.352682f, 0.723389f, -0.284705f, -0.985808f, 0.49448f, 0.298938f, 0.86393f, -0.256605f, -0.590343f, -0.194821f, -0.180302f, -0.40393f, 0.580079f, 0.0173551f, 0.907175f, 0.362463f, 0.990057f, -0.101311f, -0.677711f, -0.407607f, 0.228307f, 0.054701f, -0.895022f, 0.108648f, -0.984112f, 0.7526f, 0.125415f, 0.43209f, -0.130732f, -0.552251f, -0.152143f, -0.745598f, -0.331337f, -0.826897f, -0.0233656f, -0.961974f, 0.342604f, 0.783221f, -0.271388f, 0.274418f, -0.543993f, -0.682943f, 0.283003f, -0.0335696f, -0.741271f, -0.590183f, -0.670818f, 0.479986f, -0.968874f, 0.544104f, -0.807284f, 0.827498f, -0.796678f, 0.818783f, -0.227827f, 0.946747f, -0.292411f, -0.475043f, 0.673002f, 0.936014f, 0.425352f, -0.494953f, -0.828427f, -0.699973f, 0.799466f, 0.407659f, 0.961484f, -0.595342f, -0.0842649f, -0.128094f, 0.270606f, 0.47215f, -0.826529f, -0.259661f, 0.0446834f, 0.295772f, -0.169856f, -0.635823f, 0.242777f, 0.0496289f, 0.690733f, -0.68372f, -0.708224f, 0.677033f, -0.749514f, 0.551705f, -0.702397f, 0.833347f, 0.387176f, 0.443312f, 0.10876f, 0.344609f, -0.0569167f}}},
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
  {{0, {1.06709f, -0.797245f, 2.2661f, -1.33682f, 0.943457f, -0.345875f, 0.104745f, -0.489415f, -2.10237f, -0.746785f, 0.774279f, 1.03753f, -1.00373f, -0.0662623f, 3.04734f, -0.980369f, 1.64909f, -0.594375f, -0.613449f, 1.12977f, 0.118765f, 1.38049f, 1.03795f, -1.6372f, 1.8485f, -0.437375f, 0.0811864f, 2.01812f, 0.609824f, 2.02386f, -0.508992f, 1.85277f, -1.13279f, -0.588752f, 0.884758f, -2.19264f, -1.63197f, -2.37862f, 0.9499f, 1.58888f, 0.545251f, -0.790398f, -1.16534f, 0.802736f, -1.45548f, 1.15225f, 0.885211f, -0.114708f, 0.828324f, 1.74889f, 0.613022f, 3.63816f, -0.613917f, -0.177923f, 1.83859f, 0.218806f, -1.57302f, -3.85305f, 2.33573f, 0.325747f, 2.85073f, 1.1351f, -0.199547f, 2.38342f, -0.321571f, 1.09302f, -0.158928f, -1.5794f, 0.912054f, 2.62907f, -0.11105f, 1.4687f, -3.02602f, 2.92817f, -0.355636f, 2.05759f, -0.0712112f, 0.114521f, -0.267442f, 2.57646f, -0.231441f, 0.895931f, 0.746904f, -1.1055f, 1.52694f, -0.997109f, 2.15506f, -3.09324f, 0.987944f, 1.7107f, -2.49964f, -0.378257f, -2.5225f, -1.9287f, -0.650011f, 0.891815f, -1.59239f, -1.088f, 1.10881f, -0.955859f, 0.31144f, -0.952566f, 1.94692f, -0.449652f, 2.873f, 0.882321f, -2.60202f, 0.461768f, 4.28871f, 1.59869f, 0.452176f, 1.50304f, 3.35635f, -0.708365f, -0.75725f, -0.172997f, -0.337669f, 1.0651f, 3.81319f, 0.543556f, 1.15701f, 0.531208f, 1.51461f, -0.753084f, 0.0129939f, 1.77789f}}},
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

