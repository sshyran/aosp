// clang-format off
// Generated file (from: heatmap_max_keypoint.mod.py). Do not edit
std::vector<MixedTypedExample> examples_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, 10.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -56.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -57.827329175f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f, 8.0f, 3.0f, 15.0f, 13.0f, 6.0f, 5.0f, 19.0f, 12.0f, 5.0f, 2.0f, 10.0f, 20.0f, 5.0f, 2.0f, 10.0f, 20.0f}}},
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
  {{0, {8.224462f, 8.537316f, 9.071493f, 11.73f, 9.625f, 10.005f, 8.875f, 9.5625f, 7.1875f, 17.375f, 5.875f, 10.0f, 9.569672f, 2.0f, 10.689667f, 8.125f, 8.75f, 9.0f}}},
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
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, 10.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -56.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -57.827329175f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f, 8.0f, 3.0f, 15.0f, 13.0f, 6.0f, 5.0f, 19.0f, 12.0f, 5.0f, 2.0f, 10.0f, 20.0f, 5.0f, 2.0f, 10.0f, 20.0f}}},
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
  {{0, {8.224462f, 8.537316f, 9.071493f, 11.73f, 9.625f, 10.005f, 8.875f, 9.5625f, 7.1875f, 17.375f, 5.875f, 10.0f, 9.569672f, 2.0f, 10.689667f, 8.125f, 8.75f, 9.0f}}},
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

std::vector<MixedTypedExample> examples_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, 10.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -56.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -57.827329175f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f, 8.0f, 3.0f, 15.0f, 13.0f, 6.0f, 5.0f, 19.0f, 12.0f, 5.0f, 2.0f, 10.0f, 20.0f, 5.0f, 2.0f, 10.0f, 20.0f}}},
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
  {{0, {8.224462f, 8.537316f, 9.071493f, 11.73f, 9.625f, 10.005f, 8.875f, 9.5625f, 7.1875f, 17.375f, 5.875f, 10.0f, 9.569672f, 2.0f, 10.689667f, 8.125f, 8.75f, 9.0f}}},
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
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -1.0f, 4.0f, 10.0f, -8.0f, -2.0f, 4.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -56.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f, -10.0f, -57.827329175f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 2.0f, -3.0f, 5.0f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f, 8.0f, 3.0f, 15.0f, 13.0f, 6.0f, 5.0f, 19.0f, 12.0f, 5.0f, 2.0f, 10.0f, 20.0f, 5.0f, 2.0f, 10.0f, 20.0f}}},
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
  {{0, {8.224462f, 8.537316f, 9.071493f, 11.73f, 9.625f, 10.005f, 8.875f, 9.5625f, 7.1875f, 17.375f, 5.875f, 10.0f, 9.569672f, 2.0f, 10.689667f, 8.125f, 8.75f, 9.0f}}},
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

std::vector<MixedTypedExample> examples_nhwc_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.19f, 0.61f, 0.49f, 0.01f, 0.98f, 0.65f, 0.64f, 0.7f, 0.76f, 0.55f, 0.83f, 0.19f, 0.46f, 0.03f, 0.67f, 0.71f, 0.17f, 0.23f, 0.89f, 0.08f, 0.96f, 0.65f, 0.52f, 0.4f, 0.36f, 0.8f, 0.55f, 0.89f, 0.58f, 0.29f, 0.27f, 0.69f, 0.66f, 0.06f, 0.51f, 0.26f, 0.96f, 0.38f, 0.41f, 0.89f, 0.88f, 0.46f, 0.96f, 0.73f, 0.54f, 0.64f, 0.84f, 0.74f, 0.51f, 0.41f, 0.13f, 0.19f, 0.52f, 0.21f, 0.5f, 0.75f, 0.89f, 0.89f, 0.2f, 0.58f, 0.7f, 0.13f, 0.29f, 0.39f, 0.91f, 0.06f, 0.93f, 0.34f, 0.8f, 0.87f, 0.59f, 0.67f, 0.57f, 0.85f, 0.24f, 0.25f, 0.76f, 0.34f, 0.37f, 0.11f, 0.0f, 0.29f, 0.3f, 0.77f, 0.34f, 0.57f, 0.48f, 0.76f, 0.93f, 0.18f, 0.64f, 0.12f, 0.67f, 0.47f, 0.56f, 0.5f, 0.48f, 0.99f, 0.46f, 0.66f, 0.98f, 0.06f, 0.1f, 0.66f, 0.66f, 0.91f, 0.67f, 0.23f, 0.4f, 0.37f, 0.17f, 0.35f, 0.48f, 0.98f, 0.47f, 0.49f, 0.56f, 0.18f, 0.75f, 0.29f, 0.04f, 0.23f, 0.42f, 0.55f, 0.38f, 0.07f, 0.71f, 0.8f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f}}},
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
  {{0, {7.227723f, 8.090278f, 8.523379f, 8.36558f, 4.25f, 17.75f, 12.589181f, 10.122508f, 1.02021f, 0.890556f, 1.00711f, 0.945129f, 12.431603f, 4.625f, 4.625f, 26.375f, 8.934225f, 9.239437f, 7.375f, 9.625f, 0.987798f, 1.07382f, 0.93f, 0.8f}}},
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
  {{0, {0.19f, 0.61f, 0.49f, 0.01f, 0.98f, 0.65f, 0.64f, 0.7f, 0.76f, 0.55f, 0.83f, 0.19f, 0.46f, 0.03f, 0.67f, 0.71f, 0.17f, 0.23f, 0.89f, 0.08f, 0.96f, 0.65f, 0.52f, 0.4f, 0.36f, 0.8f, 0.55f, 0.89f, 0.58f, 0.29f, 0.27f, 0.69f, 0.66f, 0.06f, 0.51f, 0.26f, 0.96f, 0.38f, 0.41f, 0.89f, 0.88f, 0.46f, 0.96f, 0.73f, 0.54f, 0.64f, 0.84f, 0.74f, 0.51f, 0.41f, 0.13f, 0.19f, 0.52f, 0.21f, 0.5f, 0.75f, 0.89f, 0.89f, 0.2f, 0.58f, 0.7f, 0.13f, 0.29f, 0.39f, 0.91f, 0.06f, 0.93f, 0.34f, 0.8f, 0.87f, 0.59f, 0.67f, 0.57f, 0.85f, 0.24f, 0.25f, 0.76f, 0.34f, 0.37f, 0.11f, 0.0f, 0.29f, 0.3f, 0.77f, 0.34f, 0.57f, 0.48f, 0.76f, 0.93f, 0.18f, 0.64f, 0.12f, 0.67f, 0.47f, 0.56f, 0.5f, 0.48f, 0.99f, 0.46f, 0.66f, 0.98f, 0.06f, 0.1f, 0.66f, 0.66f, 0.91f, 0.67f, 0.23f, 0.4f, 0.37f, 0.17f, 0.35f, 0.48f, 0.98f, 0.47f, 0.49f, 0.56f, 0.18f, 0.75f, 0.29f, 0.04f, 0.23f, 0.42f, 0.55f, 0.38f, 0.07f, 0.71f, 0.8f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f}}},
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
  {{0, {7.227723f, 8.090278f, 8.523379f, 8.36558f, 4.25f, 17.75f, 12.589181f, 10.122508f, 1.02021f, 0.890556f, 1.00711f, 0.945129f, 12.431603f, 4.625f, 4.625f, 26.375f, 8.934225f, 9.239437f, 7.375f, 9.625f, 0.987798f, 1.07382f, 0.93f, 0.8f}}},
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

std::vector<MixedTypedExample> examples_nchw_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.19f, 0.98f, 0.76f, 0.46f, 0.17f, 0.96f, 0.36f, 0.58f, 0.66f, 0.96f, 0.88f, 0.54f, 0.51f, 0.52f, 0.89f, 0.7f, 0.61f, 0.65f, 0.55f, 0.03f, 0.23f, 0.65f, 0.8f, 0.29f, 0.06f, 0.38f, 0.46f, 0.64f, 0.41f, 0.21f, 0.89f, 0.13f, 0.49f, 0.64f, 0.83f, 0.67f, 0.89f, 0.52f, 0.55f, 0.27f, 0.51f, 0.41f, 0.96f, 0.84f, 0.13f, 0.5f, 0.2f, 0.29f, 0.01f, 0.7f, 0.19f, 0.71f, 0.08f, 0.4f, 0.89f, 0.69f, 0.26f, 0.89f, 0.73f, 0.74f, 0.19f, 0.75f, 0.58f, 0.39f, 0.91f, 0.8f, 0.57f, 0.76f, 0.0f, 0.34f, 0.93f, 0.67f, 0.48f, 0.98f, 0.66f, 0.4f, 0.48f, 0.56f, 0.04f, 0.38f, 0.06f, 0.87f, 0.85f, 0.34f, 0.29f, 0.57f, 0.18f, 0.47f, 0.99f, 0.06f, 0.91f, 0.37f, 0.98f, 0.18f, 0.23f, 0.07f, 0.93f, 0.59f, 0.24f, 0.37f, 0.3f, 0.48f, 0.64f, 0.56f, 0.46f, 0.1f, 0.67f, 0.17f, 0.47f, 0.75f, 0.42f, 0.71f, 0.34f, 0.67f, 0.25f, 0.11f, 0.77f, 0.76f, 0.12f, 0.5f, 0.66f, 0.66f, 0.23f, 0.35f, 0.49f, 0.29f, 0.55f, 0.8f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f}}},
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
  {{0, {7.227723f, 8.090278f, 8.523379f, 8.36558f, 4.25f, 17.75f, 12.589181f, 10.122508f, 1.02021f, 0.890556f, 1.00711f, 0.945129f, 12.431603f, 4.625f, 4.625f, 26.375f, 8.934225f, 9.239437f, 7.375f, 9.625f, 0.987798f, 1.07382f, 0.93f, 0.8f}}},
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
  {{0, {0.19f, 0.98f, 0.76f, 0.46f, 0.17f, 0.96f, 0.36f, 0.58f, 0.66f, 0.96f, 0.88f, 0.54f, 0.51f, 0.52f, 0.89f, 0.7f, 0.61f, 0.65f, 0.55f, 0.03f, 0.23f, 0.65f, 0.8f, 0.29f, 0.06f, 0.38f, 0.46f, 0.64f, 0.41f, 0.21f, 0.89f, 0.13f, 0.49f, 0.64f, 0.83f, 0.67f, 0.89f, 0.52f, 0.55f, 0.27f, 0.51f, 0.41f, 0.96f, 0.84f, 0.13f, 0.5f, 0.2f, 0.29f, 0.01f, 0.7f, 0.19f, 0.71f, 0.08f, 0.4f, 0.89f, 0.69f, 0.26f, 0.89f, 0.73f, 0.74f, 0.19f, 0.75f, 0.58f, 0.39f, 0.91f, 0.8f, 0.57f, 0.76f, 0.0f, 0.34f, 0.93f, 0.67f, 0.48f, 0.98f, 0.66f, 0.4f, 0.48f, 0.56f, 0.04f, 0.38f, 0.06f, 0.87f, 0.85f, 0.34f, 0.29f, 0.57f, 0.18f, 0.47f, 0.99f, 0.06f, 0.91f, 0.37f, 0.98f, 0.18f, 0.23f, 0.07f, 0.93f, 0.59f, 0.24f, 0.37f, 0.3f, 0.48f, 0.64f, 0.56f, 0.46f, 0.1f, 0.67f, 0.17f, 0.47f, 0.75f, 0.42f, 0.71f, 0.34f, 0.67f, 0.25f, 0.11f, 0.77f, 0.76f, 0.12f, 0.5f, 0.66f, 0.66f, 0.23f, 0.35f, 0.49f, 0.29f, 0.55f, 0.8f}}, {1, {5.0f, 2.0f, 10.0f, 20.0f, 1.0f, 7.0f, 30.0f, 10.0f}}},
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
  {{0, {7.227723f, 8.090278f, 8.523379f, 8.36558f, 4.25f, 17.75f, 12.589181f, 10.122508f, 1.02021f, 0.890556f, 1.00711f, 0.945129f, 12.431603f, 4.625f, 4.625f, 26.375f, 8.934225f, 9.239437f, 7.375f, 9.625f, 0.987798f, 1.07382f, 0.93f, 0.8f}}},
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

