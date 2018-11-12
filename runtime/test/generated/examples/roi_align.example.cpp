// clang-format off
// Generated file (from: roi_align.mod.py). Do not edit
std::vector<MixedTypedExample> examples_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.0f, 0.0f, 4.0f, 8.0f, 0.0f, 2.0f, 8.0f, 4.0f}}},
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
  {{0, {0.375f, 5.125f, -0.375f, 2.875f, -0.5f, -0.3125f, 3.1875f, 1.125f, 0.25f, 4.25f, 4.875f, 0.625f, -0.1875f, 1.125f, 0.9375f, -2.625f}}},
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
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.0f, 0.0f, 4.0f, 8.0f, 0.0f, 2.0f, 8.0f, 4.0f}}},
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
  {{0, {0.375f, 5.125f, -0.375f, 2.875f, -0.5f, -0.3125f, 3.1875f, 1.125f, 0.25f, 4.25f, 4.875f, 0.625f, -0.1875f, 1.125f, 0.9375f, -2.625f}}},
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
  {{1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.0f, 0.0f, 4.0f, 8.0f, 0.0f, 2.0f, 8.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {88, 124, 144, 108, 96, 120, 164, 132, 156, 120, 140, 100, 120, 168, 116, 148}}},
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
  {{0, {134, 210, 122, 174, 120, 123, 179, 146, 132, 196, 206, 138, 125, 146, 143, 86}}},
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
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.0f, 0.0f, 4.0f, 8.0f, 0.0f, 2.0f, 8.0f, 4.0f}}},
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
  {{0, {0.375f, 5.125f, -0.375f, 2.875f, -0.5f, -0.3125f, 3.1875f, 1.125f, 0.25f, 4.25f, 4.875f, 0.625f, -0.1875f, 1.125f, 0.9375f, -2.625f}}},
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
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.0f, 0.0f, 4.0f, 8.0f, 0.0f, 2.0f, 8.0f, 4.0f}}},
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
  {{0, {0.375f, 5.125f, -0.375f, 2.875f, -0.5f, -0.3125f, 3.1875f, 1.125f, 0.25f, 4.25f, 4.875f, 0.625f, -0.1875f, 1.125f, 0.9375f, -2.625f}}},
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
  {{1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.0f, 0.0f, 4.0f, 8.0f, 0.0f, 2.0f, 8.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {88, 124, 144, 108, 96, 120, 164, 132, 156, 120, 140, 100, 120, 168, 116, 148}}},
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
  {{0, {134, 210, 122, 174, 120, 123, 179, 146, 132, 196, 206, 138, 125, 146, 143, 86}}},
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
  {{0, {8.84f, 8.88f, 7.41f, 5.6f, 9.95f, 4.37f, 0.1f, 7.64f, 6.5f, 9.47f, 7.55f, 3.0f, 0.89f, 3.01f, 6.3f, 4.4f, 1.64f, 6.74f, 6.16f, 8.6f, 5.85f, 3.17f, 7.12f, 6.79f, 5.77f, 6.62f, 5.13f, 8.44f, 5.08f, 7.12f, 2.84f, 1.19f, 8.37f, 0.9f, 7.86f, 9.69f, 1.97f, 1.31f, 4.42f, 9.89f, 0.18f, 9.0f, 9.3f, 0.44f, 5.05f, 6.47f, 1.09f, 9.5f, 1.3f, 2.18f, 2.05f, 7.74f, 7.66f, 0.65f, 4.18f, 7.14f, 5.35f, 7.9f, 1.04f, 1.47f, 9.01f, 0.95f, 4.07f, 0.65f, 5.47f, 2.64f, 0.86f, 4.86f, 2.38f, 2.45f, 8.77f, 0.06f, 3.6f, 9.28f, 5.84f, 8.97f, 6.89f, 1.43f, 3.9f, 5.91f, 7.4f, 9.25f, 3.12f, 4.92f, 1.87f, 3.22f, 9.5f, 6.73f, 2.07f, 7.3f, 3.07f, 4.97f, 0.24f, 8.91f, 1.09f, 0.27f, 7.29f, 6.94f, 2.31f, 6.88f, 4.33f, 1.37f, 0.86f, 0.46f, 6.07f, 3.81f, 0.86f, 6.99f, 4.36f, 1.92f, 8.19f, 3.57f, 7.9f, 6.78f, 4.64f, 6.82f, 6.18f, 9.63f, 2.63f, 2.33f, 1.36f, 2.7f, 9.99f, 9.85f, 8.06f, 4.8f, 7.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 5.49125f, 4.73375f, 7.1f, 4.8275f, 5.84375f, 4.72125f, 4.7975f, 3.75f, 6.5925f, 5.4525f, 3.3625f, 4.899396f, 5.861696f, 4.941504f, 5.979741f, 3.182904f, 6.111551f, 5.141833f, 4.631891f, 3.903325f, 4.627793f, 5.53724f, 1.356019f, 4.845915f, 3.618338f, 3.301958f, 6.250566f, 2.930461f, 4.269676f, 3.642174f, 4.201423f, 5.008657f, 5.735293f, 7.426004f, 4.819665f, 4.518229f, 6.887344f, 2.952656f, 5.565781f, 3.952786f, 2.552812f, 5.191667f, 6.854167f, 3.92f, 6.5125f, 4.88625f, 5.497708f}}},
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
  {{0, {8.84f, 8.88f, 7.41f, 5.6f, 9.95f, 4.37f, 0.1f, 7.64f, 6.5f, 9.47f, 7.55f, 3.0f, 0.89f, 3.01f, 6.3f, 4.4f, 1.64f, 6.74f, 6.16f, 8.6f, 5.85f, 3.17f, 7.12f, 6.79f, 5.77f, 6.62f, 5.13f, 8.44f, 5.08f, 7.12f, 2.84f, 1.19f, 8.37f, 0.9f, 7.86f, 9.69f, 1.97f, 1.31f, 4.42f, 9.89f, 0.18f, 9.0f, 9.3f, 0.44f, 5.05f, 6.47f, 1.09f, 9.5f, 1.3f, 2.18f, 2.05f, 7.74f, 7.66f, 0.65f, 4.18f, 7.14f, 5.35f, 7.9f, 1.04f, 1.47f, 9.01f, 0.95f, 4.07f, 0.65f, 5.47f, 2.64f, 0.86f, 4.86f, 2.38f, 2.45f, 8.77f, 0.06f, 3.6f, 9.28f, 5.84f, 8.97f, 6.89f, 1.43f, 3.9f, 5.91f, 7.4f, 9.25f, 3.12f, 4.92f, 1.87f, 3.22f, 9.5f, 6.73f, 2.07f, 7.3f, 3.07f, 4.97f, 0.24f, 8.91f, 1.09f, 0.27f, 7.29f, 6.94f, 2.31f, 6.88f, 4.33f, 1.37f, 0.86f, 0.46f, 6.07f, 3.81f, 0.86f, 6.99f, 4.36f, 1.92f, 8.19f, 3.57f, 7.9f, 6.78f, 4.64f, 6.82f, 6.18f, 9.63f, 2.63f, 2.33f, 1.36f, 2.7f, 9.99f, 9.85f, 8.06f, 4.8f, 7.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 5.49125f, 4.73375f, 7.1f, 4.8275f, 5.84375f, 4.72125f, 4.7975f, 3.75f, 6.5925f, 5.4525f, 3.3625f, 4.899396f, 5.861696f, 4.941504f, 5.979741f, 3.182904f, 6.111551f, 5.141833f, 4.631891f, 3.903325f, 4.627793f, 5.53724f, 1.356019f, 4.845915f, 3.618338f, 3.301958f, 6.250566f, 2.930461f, 4.269676f, 3.642174f, 4.201423f, 5.008657f, 5.735293f, 7.426004f, 4.819665f, 4.518229f, 6.887344f, 2.952656f, 5.565781f, 3.952786f, 2.552812f, 5.191667f, 6.854167f, 3.92f, 6.5125f, 4.88625f, 5.497708f}}},
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
  {{1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {221, 222, 185, 140, 249, 109, 2, 191, 162, 237, 189, 75, 22, 75, 158, 110, 41, 168, 154, 215, 146, 79, 178, 170, 144, 166, 128, 211, 127, 178, 71, 30, 209, 22, 197, 242, 49, 33, 111, 247, 5, 225, 233, 11, 126, 162, 27, 238, 32, 55, 51, 194, 192, 16, 104, 178, 134, 198, 26, 37, 225, 24, 102, 16, 137, 66, 22, 122, 60, 61, 219, 2, 90, 232, 146, 224, 172, 36, 98, 148, 185, 231, 78, 123, 47, 80, 238, 168, 52, 183, 77, 124, 6, 223, 27, 7, 182, 174, 58, 172, 108, 34, 22, 12, 152, 95, 22, 175, 109, 48, 205, 89, 198, 170, 116, 171, 154, 241, 66, 58, 34, 68, 250, 246, 202, 120, 195, 136}}},
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
  {{0, {175, 186, 161, 237, 164, 197, 161, 164, 130, 221, 184, 118, 167, 198, 168, 201, 112, 206, 175, 158, 135, 158, 187, 53, 165, 126, 116, 210, 104, 147, 127, 144, 170, 194, 248, 164, 155, 230, 104, 188, 136, 92, 176, 229, 135, 218, 166, 186}}},
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
  {{0, {8.84f, 7.41f, 9.95f, 0.1f, 6.5f, 7.55f, 0.89f, 6.3f, 1.64f, 6.16f, 5.85f, 7.12f, 5.77f, 5.13f, 5.08f, 2.84f, 8.37f, 7.86f, 1.97f, 4.42f, 0.18f, 9.3f, 5.05f, 1.09f, 1.3f, 2.05f, 7.66f, 4.18f, 5.35f, 1.04f, 9.01f, 4.07f, 8.88f, 5.6f, 4.37f, 7.64f, 9.47f, 3.0f, 3.01f, 4.4f, 6.74f, 8.6f, 3.17f, 6.79f, 6.62f, 8.44f, 7.12f, 1.19f, 0.9f, 9.69f, 1.31f, 9.89f, 9.0f, 0.44f, 6.47f, 9.5f, 2.18f, 7.74f, 0.65f, 7.14f, 7.9f, 1.47f, 0.95f, 0.65f, 5.47f, 0.86f, 2.38f, 8.77f, 3.6f, 5.84f, 6.89f, 3.9f, 7.4f, 3.12f, 1.87f, 9.5f, 2.07f, 3.07f, 0.24f, 1.09f, 7.29f, 2.31f, 4.33f, 0.86f, 6.07f, 0.86f, 4.36f, 8.19f, 7.9f, 4.64f, 6.18f, 2.63f, 1.36f, 9.99f, 8.06f, 7.8f, 2.64f, 4.86f, 2.45f, 0.06f, 9.28f, 8.97f, 1.43f, 5.91f, 9.25f, 4.92f, 3.22f, 6.73f, 7.3f, 4.97f, 8.91f, 0.27f, 6.94f, 6.88f, 1.37f, 0.46f, 3.81f, 6.99f, 1.92f, 3.57f, 6.78f, 6.82f, 9.63f, 2.33f, 2.7f, 9.85f, 4.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 4.73375f, 4.8275f, 4.72125f, 3.75f, 5.4525f, 5.49125f, 7.1f, 5.84375f, 4.7975f, 6.5925f, 3.3625f, 4.899396f, 4.941504f, 3.182904f, 5.141833f, 3.903325f, 5.53724f, 5.861696f, 5.979741f, 6.111551f, 4.631891f, 4.627793f, 1.356019f, 4.845915f, 3.301958f, 2.930461f, 3.642174f, 5.008657f, 7.426004f, 3.618338f, 6.250566f, 4.269676f, 4.201423f, 5.735293f, 4.819665f, 4.518229f, 2.952656f, 3.952786f, 5.191667f, 3.92f, 4.88625f, 6.887344f, 5.565781f, 2.552812f, 6.854167f, 6.5125f, 5.497708f}}},
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
  {{0, {8.84f, 7.41f, 9.95f, 0.1f, 6.5f, 7.55f, 0.89f, 6.3f, 1.64f, 6.16f, 5.85f, 7.12f, 5.77f, 5.13f, 5.08f, 2.84f, 8.37f, 7.86f, 1.97f, 4.42f, 0.18f, 9.3f, 5.05f, 1.09f, 1.3f, 2.05f, 7.66f, 4.18f, 5.35f, 1.04f, 9.01f, 4.07f, 8.88f, 5.6f, 4.37f, 7.64f, 9.47f, 3.0f, 3.01f, 4.4f, 6.74f, 8.6f, 3.17f, 6.79f, 6.62f, 8.44f, 7.12f, 1.19f, 0.9f, 9.69f, 1.31f, 9.89f, 9.0f, 0.44f, 6.47f, 9.5f, 2.18f, 7.74f, 0.65f, 7.14f, 7.9f, 1.47f, 0.95f, 0.65f, 5.47f, 0.86f, 2.38f, 8.77f, 3.6f, 5.84f, 6.89f, 3.9f, 7.4f, 3.12f, 1.87f, 9.5f, 2.07f, 3.07f, 0.24f, 1.09f, 7.29f, 2.31f, 4.33f, 0.86f, 6.07f, 0.86f, 4.36f, 8.19f, 7.9f, 4.64f, 6.18f, 2.63f, 1.36f, 9.99f, 8.06f, 7.8f, 2.64f, 4.86f, 2.45f, 0.06f, 9.28f, 8.97f, 1.43f, 5.91f, 9.25f, 4.92f, 3.22f, 6.73f, 7.3f, 4.97f, 8.91f, 0.27f, 6.94f, 6.88f, 1.37f, 0.46f, 3.81f, 6.99f, 1.92f, 3.57f, 6.78f, 6.82f, 9.63f, 2.33f, 2.7f, 9.85f, 4.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 4.73375f, 4.8275f, 4.72125f, 3.75f, 5.4525f, 5.49125f, 7.1f, 5.84375f, 4.7975f, 6.5925f, 3.3625f, 4.899396f, 4.941504f, 3.182904f, 5.141833f, 3.903325f, 5.53724f, 5.861696f, 5.979741f, 6.111551f, 4.631891f, 4.627793f, 1.356019f, 4.845915f, 3.301958f, 2.930461f, 3.642174f, 5.008657f, 7.426004f, 3.618338f, 6.250566f, 4.269676f, 4.201423f, 5.735293f, 4.819665f, 4.518229f, 2.952656f, 3.952786f, 5.191667f, 3.92f, 4.88625f, 6.887344f, 5.565781f, 2.552812f, 6.854167f, 6.5125f, 5.497708f}}},
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
  {{1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {221, 185, 249, 2, 162, 189, 22, 158, 41, 154, 146, 178, 144, 128, 127, 71, 209, 197, 49, 111, 5, 233, 126, 27, 32, 51, 192, 104, 134, 26, 225, 102, 222, 140, 109, 191, 237, 75, 75, 110, 168, 215, 79, 170, 166, 211, 178, 30, 22, 242, 33, 247, 225, 11, 162, 238, 55, 194, 16, 178, 198, 37, 24, 16, 137, 22, 60, 219, 90, 146, 172, 98, 185, 78, 47, 238, 52, 77, 6, 27, 182, 58, 108, 22, 152, 22, 109, 205, 198, 116, 154, 66, 34, 250, 202, 195, 66, 122, 61, 2, 232, 224, 36, 148, 231, 123, 80, 168, 183, 124, 223, 7, 174, 172, 34, 12, 95, 175, 48, 89, 170, 171, 241, 58, 68, 246, 120, 136}}},
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
  {{0, {175, 161, 164, 161, 130, 184, 186, 237, 197, 164, 221, 118, 167, 168, 112, 175, 135, 187, 198, 201, 206, 158, 158, 53, 165, 116, 104, 127, 170, 248, 126, 210, 147, 144, 194, 164, 155, 104, 136, 176, 135, 166, 230, 188, 92, 229, 218, 186}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nhwc_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 8.88f, 7.41f, 5.6f, 9.95f, 4.37f, 0.1f, 7.64f, 6.5f, 9.47f, 7.55f, 3.0f, 0.89f, 3.01f, 6.3f, 4.4f, 1.64f, 6.74f, 6.16f, 8.6f, 5.85f, 3.17f, 7.12f, 6.79f, 5.77f, 6.62f, 5.13f, 8.44f, 5.08f, 7.12f, 2.84f, 1.19f, 8.37f, 0.9f, 7.86f, 9.69f, 1.97f, 1.31f, 4.42f, 9.89f, 0.18f, 9.0f, 9.3f, 0.44f, 5.05f, 6.47f, 1.09f, 9.5f, 1.3f, 2.18f, 2.05f, 7.74f, 7.66f, 0.65f, 4.18f, 7.14f, 5.35f, 7.9f, 1.04f, 1.47f, 9.01f, 0.95f, 4.07f, 0.65f, 5.47f, 2.64f, 0.86f, 4.86f, 2.38f, 2.45f, 8.77f, 0.06f, 3.6f, 9.28f, 5.84f, 8.97f, 6.89f, 1.43f, 3.9f, 5.91f, 7.4f, 9.25f, 3.12f, 4.92f, 1.87f, 3.22f, 9.5f, 6.73f, 2.07f, 7.3f, 3.07f, 4.97f, 0.24f, 8.91f, 1.09f, 0.27f, 7.29f, 6.94f, 2.31f, 6.88f, 4.33f, 1.37f, 0.86f, 0.46f, 6.07f, 3.81f, 0.86f, 6.99f, 4.36f, 1.92f, 8.19f, 3.57f, 7.9f, 6.78f, 4.64f, 6.82f, 6.18f, 9.63f, 2.63f, 2.33f, 1.36f, 2.7f, 9.99f, 9.85f, 8.06f, 4.8f, 7.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 5.49125f, 4.73375f, 7.1f, 4.8275f, 5.84375f, 4.72125f, 4.7975f, 3.75f, 6.5925f, 5.4525f, 3.3625f, 4.869884f, 5.908148f, 4.941701f, 5.955718f, 3.113403f, 6.341898f, 5.156389f, 4.604016f, 3.881782f, 4.616123f, 5.690694f, 1.237153f, 5.028047f, 3.560944f, 3.157656f, 6.395469f, 2.896243f, 4.336576f, 3.563021f, 4.057767f, 5.053437f, 6.028906f, 7.396966f, 4.668906f, 4.385f, 6.905f, 2.815f, 5.5025f, 4.161667f, 1.829167f, 5.191667f, 6.854167f, 3.92f, 6.5125f, 5.106667f, 5.6125f}}},
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

std::vector<MixedTypedExample> examples_nhwc_relaxed_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 8.88f, 7.41f, 5.6f, 9.95f, 4.37f, 0.1f, 7.64f, 6.5f, 9.47f, 7.55f, 3.0f, 0.89f, 3.01f, 6.3f, 4.4f, 1.64f, 6.74f, 6.16f, 8.6f, 5.85f, 3.17f, 7.12f, 6.79f, 5.77f, 6.62f, 5.13f, 8.44f, 5.08f, 7.12f, 2.84f, 1.19f, 8.37f, 0.9f, 7.86f, 9.69f, 1.97f, 1.31f, 4.42f, 9.89f, 0.18f, 9.0f, 9.3f, 0.44f, 5.05f, 6.47f, 1.09f, 9.5f, 1.3f, 2.18f, 2.05f, 7.74f, 7.66f, 0.65f, 4.18f, 7.14f, 5.35f, 7.9f, 1.04f, 1.47f, 9.01f, 0.95f, 4.07f, 0.65f, 5.47f, 2.64f, 0.86f, 4.86f, 2.38f, 2.45f, 8.77f, 0.06f, 3.6f, 9.28f, 5.84f, 8.97f, 6.89f, 1.43f, 3.9f, 5.91f, 7.4f, 9.25f, 3.12f, 4.92f, 1.87f, 3.22f, 9.5f, 6.73f, 2.07f, 7.3f, 3.07f, 4.97f, 0.24f, 8.91f, 1.09f, 0.27f, 7.29f, 6.94f, 2.31f, 6.88f, 4.33f, 1.37f, 0.86f, 0.46f, 6.07f, 3.81f, 0.86f, 6.99f, 4.36f, 1.92f, 8.19f, 3.57f, 7.9f, 6.78f, 4.64f, 6.82f, 6.18f, 9.63f, 2.63f, 2.33f, 1.36f, 2.7f, 9.99f, 9.85f, 8.06f, 4.8f, 7.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 5.49125f, 4.73375f, 7.1f, 4.8275f, 5.84375f, 4.72125f, 4.7975f, 3.75f, 6.5925f, 5.4525f, 3.3625f, 4.869884f, 5.908148f, 4.941701f, 5.955718f, 3.113403f, 6.341898f, 5.156389f, 4.604016f, 3.881782f, 4.616123f, 5.690694f, 1.237153f, 5.028047f, 3.560944f, 3.157656f, 6.395469f, 2.896243f, 4.336576f, 3.563021f, 4.057767f, 5.053437f, 6.028906f, 7.396966f, 4.668906f, 4.385f, 6.905f, 2.815f, 5.5025f, 4.161667f, 1.829167f, 5.191667f, 6.854167f, 3.92f, 6.5125f, 5.106667f, 5.6125f}}},
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

std::vector<MixedTypedExample> examples_nhwc_quant8_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {221, 222, 185, 140, 249, 109, 2, 191, 162, 237, 189, 75, 22, 75, 158, 110, 41, 168, 154, 215, 146, 79, 178, 170, 144, 166, 128, 211, 127, 178, 71, 30, 209, 22, 197, 242, 49, 33, 111, 247, 5, 225, 233, 11, 126, 162, 27, 238, 32, 55, 51, 194, 192, 16, 104, 178, 134, 198, 26, 37, 225, 24, 102, 16, 137, 66, 22, 122, 60, 61, 219, 2, 90, 232, 146, 224, 172, 36, 98, 148, 185, 231, 78, 123, 47, 80, 238, 168, 52, 183, 77, 124, 6, 223, 27, 7, 182, 174, 58, 172, 108, 34, 22, 12, 152, 95, 22, 175, 109, 48, 205, 89, 198, 170, 116, 171, 154, 241, 66, 58, 34, 68, 250, 246, 202, 120, 195, 136}}},
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
  {{0, {175, 186, 161, 237, 164, 197, 161, 164, 130, 221, 184, 118, 166, 199, 168, 201, 110, 213, 175, 157, 134, 158, 192, 50, 171, 124, 111, 215, 103, 149, 124, 140, 172, 203, 247, 159, 150, 231, 100, 186, 143, 69, 176, 229, 135, 218, 173, 190}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_nchw_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 7.41f, 9.95f, 0.1f, 6.5f, 7.55f, 0.89f, 6.3f, 1.64f, 6.16f, 5.85f, 7.12f, 5.77f, 5.13f, 5.08f, 2.84f, 8.37f, 7.86f, 1.97f, 4.42f, 0.18f, 9.3f, 5.05f, 1.09f, 1.3f, 2.05f, 7.66f, 4.18f, 5.35f, 1.04f, 9.01f, 4.07f, 8.88f, 5.6f, 4.37f, 7.64f, 9.47f, 3.0f, 3.01f, 4.4f, 6.74f, 8.6f, 3.17f, 6.79f, 6.62f, 8.44f, 7.12f, 1.19f, 0.9f, 9.69f, 1.31f, 9.89f, 9.0f, 0.44f, 6.47f, 9.5f, 2.18f, 7.74f, 0.65f, 7.14f, 7.9f, 1.47f, 0.95f, 0.65f, 5.47f, 0.86f, 2.38f, 8.77f, 3.6f, 5.84f, 6.89f, 3.9f, 7.4f, 3.12f, 1.87f, 9.5f, 2.07f, 3.07f, 0.24f, 1.09f, 7.29f, 2.31f, 4.33f, 0.86f, 6.07f, 0.86f, 4.36f, 8.19f, 7.9f, 4.64f, 6.18f, 2.63f, 1.36f, 9.99f, 8.06f, 7.8f, 2.64f, 4.86f, 2.45f, 0.06f, 9.28f, 8.97f, 1.43f, 5.91f, 9.25f, 4.92f, 3.22f, 6.73f, 7.3f, 4.97f, 8.91f, 0.27f, 6.94f, 6.88f, 1.37f, 0.46f, 3.81f, 6.99f, 1.92f, 3.57f, 6.78f, 6.82f, 9.63f, 2.33f, 2.7f, 9.85f, 4.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 4.73375f, 4.8275f, 4.72125f, 3.75f, 5.4525f, 5.49125f, 7.1f, 5.84375f, 4.7975f, 6.5925f, 3.3625f, 4.869884f, 4.941701f, 3.113403f, 5.156389f, 3.881782f, 5.690694f, 5.908148f, 5.955718f, 6.341898f, 4.604016f, 4.616123f, 1.237153f, 5.028047f, 3.157656f, 2.896243f, 3.563021f, 5.053437f, 7.396966f, 3.560944f, 6.395469f, 4.336576f, 4.057767f, 6.028906f, 4.668906f, 4.385f, 2.815f, 4.161667f, 5.191667f, 3.92f, 5.106667f, 6.905f, 5.5025f, 1.829167f, 6.854167f, 6.5125f, 5.6125f}}},
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

std::vector<MixedTypedExample> examples_nchw_relaxed_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 7.41f, 9.95f, 0.1f, 6.5f, 7.55f, 0.89f, 6.3f, 1.64f, 6.16f, 5.85f, 7.12f, 5.77f, 5.13f, 5.08f, 2.84f, 8.37f, 7.86f, 1.97f, 4.42f, 0.18f, 9.3f, 5.05f, 1.09f, 1.3f, 2.05f, 7.66f, 4.18f, 5.35f, 1.04f, 9.01f, 4.07f, 8.88f, 5.6f, 4.37f, 7.64f, 9.47f, 3.0f, 3.01f, 4.4f, 6.74f, 8.6f, 3.17f, 6.79f, 6.62f, 8.44f, 7.12f, 1.19f, 0.9f, 9.69f, 1.31f, 9.89f, 9.0f, 0.44f, 6.47f, 9.5f, 2.18f, 7.74f, 0.65f, 7.14f, 7.9f, 1.47f, 0.95f, 0.65f, 5.47f, 0.86f, 2.38f, 8.77f, 3.6f, 5.84f, 6.89f, 3.9f, 7.4f, 3.12f, 1.87f, 9.5f, 2.07f, 3.07f, 0.24f, 1.09f, 7.29f, 2.31f, 4.33f, 0.86f, 6.07f, 0.86f, 4.36f, 8.19f, 7.9f, 4.64f, 6.18f, 2.63f, 1.36f, 9.99f, 8.06f, 7.8f, 2.64f, 4.86f, 2.45f, 0.06f, 9.28f, 8.97f, 1.43f, 5.91f, 9.25f, 4.92f, 3.22f, 6.73f, 7.3f, 4.97f, 8.91f, 0.27f, 6.94f, 6.88f, 1.37f, 0.46f, 3.81f, 6.99f, 1.92f, 3.57f, 6.78f, 6.82f, 9.63f, 2.33f, 2.7f, 9.85f, 4.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
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
  {{0, {5.15f, 4.73375f, 4.8275f, 4.72125f, 3.75f, 5.4525f, 5.49125f, 7.1f, 5.84375f, 4.7975f, 6.5925f, 3.3625f, 4.869884f, 4.941701f, 3.113403f, 5.156389f, 3.881782f, 5.690694f, 5.908148f, 5.955718f, 6.341898f, 4.604016f, 4.616123f, 1.237153f, 5.028047f, 3.157656f, 2.896243f, 3.563021f, 5.053437f, 7.396966f, 3.560944f, 6.395469f, 4.336576f, 4.057767f, 6.028906f, 4.668906f, 4.385f, 2.815f, 4.161667f, 5.191667f, 3.92f, 5.106667f, 6.905f, 5.5025f, 1.829167f, 6.854167f, 6.5125f, 5.6125f}}},
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

std::vector<MixedTypedExample> examples_nchw_quant8_3 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 0.0f, 4.0f, 4.0f, 32.0f, 16.0f, 1.0f, 7.0f, 1.0f, 29.0f, 15.0f, 1.0f, 1.0f, 7.0f, 9.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {221, 185, 249, 2, 162, 189, 22, 158, 41, 154, 146, 178, 144, 128, 127, 71, 209, 197, 49, 111, 5, 233, 126, 27, 32, 51, 192, 104, 134, 26, 225, 102, 222, 140, 109, 191, 237, 75, 75, 110, 168, 215, 79, 170, 166, 211, 178, 30, 22, 242, 33, 247, 225, 11, 162, 238, 55, 194, 16, 178, 198, 37, 24, 16, 137, 22, 60, 219, 90, 146, 172, 98, 185, 78, 47, 238, 52, 77, 6, 27, 182, 58, 108, 22, 152, 22, 109, 205, 198, 116, 154, 66, 34, 250, 202, 195, 66, 122, 61, 2, 232, 224, 36, 148, 231, 123, 80, 168, 183, 124, 223, 7, 174, 172, 34, 12, 95, 175, 48, 89, 170, 171, 241, 58, 68, 246, 120, 136}}},
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
  {{0, {175, 161, 164, 161, 130, 184, 186, 237, 197, 164, 221, 118, 166, 168, 110, 175, 134, 192, 199, 201, 213, 157, 158, 50, 171, 111, 103, 124, 172, 247, 124, 215, 149, 140, 203, 159, 150, 100, 143, 176, 135, 173, 231, 186, 69, 229, 218, 190}}},
  // int -> QUANT16_ASYMM map
  {}
}
},
}, // End of an example
};

