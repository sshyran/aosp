// clang-format off
// Generated file (from: transpose_conv2d.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 0.0f, 2.0f, 2.0f, 6.0f, 8.0f, 5.0f, 6.0f, 9.0f, 10.0f, 6.0f, 6.0f, 8.0f, 8.0f, 24.0f, 26.0f, 17.0f, 18.0f, 21.0f, 22.0f, 15.0f, 18.0f, 23.0f, 26.0f, 61.0f, 70.0f, 41.0f, 46.0f, 53.0f, 58.0f, 20.0f, 22.0f, 26.0f, 28.0f, 60.0f, 66.0f, 35.0f, 38.0f, 43.0f, 46.0f, 38.0f, 40.0f, 44.0f, 46.0f, 102.0f, 108.0f, 59.0f, 62.0f, 67.0f, 70.0f}}},
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
  {{0, {1.0f, 2.0f, 3.0f, 4.0f}}, {1, {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f}}, {2, {-1.0f, -2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 0.0f, 2.0f, 2.0f, 6.0f, 8.0f, 5.0f, 6.0f, 9.0f, 10.0f, 6.0f, 6.0f, 8.0f, 8.0f, 24.0f, 26.0f, 17.0f, 18.0f, 21.0f, 22.0f, 15.0f, 18.0f, 23.0f, 26.0f, 61.0f, 70.0f, 41.0f, 46.0f, 53.0f, 58.0f, 20.0f, 22.0f, 26.0f, 28.0f, 60.0f, 66.0f, 35.0f, 38.0f, 43.0f, 46.0f, 38.0f, 40.0f, 44.0f, 46.0f, 102.0f, 108.0f, 59.0f, 62.0f, 67.0f, 70.0f}}},
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
  {{0, {1.0f, 2.0f, 3.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 0.0f, 2.0f, 2.0f, 6.0f, 8.0f, 5.0f, 6.0f, 9.0f, 10.0f, 6.0f, 6.0f, 8.0f, 8.0f, 24.0f, 26.0f, 17.0f, 18.0f, 21.0f, 22.0f, 15.0f, 18.0f, 23.0f, 26.0f, 61.0f, 70.0f, 41.0f, 46.0f, 53.0f, 58.0f, 20.0f, 22.0f, 26.0f, 28.0f, 60.0f, 66.0f, 35.0f, 38.0f, 43.0f, 46.0f, 38.0f, 40.0f, 44.0f, 46.0f, 102.0f, 108.0f, 59.0f, 62.0f, 67.0f, 70.0f}}},
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
  {{0, {1.0f, 2.0f, 3.0f, 4.0f}}, {1, {1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f}}, {2, {-1.0f, -2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 0.0f, 2.0f, 2.0f, 6.0f, 8.0f, 5.0f, 6.0f, 9.0f, 10.0f, 6.0f, 6.0f, 8.0f, 8.0f, 24.0f, 26.0f, 17.0f, 18.0f, 21.0f, 22.0f, 15.0f, 18.0f, 23.0f, 26.0f, 61.0f, 70.0f, 41.0f, 46.0f, 53.0f, 58.0f, 20.0f, 22.0f, 26.0f, 28.0f, 60.0f, 66.0f, 35.0f, 38.0f, 43.0f, 46.0f, 38.0f, 40.0f, 44.0f, 46.0f, 102.0f, 108.0f, 59.0f, 62.0f, 67.0f, 70.0f}}},
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
  {{0, {2, 4, 6, 8}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {0, 0, 4, 4, 12, 16, 10, 12, 18, 20, 12, 12, 16, 16, 48, 52, 34, 36, 42, 44, 30, 36, 46, 52, 122, 140, 82, 92, 106, 116, 40, 44, 52, 56, 120, 132, 70, 76, 86, 92, 76, 80, 88, 92, 204, 216, 118, 124, 134, 140}}}
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
  {{2, {-4, -8}}},
  // int -> QUANT8_ASYMM map
  {{0, {2, 4, 6, 8}}, {1, {2, 6, 10, 14, 18, 22, 26, 30, 34, 4, 8, 12, 16, 20, 24, 28, 32, 36}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {0, 0, 4, 4, 12, 16, 10, 12, 18, 20, 12, 12, 16, 16, 48, 52, 34, 36, 42, 44, 30, 36, 46, 52, 122, 140, 82, 92, 106, 116, 40, 44, 52, 56, 120, 132, 70, 76, 86, 92, 76, 80, 88, 92, 204, 216, 118, 124, 134, 140}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_2 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {300.0f, 500.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {500.0f, 800.0f, 3500.0f, 1500.0f, 1400.0f, 500.0f, 3500.0f, 3000.0f, 0.0f, 200.0f, 500.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_weight_as_input_2 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {300.0f, 500.0f}}, {1, {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f}}, {2, {-1000.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {500.0f, 800.0f, 3500.0f, 1500.0f, 1400.0f, 500.0f, 3500.0f, 3000.0f, 0.0f, 200.0f, 500.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_2 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {300.0f, 500.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {500.0f, 800.0f, 3500.0f, 1500.0f, 1400.0f, 500.0f, 3500.0f, 3000.0f, 0.0f, 200.0f, 500.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_weight_as_input_2 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {300.0f, 500.0f}}, {1, {9.0f, 5.0f, 6.0f, 9.0f, 8.0f, 5.0f, 3.0f, 1.0f, 4.0f}}, {2, {-1000.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {500.0f, 800.0f, 3500.0f, 1500.0f, 1400.0f, 500.0f, 3500.0f, 3000.0f, 0.0f, 200.0f, 500.0f, 0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_2 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {150, 250}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {75, 90, 225, 125, 120, 75, 225, 200, 50, 60, 75, 50}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_weight_as_input_2 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {-2000}}},
  // int -> QUANT8_ASYMM map
  {{0, {150, 250}}, {1, {164, 148, 152, 164, 160, 148, 140, 132, 144}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {75, 90, 225, 125, 120, 75, 225, 200, 50, 60, 75, 50}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_3 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {184.0f, 412.0f, 568.0f, 528.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_weight_as_input_3 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {184.0f, 412.0f, 568.0f, 528.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_3 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {184.0f, 412.0f, 568.0f, 528.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_weight_as_input_3 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {184.0f, 412.0f, 568.0f, 528.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_3 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {12, 26, 36, 33, 42, 84, 106, 90, 93, 170, 191, 153, 123, 210, 228, 172}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_weight_as_input_3 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0}}},
  // int -> QUANT8_ASYMM map
  {{0, {102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}, {1, {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {12, 26, 36, 33, 42, 84, 106, 90, 93, 170, 191, 153, 123, 210, 228, 172}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_4 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 22.0f, 59.0f, 101.0f, 114.0f, 83.0f, 52.0f, 184.0f, 412.0f, 568.0f, 528.0f, 344.0f, 237.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 879.0f, 597.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1431.0f, 856.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f, 1548.0f, 689.0f, 1534.0f, 2543.0f, 2729.0f, 2010.0f, 1103.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_weight_as_input_4 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 22.0f, 59.0f, 101.0f, 114.0f, 83.0f, 52.0f, 184.0f, 412.0f, 568.0f, 528.0f, 344.0f, 237.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 879.0f, 597.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1431.0f, 856.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f, 1548.0f, 689.0f, 1534.0f, 2543.0f, 2729.0f, 2010.0f, 1103.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_4 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 22.0f, 59.0f, 101.0f, 114.0f, 83.0f, 52.0f, 184.0f, 412.0f, 568.0f, 528.0f, 344.0f, 237.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 879.0f, 597.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1431.0f, 856.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f, 1548.0f, 689.0f, 1534.0f, 2543.0f, 2729.0f, 2010.0f, 1103.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_weight_as_input_4 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {5.0f, 22.0f, 59.0f, 101.0f, 114.0f, 83.0f, 52.0f, 184.0f, 412.0f, 568.0f, 528.0f, 344.0f, 237.0f, 678.0f, 1347.0f, 1689.0f, 1434.0f, 879.0f, 597.0f, 1494.0f, 2715.0f, 3057.0f, 2442.0f, 1431.0f, 856.0f, 1968.0f, 3352.0f, 3652.0f, 2760.0f, 1548.0f, 689.0f, 1534.0f, 2543.0f, 2729.0f, 2010.0f, 1103.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_4 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 114, 118, 122, 126, 130, 134, 138}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {80, 81, 82, 83, 84, 83, 82, 86, 93, 98, 96, 91, 87, 101, 122, 133, 125, 107, 99, 127, 165, 176, 156, 125, 107, 142, 185, 194, 166, 128, 102, 128, 159, 165, 143, 114}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_weight_as_input_4 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0}}},
  // int -> QUANT8_ASYMM map
  {{0, {14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 114, 118, 122, 126, 130, 134, 138}}, {1, {130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {80, 81, 82, 83, 84, 83, 82, 86, 93, 98, 96, 91, 87, 101, 122, 133, 125, 107, 99, 127, 165, 176, 156, 125, 107, 142, 185, 194, 166, 128, 102, 128, 159, 165, 143, 114}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_5 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {678.0f, 1347.0f, 1689.0f, 1494.0f, 2715.0f, 3057.0f, 1968.0f, 3352.0f, 3652.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_weight_as_input_5 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {678.0f, 1347.0f, 1689.0f, 1494.0f, 2715.0f, 3057.0f, 1968.0f, 3352.0f, 3652.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_5 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {678.0f, 1347.0f, 1689.0f, 1494.0f, 2715.0f, 3057.0f, 1968.0f, 3352.0f, 3652.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_relaxed_weight_as_input_5 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f, 19.0f, 20.0f, 21.0f, 22.0f, 23.0f, 24.0f, 25.0f, 26.0f, 27.0f, 28.0f, 29.0f, 30.0f, 31.0f, 32.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f, 18.0f}}, {2, {0.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {678.0f, 1347.0f, 1689.0f, 1494.0f, 2715.0f, 3057.0f, 1968.0f, 3352.0f, 3652.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_5 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {84, 117, 134, 125, 186, 203, 148, 218, 233}}}
}
}, // End of an example
};

std::vector<MixedTypedExample> examples_quant8_weight_as_input_5 = {
// Begin of an example
{
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0}}},
  // int -> QUANT8_ASYMM map
  {{0, {102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164}}, {1, {132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {84, 117, 134, 125, 186, 203, 148, 218, 233}}}
}
}, // End of an example
};

