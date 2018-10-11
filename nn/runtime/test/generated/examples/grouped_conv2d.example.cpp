// clang-format off
// Generated file (from: grouped_conv2d.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {33.0f, 0.0f, 33.0f, 6.0f, 31.0f, 3.0f, 27.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f}}, {1, {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f}}, {2, {10.0f, -35.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {33.0f, 0.0f, 33.0f, 6.0f, 31.0f, 3.0f, 27.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {33.0f, 0.0f, 33.0f, 6.0f, 31.0f, 3.0f, 27.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f}}, {1, {1.0f, 2.0f, 2.0f, 1.0f, 4.0f, 3.0f, 2.0f, 1.0f}}, {2, {10.0f, -35.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {33.0f, 0.0f, 33.0f, 6.0f, 31.0f, 3.0f, 27.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {104, 108, 112, 116, 120, 124, 124, 120, 116, 112, 108, 104, 108, 112, 112, 112, 112, 112}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {146, 80, 146, 92, 142, 86, 134, 80}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {160, -560}}},
  // int -> QUANT8_ASYMM map
  {{0, {104, 108, 112, 116, 120, 124, 124, 120, 116, 112, 108, 104, 108, 112, 112, 112, 112, 112}}, {1, {132, 136, 136, 132, 144, 140, 136, 132}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {146, 80, 146, 92, 142, 86, 134, 80}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_large = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {567.0f, -873.0f, 1480.0f, -160.0f, 608.0f, -840.0f, 1370.0f, -10.0f, 543.0f, -907.0f, 760.0f, -310.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f}}, {1, {100.0f, 20.0f, 1.0f, 200.0f, 10.0f, 2.0f, 200.0f, 30.0f, 1.0f, 100.0f, 20.0f, 3.0f}}, {2, {500.0f, -1000.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {567.0f, -873.0f, 1480.0f, -160.0f, 608.0f, -840.0f, 1370.0f, -10.0f, 543.0f, -907.0f, 760.0f, -310.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_relaxed = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {567.0f, -873.0f, 1480.0f, -160.0f, 608.0f, -840.0f, 1370.0f, -10.0f, 543.0f, -907.0f, 760.0f, -310.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_relaxed_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 4.0f, 3.0f, 2.0f, 1.0f, 2.0f, 3.0f, 3.0f, 3.0f}}, {1, {100.0f, 20.0f, 1.0f, 200.0f, 10.0f, 2.0f, 200.0f, 30.0f, 1.0f, 100.0f, 20.0f, 3.0f}}, {2, {500.0f, -1000.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {567.0f, -873.0f, 1480.0f, -160.0f, 608.0f, -840.0f, 1370.0f, -10.0f, 543.0f, -907.0f, 760.0f, -310.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_quant8 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 136, 140, 144, 144, 140, 136, 132, 136, 140, 140, 140}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {157, 13, 248, 84, 161, 16, 237, 99, 154, 9, 176, 69}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_large_quant8_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {2000, -4000}}},
  // int -> QUANT8_ASYMM map
  {{0, {132, 136, 140, 144, 144, 140, 136, 132, 136, 140, 140, 140}}, {1, {100, 20, 1, 200, 10, 2, 200, 30, 1, 100, 20, 3}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {157, 13, 248, 84, 161, 16, 237, 99, 154, 9, 176, 69}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 55.0f, 4.0f, 3.0f, 2.0f, 1.0f, 5.0f, 4.0f, 3.0f, 2.0f, 11.0f, 2.0f, 3.0f, 4.0f, 5.0f, 2.0f, 3.0f, 2.0f, 3.0f, 22.0f, 3.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 1.0f, 33.0f, 1.0f, 2.0f, 0.0f, 1.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {24.0f, -16.0f, 215.0f, 338.0f, 98.0f, -51.0f, 32.0f, -6.0f, 73.0f, 50.0f, 134.0f, -45.0f, 24.0f, -13.0f, 111.0f, 128.0f, 102.0f, -51.0f, 17.0f, -18.0f, 134.0f, 170.0f, 73.0f, -55.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 55.0f, 4.0f, 3.0f, 2.0f, 1.0f, 5.0f, 4.0f, 3.0f, 2.0f, 11.0f, 2.0f, 3.0f, 4.0f, 5.0f, 2.0f, 3.0f, 2.0f, 3.0f, 22.0f, 3.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 1.0f, 33.0f, 1.0f, 2.0f, 0.0f, 1.0f}}, {1, {1.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 3.0f, 3.0f, 6.0f, 6.0f, 6.0f, 9.0f, 8.0f, 5.0f, 2.0f, 1.0f, 1.0f}}, {2, {10.0f, -20.0f, 30.0f, -40.0f, 50.0f, -60.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {24.0f, -16.0f, 215.0f, 338.0f, 98.0f, -51.0f, 32.0f, -6.0f, 73.0f, 50.0f, 134.0f, -45.0f, 24.0f, -13.0f, 111.0f, 128.0f, 102.0f, -51.0f, 17.0f, -18.0f, 134.0f, 170.0f, 73.0f, -55.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_relaxed = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 55.0f, 4.0f, 3.0f, 2.0f, 1.0f, 5.0f, 4.0f, 3.0f, 2.0f, 11.0f, 2.0f, 3.0f, 4.0f, 5.0f, 2.0f, 3.0f, 2.0f, 3.0f, 22.0f, 3.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 1.0f, 33.0f, 1.0f, 2.0f, 0.0f, 1.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {24.0f, -16.0f, 215.0f, 338.0f, 98.0f, -51.0f, 32.0f, -6.0f, 73.0f, 50.0f, 134.0f, -45.0f, 24.0f, -13.0f, 111.0f, 128.0f, 102.0f, -51.0f, 17.0f, -18.0f, 134.0f, 170.0f, 73.0f, -55.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_relaxed_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 55.0f, 4.0f, 3.0f, 2.0f, 1.0f, 5.0f, 4.0f, 3.0f, 2.0f, 11.0f, 2.0f, 3.0f, 4.0f, 5.0f, 2.0f, 3.0f, 2.0f, 3.0f, 22.0f, 3.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 1.0f, 33.0f, 1.0f, 2.0f, 0.0f, 1.0f}}, {1, {1.0f, 2.0f, 3.0f, 2.0f, 1.0f, 0.0f, 2.0f, 3.0f, 3.0f, 6.0f, 6.0f, 6.0f, 9.0f, 8.0f, 5.0f, 2.0f, 1.0f, 1.0f}}, {2, {10.0f, -20.0f, 30.0f, -40.0f, 50.0f, -60.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {24.0f, -16.0f, 215.0f, 338.0f, 98.0f, -51.0f, 32.0f, -6.0f, 73.0f, 50.0f, 134.0f, -45.0f, 24.0f, -13.0f, 111.0f, 128.0f, 102.0f, -51.0f, 17.0f, -18.0f, 134.0f, 170.0f, 73.0f, -55.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_quant8 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {2, 4, 6, 8, 110, 8, 6, 4, 2, 10, 8, 6, 4, 22, 4, 6, 8, 10, 4, 6, 4, 6, 44, 6, 4, 6, 4, 2, 0, 4, 2, 66, 2, 4, 0, 2}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {72, 52, 168, 229, 109, 34, 76, 57, 96, 85, 127, 38, 72, 54, 116, 124, 111, 34, 68, 51, 127, 145, 96, 32}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_channel_quant8_weight_as_input = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {80, -160, 240, -320, 400, -480}}},
  // int -> QUANT8_ASYMM map
  {{0, {2, 4, 6, 8, 110, 8, 6, 4, 2, 10, 8, 6, 4, 22, 4, 6, 8, 10, 4, 6, 4, 6, 44, 6, 4, 6, 4, 2, 0, 4, 2, 66, 2, 4, 0, 2}}, {1, {4, 8, 12, 8, 4, 0, 8, 12, 12, 24, 24, 24, 36, 32, 20, 8, 4, 4}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {72, 52, 168, 229, 109, 34, 76, 57, 96, 85, 127, 38, 72, 54, 116, 124, 111, 34, 68, 51, 127, 145, 96, 32}}}
}
}, // End of an example
};

