// clang-format off
// Generated file (from: depthwise_conv2d_v1_2.mod.py). Do not edit
std::vector<MixedTypedExample> examples_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f, 10.0f, 25.0f, 10.0f, 26.0f, 10.0f, 27.0f, 10.0f, 28.0f, 10.0f, 29.0f}}},
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
  {{0, {11.0f, 3.0f, 7.2f, 10.6f, 11.0f, 3.0f, 7.4f, 10.9f, 11.0f, 3.0f, 7.8f, 11.5f, 11.0f, 3.0f, 8.0f, 11.8f}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f, 10.0f, 25.0f, 10.0f, 26.0f, 10.0f, 27.0f, 10.0f, 28.0f, 10.0f, 29.0f}}},
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
  {{0, {11.0f, 3.0f, 7.2f, 10.6f, 11.0f, 3.0f, 7.4f, 10.9f, 11.0f, 3.0f, 7.8f, 11.5f, 11.0f, 3.0f, 8.0f, 11.8f}}},
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
  {{0, {20, 42, 20, 44, 20, 46, 20, 48, 20, 50, 20, 52, 20, 54, 20, 56, 20, 58}}},
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
  {{0, {110, 30, 72, 106, 110, 30, 74, 109, 110, 30, 78, 115, 110, 30, 80, 118}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f, 10.0f, 25.0f, 10.0f, 26.0f, 10.0f, 27.0f, 10.0f, 28.0f, 10.0f, 29.0f}}, {1, {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {11.0f, 3.0f, 7.2f, 10.6f, 11.0f, 3.0f, 7.4f, 10.9f, 11.0f, 3.0f, 7.8f, 11.5f, 11.0f, 3.0f, 8.0f, 11.8f}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f, 10.0f, 25.0f, 10.0f, 26.0f, 10.0f, 27.0f, 10.0f, 28.0f, 10.0f, 29.0f}}, {1, {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {11.0f, 3.0f, 7.2f, 10.6f, 11.0f, 3.0f, 7.4f, 10.9f, 11.0f, 3.0f, 7.8f, 11.5f, 11.0f, 3.0f, 8.0f, 11.8f}}},
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
  {{2, {200, 400, 600, 800}}},
  // int -> QUANT8_ASYMM map
  {{0, {20, 42, 20, 44, 20, 46, 20, 48, 20, 50, 20, 52, 20, 54, 20, 56, 20, 58}}, {1, {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0}}},
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
  {{0, {110, 30, 72, 106, 110, 30, 74, 109, 110, 30, 78, 115, 110, 30, 80, 118}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f}}},
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
  {{0, {11.0f, 11.0f, 11.0f, 11.0f, 3.0f, 3.0f, 3.0f, 3.0f, 7.2f, 7.4f, 7.8f, 8.0f, 10.6f, 10.9f, 11.5f, 11.8f}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f}}},
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
  {{0, {11.0f, 11.0f, 11.0f, 11.0f, 3.0f, 3.0f, 3.0f, 3.0f, 7.2f, 7.4f, 7.8f, 8.0f, 10.6f, 10.9f, 11.5f, 11.8f}}},
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
  {{0, {20, 20, 20, 20, 20, 20, 20, 20, 20, 42, 44, 46, 48, 50, 52, 54, 56, 58}}},
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
  {{0, {110, 110, 110, 110, 30, 30, 30, 30, 72, 74, 78, 80, 106, 109, 115, 118}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f}}, {1, {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {11.0f, 11.0f, 11.0f, 11.0f, 3.0f, 3.0f, 3.0f, 3.0f, 7.2f, 7.4f, 7.8f, 8.0f, 10.6f, 10.9f, 11.5f, 11.8f}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f}}, {1, {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {11.0f, 11.0f, 11.0f, 11.0f, 3.0f, 3.0f, 3.0f, 3.0f, 7.2f, 7.4f, 7.8f, 8.0f, 10.6f, 10.9f, 11.5f, 11.8f}}},
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
  {{2, {200, 400, 600, 800}}},
  // int -> QUANT8_ASYMM map
  {{0, {20, 20, 20, 20, 20, 20, 20, 20, 20, 42, 44, 46, 48, 50, 52, 54, 56, 58}}, {1, {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0}}},
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
  {{0, {110, 110, 110, 110, 30, 30, 30, 30, 72, 74, 78, 80, 106, 109, 115, 118}}},
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
  {{0, {1.0f, 2.0f, 7.0f, 8.0f, 3.0f, 4.0f, 9.0f, 10.0f, 5.0f, 6.0f, 11.0f, 12.0f}}},
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
  {{0, {71.0f, -34.0f, 99.0f, -20.0f, 91.0f, -26.0f, 127.0f, -4.0f}}},
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
  {{0, {1.0f, 2.0f, 7.0f, 8.0f, 3.0f, 4.0f, 9.0f, 10.0f, 5.0f, 6.0f, 11.0f, 12.0f}}},
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
  {{0, {71.0f, -34.0f, 99.0f, -20.0f, 91.0f, -26.0f, 127.0f, -4.0f}}},
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
  {{0, {130, 132, 142, 144, 134, 136, 146, 148, 138, 140, 150, 152}}},
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
  {{0, {171, 66, 199, 80, 191, 74, 227, 96}}},
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
  {{0, {1.0f, 2.0f, 7.0f, 8.0f, 3.0f, 4.0f, 9.0f, 10.0f, 5.0f, 6.0f, 11.0f, 12.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {71.0f, -34.0f, 99.0f, -20.0f, 91.0f, -26.0f, 127.0f, -4.0f}}},
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
  {{0, {1.0f, 2.0f, 7.0f, 8.0f, 3.0f, 4.0f, 9.0f, 10.0f, 5.0f, 6.0f, 11.0f, 12.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {71.0f, -34.0f, 99.0f, -20.0f, 91.0f, -26.0f, 127.0f, -4.0f}}},
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
  {{2, {4, 8, 12, 16}}},
  // int -> QUANT8_ASYMM map
  {{0, {130, 132, 142, 144, 134, 136, 146, 148, 138, 140, 150, 152}}, {1, {130, 132, 134, 136, 110, 148, 106, 152, 138, 140, 142, 144, 154, 100, 158, 96}}},
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
  {{0, {171, 66, 199, 80, 191, 74, 227, 96}}},
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
  {{0, {1.0f, 7.0f, 3.0f, 9.0f, 5.0f, 11.0f, 2.0f, 8.0f, 4.0f, 10.0f, 6.0f, 12.0f}}},
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
  {{0, {71.0f, 91.0f, -34.0f, -26.0f, 99.0f, 127.0f, -20.0f, -4.0f}}},
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
  {{0, {1.0f, 7.0f, 3.0f, 9.0f, 5.0f, 11.0f, 2.0f, 8.0f, 4.0f, 10.0f, 6.0f, 12.0f}}},
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
  {{0, {71.0f, 91.0f, -34.0f, -26.0f, 99.0f, 127.0f, -20.0f, -4.0f}}},
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
  {{0, {130, 142, 134, 146, 138, 150, 132, 144, 136, 148, 140, 152}}},
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
  {{0, {171, 191, 66, 74, 199, 227, 80, 96}}},
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
  {{0, {1.0f, 7.0f, 3.0f, 9.0f, 5.0f, 11.0f, 2.0f, 8.0f, 4.0f, 10.0f, 6.0f, 12.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {71.0f, 91.0f, -34.0f, -26.0f, 99.0f, 127.0f, -20.0f, -4.0f}}},
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
  {{0, {1.0f, 7.0f, 3.0f, 9.0f, 5.0f, 11.0f, 2.0f, 8.0f, 4.0f, 10.0f, 6.0f, 12.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f}}, {2, {1.0f, 2.0f, 3.0f, 4.0f}}},
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
  {{0, {71.0f, 91.0f, -34.0f, -26.0f, 99.0f, 127.0f, -20.0f, -4.0f}}},
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
  {{2, {4, 8, 12, 16}}},
  // int -> QUANT8_ASYMM map
  {{0, {130, 142, 134, 146, 138, 150, 132, 144, 136, 148, 140, 152}}, {1, {130, 132, 134, 136, 110, 148, 106, 152, 138, 140, 142, 144, 154, 100, 158, 96}}},
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
  {{0, {171, 191, 66, 74, 199, 227, 80, 96}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{0, {120, 142, 120, 144, 120, 146, 120, 148}}},
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
  {{0, {183, 251}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f}}, {1, {0.25f, 0.0f, 0.25f, 1.0f, 0.25f, 0.0f, 0.25f, 1.0f}}, {2, {100.0f, 200.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{0, {10.0f, 21.0f, 10.0f, 22.0f, 10.0f, 23.0f, 10.0f, 24.0f}}, {1, {0.25f, 0.0f, 0.25f, 1.0f, 0.25f, 0.0f, 0.25f, 1.0f}}, {2, {100.0f, 200.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{2, {1600, 3200}}},
  // int -> QUANT8_ASYMM map
  {{0, {120, 142, 120, 144, 120, 146, 120, 148}}, {1, {130, 128, 130, 136, 130, 128, 130, 136}}},
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
  {{0, {183, 251}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{0, {120, 120, 120, 120, 142, 144, 146, 148}}},
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
  {{0, {183, 251}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f}}, {1, {0.25f, 0.0f, 0.25f, 1.0f, 0.25f, 0.0f, 0.25f, 1.0f}}, {2, {100.0f, 200.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f}}, {1, {0.25f, 0.0f, 0.25f, 1.0f, 0.25f, 0.0f, 0.25f, 1.0f}}, {2, {100.0f, 200.0f}}},
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
  {{0, {110.0f, 246.0f}}},
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
  {{2, {1600, 3200}}},
  // int -> QUANT8_ASYMM map
  {{0, {120, 120, 120, 120, 142, 144, 146, 148}}, {1, {130, 128, 130, 136, 130, 128, 130, 136}}},
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
  {{0, {183, 251}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nhwc_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 10.0f, 0.0f, 10.0f, 22.0f, 20.0f, 0.0f, 10.0f, 23.0f, 30.0f, 0.0f, 10.0f, 24.0f, 40.0f, 0.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 10.0f, 0.0f, 10.0f, 22.0f, 20.0f, 0.0f, 10.0f, 23.0f, 30.0f, 0.0f, 10.0f, 24.0f, 40.0f, 0.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_quant8_2 = {
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
  {{0, {148, 170, 148, 128, 148, 172, 168, 128, 148, 174, 188, 128, 148, 176, 208, 128}}},
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
  {{0, {120, 141, 220, 180}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nhwc_weight_as_input_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 10.0f, 0.0f, 10.0f, 22.0f, 20.0f, 0.0f, 10.0f, 23.0f, 30.0f, 0.0f, 10.0f, 24.0f, 40.0f, 0.0f}}, {1, {0.25f, 0.0f, 10.0f, 50.0f, 0.25f, 1.0f, 20.0f, 50.0f, 0.25f, 0.0f, 30.0f, 50.0f, 0.25f, 1.0f, 40.0f, 50.0f}}, {2, {6000.0f, 7000.0f, 8000.0f, 9000.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_weight_as_input_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 21.0f, 10.0f, 0.0f, 10.0f, 22.0f, 20.0f, 0.0f, 10.0f, 23.0f, 30.0f, 0.0f, 10.0f, 24.0f, 40.0f, 0.0f}}, {1, {0.25f, 0.0f, 10.0f, 50.0f, 0.25f, 1.0f, 20.0f, 50.0f, 0.25f, 0.0f, 30.0f, 50.0f, 0.25f, 1.0f, 40.0f, 50.0f}}, {2, {6000.0f, 7000.0f, 8000.0f, 9000.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nhwc_weight_as_input_quant8_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {48000, 56000, 64000, 72000}}},
  // int -> QUANT8_ASYMM map
  {{0, {148, 170, 148, 128, 148, 172, 168, 128, 148, 174, 188, 128, 148, 176, 208, 128}}, {1, {1, 0, 40, 200, 1, 4, 80, 200, 1, 0, 120, 200, 1, 4, 160, 200}}},
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
  {{0, {120, 141, 220, 180}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nchw_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 10.0f, 20.0f, 30.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 10.0f, 20.0f, 30.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_quant8_2 = {
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
  {{0, {148, 148, 148, 148, 170, 172, 174, 176, 148, 168, 188, 208, 128, 128, 128, 128}}},
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
  {{0, {120, 141, 220, 180}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_nchw_weight_as_input_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 10.0f, 20.0f, 30.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {1, {0.25f, 0.0f, 10.0f, 50.0f, 0.25f, 1.0f, 20.0f, 50.0f, 0.25f, 0.0f, 30.0f, 50.0f, 0.25f, 1.0f, 40.0f, 50.0f}}, {2, {6000.0f, 7000.0f, 8000.0f, 9000.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_weight_as_input_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 10.0f, 10.0f, 10.0f, 21.0f, 22.0f, 23.0f, 24.0f, 10.0f, 20.0f, 30.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {1, {0.25f, 0.0f, 10.0f, 50.0f, 0.25f, 1.0f, 20.0f, 50.0f, 0.25f, 0.0f, 30.0f, 50.0f, 0.25f, 1.0f, 40.0f, 50.0f}}, {2, {6000.0f, 7000.0f, 8000.0f, 9000.0f}}},
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
  {{0, {6010.0f, 7046.0f, 11000.0f, 9000.0f}}},
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

std::vector<MixedTypedExample> examples_large_nchw_weight_as_input_quant8_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {48000, 56000, 64000, 72000}}},
  // int -> QUANT8_ASYMM map
  {{0, {148, 148, 148, 148, 170, 172, 174, 176, 148, 168, 188, 208, 128, 128, 128, 128}}, {1, {1, 0, 40, 200, 1, 4, 80, 200, 1, 0, 120, 200, 1, 4, 160, 200}}},
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
  {{0, {120, 141, 220, 180}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

