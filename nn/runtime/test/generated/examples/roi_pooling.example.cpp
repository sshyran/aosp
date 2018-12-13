// clang-format off
// Generated file (from: roi_pooling.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples_nhwc() {
static std::vector<MixedTypedExample> examples_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 6.0f, 6.0f, 2.0f, 0.0f, 4.0f, 6.0f, 0.0f, 2.0f, 6.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-2.0f, 9.0f, -2.0f, 3.0f, -1.0f, 9.0f, 10.0f, 5.0f, -1.0f, 9.0f, 10.0f, 3.0f, -2.0f, 9.0f, 7.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nhwc;
};

std::vector<MixedTypedExample>& get_examples_nhwc_relaxed() {
static std::vector<MixedTypedExample> examples_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 6.0f, 6.0f, 2.0f, 0.0f, 4.0f, 6.0f, 0.0f, 2.0f, 6.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-2.0f, 9.0f, -2.0f, 3.0f, -1.0f, 9.0f, 10.0f, 5.0f, -1.0f, 9.0f, 10.0f, 3.0f, -2.0f, 9.0f, 7.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nhwc_relaxed;
};

std::vector<MixedTypedExample>& get_examples_nhwc_quant8() {
static std::vector<MixedTypedExample> examples_nhwc_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 6.0f, 6.0f, 2.0f, 0.0f, 4.0f, 6.0f, 0.0f, 2.0f, 6.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {88, 124, 144, 108, 96, 120, 164, 132, 156, 120, 140, 100, 120, 168, 116, 148}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {120, 164, 120, 140, 124, 164, 168, 148, 124, 164, 168, 140, 120, 164, 156, 140}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nhwc_quant8;
};

std::vector<MixedTypedExample>& get_examples_nchw() {
static std::vector<MixedTypedExample> examples_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 6.0f, 6.0f, 2.0f, 0.0f, 4.0f, 6.0f, 0.0f, 2.0f, 6.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-2.0f, 9.0f, -2.0f, 3.0f, -1.0f, 9.0f, 10.0f, 5.0f, -1.0f, 9.0f, 10.0f, 3.0f, -2.0f, 9.0f, 7.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nchw;
};

std::vector<MixedTypedExample>& get_examples_nchw_relaxed() {
static std::vector<MixedTypedExample> examples_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-10.0f, -1.0f, 4.0f, -5.0f, -8.0f, -2.0f, 9.0f, 1.0f, 7.0f, -2.0f, 3.0f, -7.0f, -2.0f, 10.0f, -3.0f, 5.0f}}, {1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 6.0f, 6.0f, 2.0f, 0.0f, 4.0f, 6.0f, 0.0f, 2.0f, 6.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {-2.0f, 9.0f, -2.0f, 3.0f, -1.0f, 9.0f, 10.0f, 5.0f, -1.0f, 9.0f, 10.0f, 3.0f, -2.0f, 9.0f, 7.0f, 3.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nchw_relaxed;
};

std::vector<MixedTypedExample>& get_examples_nchw_quant8() {
static std::vector<MixedTypedExample> examples_nchw_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {2.0f, 2.0f, 4.0f, 4.0f, 0.0f, 0.0f, 6.0f, 6.0f, 2.0f, 0.0f, 4.0f, 6.0f, 0.0f, 2.0f, 6.0f, 4.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {88, 124, 144, 108, 96, 120, 164, 132, 156, 120, 140, 100, 120, 168, 116, 148}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {120, 164, 120, 140, 124, 164, 168, 148, 124, 164, 168, 140, 120, 164, 156, 140}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nchw_quant8;
};

std::vector<MixedTypedExample>& get_examples_nhwc_2() {
static std::vector<MixedTypedExample> examples_nhwc_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 8.88f, 7.41f, 5.6f, 9.95f, 4.37f, 0.1f, 7.64f, 6.5f, 9.47f, 7.55f, 3.0f, 0.89f, 3.01f, 6.3f, 4.4f, 1.64f, 6.74f, 6.16f, 8.6f, 5.85f, 3.17f, 7.12f, 6.79f, 5.77f, 6.62f, 5.13f, 8.44f, 5.08f, 7.12f, 2.84f, 1.19f, 8.37f, 0.9f, 7.86f, 9.69f, 1.97f, 1.31f, 4.42f, 9.89f, 0.18f, 9.0f, 9.3f, 0.44f, 5.05f, 6.47f, 1.09f, 9.5f, 1.3f, 2.18f, 2.05f, 7.74f, 7.66f, 0.65f, 4.18f, 7.14f, 5.35f, 7.9f, 1.04f, 1.47f, 9.01f, 0.95f, 4.07f, 0.65f, 5.47f, 2.64f, 0.86f, 4.86f, 2.38f, 2.45f, 8.77f, 0.06f, 3.6f, 9.28f, 5.84f, 8.97f, 6.89f, 1.43f, 3.9f, 5.91f, 7.4f, 9.25f, 3.12f, 4.92f, 1.87f, 3.22f, 9.5f, 6.73f, 2.07f, 7.3f, 3.07f, 4.97f, 0.24f, 8.91f, 1.09f, 0.27f, 7.29f, 6.94f, 2.31f, 6.88f, 4.33f, 1.37f, 0.86f, 0.46f, 6.07f, 3.81f, 0.86f, 6.99f, 4.36f, 1.92f, 8.19f, 3.57f, 7.9f, 6.78f, 4.64f, 6.82f, 6.18f, 9.63f, 2.63f, 2.33f, 1.36f, 2.7f, 9.99f, 9.85f, 8.06f, 4.8f, 7.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 24.0f, 8.0f, 0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 1.0f, 7.0f, 1.0f, 25.0f, 11.0f, 1.0f, 1.0f, 7.0f, 5.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {6.16f, 8.6f, 7.12f, 6.79f, 5.13f, 8.44f, 7.86f, 9.69f, 4.42f, 9.89f, 9.3f, 6.47f, 7.86f, 9.89f, 9.3f, 9.89f, 9.3f, 9.5f, 7.86f, 9.89f, 9.3f, 9.89f, 9.3f, 9.5f, 9.5f, 6.73f, 9.5f, 9.28f, 6.89f, 8.97f, 6.18f, 9.63f, 9.99f, 9.85f, 9.99f, 9.85f, 7.29f, 6.94f, 7.29f, 6.94f, 2.31f, 6.88f, 7.9f, 6.78f, 7.9f, 6.82f, 4.64f, 6.82f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nhwc_2;
};

std::vector<MixedTypedExample>& get_examples_nhwc_relaxed_2() {
static std::vector<MixedTypedExample> examples_nhwc_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 8.88f, 7.41f, 5.6f, 9.95f, 4.37f, 0.1f, 7.64f, 6.5f, 9.47f, 7.55f, 3.0f, 0.89f, 3.01f, 6.3f, 4.4f, 1.64f, 6.74f, 6.16f, 8.6f, 5.85f, 3.17f, 7.12f, 6.79f, 5.77f, 6.62f, 5.13f, 8.44f, 5.08f, 7.12f, 2.84f, 1.19f, 8.37f, 0.9f, 7.86f, 9.69f, 1.97f, 1.31f, 4.42f, 9.89f, 0.18f, 9.0f, 9.3f, 0.44f, 5.05f, 6.47f, 1.09f, 9.5f, 1.3f, 2.18f, 2.05f, 7.74f, 7.66f, 0.65f, 4.18f, 7.14f, 5.35f, 7.9f, 1.04f, 1.47f, 9.01f, 0.95f, 4.07f, 0.65f, 5.47f, 2.64f, 0.86f, 4.86f, 2.38f, 2.45f, 8.77f, 0.06f, 3.6f, 9.28f, 5.84f, 8.97f, 6.89f, 1.43f, 3.9f, 5.91f, 7.4f, 9.25f, 3.12f, 4.92f, 1.87f, 3.22f, 9.5f, 6.73f, 2.07f, 7.3f, 3.07f, 4.97f, 0.24f, 8.91f, 1.09f, 0.27f, 7.29f, 6.94f, 2.31f, 6.88f, 4.33f, 1.37f, 0.86f, 0.46f, 6.07f, 3.81f, 0.86f, 6.99f, 4.36f, 1.92f, 8.19f, 3.57f, 7.9f, 6.78f, 4.64f, 6.82f, 6.18f, 9.63f, 2.63f, 2.33f, 1.36f, 2.7f, 9.99f, 9.85f, 8.06f, 4.8f, 7.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 24.0f, 8.0f, 0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 1.0f, 7.0f, 1.0f, 25.0f, 11.0f, 1.0f, 1.0f, 7.0f, 5.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {6.16f, 8.6f, 7.12f, 6.79f, 5.13f, 8.44f, 7.86f, 9.69f, 4.42f, 9.89f, 9.3f, 6.47f, 7.86f, 9.89f, 9.3f, 9.89f, 9.3f, 9.5f, 7.86f, 9.89f, 9.3f, 9.89f, 9.3f, 9.5f, 9.5f, 6.73f, 9.5f, 9.28f, 6.89f, 8.97f, 6.18f, 9.63f, 9.99f, 9.85f, 9.99f, 9.85f, 7.29f, 6.94f, 7.29f, 6.94f, 2.31f, 6.88f, 7.9f, 6.78f, 7.9f, 6.82f, 4.64f, 6.82f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nhwc_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_nhwc_quant8_2() {
static std::vector<MixedTypedExample> examples_nhwc_quant8_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {0.0f, 4.0f, 4.0f, 24.0f, 8.0f, 0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 1.0f, 7.0f, 1.0f, 25.0f, 11.0f, 1.0f, 1.0f, 7.0f, 5.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {221, 222, 185, 140, 249, 109, 2, 191, 162, 237, 189, 75, 22, 75, 158, 110, 41, 168, 154, 215, 146, 79, 178, 170, 144, 166, 128, 211, 127, 178, 71, 30, 209, 22, 197, 242, 49, 33, 111, 247, 5, 225, 233, 11, 126, 162, 27, 238, 32, 55, 51, 194, 192, 16, 104, 178, 134, 198, 26, 37, 225, 24, 102, 16, 137, 66, 22, 122, 60, 61, 219, 2, 90, 232, 146, 224, 172, 36, 98, 148, 185, 231, 78, 123, 47, 80, 238, 168, 52, 183, 77, 124, 6, 223, 27, 7, 182, 174, 58, 172, 108, 34, 22, 12, 152, 95, 22, 175, 109, 48, 205, 89, 198, 170, 116, 171, 154, 241, 66, 58, 34, 68, 250, 246, 202, 120, 195, 136}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {154, 215, 178, 170, 128, 211, 197, 242, 111, 247, 233, 162, 197, 247, 233, 247, 233, 238, 197, 247, 233, 247, 233, 238, 238, 168, 238, 232, 172, 224, 154, 241, 250, 246, 250, 246, 182, 174, 182, 174, 58, 172, 198, 170, 198, 171, 116, 171}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nhwc_quant8_2;
};

std::vector<MixedTypedExample>& get_examples_nchw_2() {
static std::vector<MixedTypedExample> examples_nchw_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 7.41f, 9.95f, 0.1f, 6.5f, 7.55f, 0.89f, 6.3f, 1.64f, 6.16f, 5.85f, 7.12f, 5.77f, 5.13f, 5.08f, 2.84f, 8.37f, 7.86f, 1.97f, 4.42f, 0.18f, 9.3f, 5.05f, 1.09f, 1.3f, 2.05f, 7.66f, 4.18f, 5.35f, 1.04f, 9.01f, 4.07f, 8.88f, 5.6f, 4.37f, 7.64f, 9.47f, 3.0f, 3.01f, 4.4f, 6.74f, 8.6f, 3.17f, 6.79f, 6.62f, 8.44f, 7.12f, 1.19f, 0.9f, 9.69f, 1.31f, 9.89f, 9.0f, 0.44f, 6.47f, 9.5f, 2.18f, 7.74f, 0.65f, 7.14f, 7.9f, 1.47f, 0.95f, 0.65f, 5.47f, 0.86f, 2.38f, 8.77f, 3.6f, 5.84f, 6.89f, 3.9f, 7.4f, 3.12f, 1.87f, 9.5f, 2.07f, 3.07f, 0.24f, 1.09f, 7.29f, 2.31f, 4.33f, 0.86f, 6.07f, 0.86f, 4.36f, 8.19f, 7.9f, 4.64f, 6.18f, 2.63f, 1.36f, 9.99f, 8.06f, 7.8f, 2.64f, 4.86f, 2.45f, 0.06f, 9.28f, 8.97f, 1.43f, 5.91f, 9.25f, 4.92f, 3.22f, 6.73f, 7.3f, 4.97f, 8.91f, 0.27f, 6.94f, 6.88f, 1.37f, 0.46f, 3.81f, 6.99f, 1.92f, 3.57f, 6.78f, 6.82f, 9.63f, 2.33f, 2.7f, 9.85f, 4.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 24.0f, 8.0f, 0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 1.0f, 7.0f, 1.0f, 25.0f, 11.0f, 1.0f, 1.0f, 7.0f, 5.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {6.16f, 7.12f, 5.13f, 7.86f, 4.42f, 9.3f, 8.6f, 6.79f, 8.44f, 9.69f, 9.89f, 6.47f, 7.86f, 9.3f, 9.3f, 7.86f, 9.3f, 9.3f, 9.89f, 9.89f, 9.5f, 9.89f, 9.89f, 9.5f, 9.5f, 9.5f, 6.89f, 6.18f, 9.99f, 9.99f, 6.73f, 9.28f, 8.97f, 9.63f, 9.85f, 9.85f, 7.29f, 7.29f, 2.31f, 7.9f, 7.9f, 4.64f, 6.94f, 6.94f, 6.88f, 6.78f, 6.82f, 6.82f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nchw_2;
};

std::vector<MixedTypedExample>& get_examples_nchw_relaxed_2() {
static std::vector<MixedTypedExample> examples_nchw_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {8.84f, 7.41f, 9.95f, 0.1f, 6.5f, 7.55f, 0.89f, 6.3f, 1.64f, 6.16f, 5.85f, 7.12f, 5.77f, 5.13f, 5.08f, 2.84f, 8.37f, 7.86f, 1.97f, 4.42f, 0.18f, 9.3f, 5.05f, 1.09f, 1.3f, 2.05f, 7.66f, 4.18f, 5.35f, 1.04f, 9.01f, 4.07f, 8.88f, 5.6f, 4.37f, 7.64f, 9.47f, 3.0f, 3.01f, 4.4f, 6.74f, 8.6f, 3.17f, 6.79f, 6.62f, 8.44f, 7.12f, 1.19f, 0.9f, 9.69f, 1.31f, 9.89f, 9.0f, 0.44f, 6.47f, 9.5f, 2.18f, 7.74f, 0.65f, 7.14f, 7.9f, 1.47f, 0.95f, 0.65f, 5.47f, 0.86f, 2.38f, 8.77f, 3.6f, 5.84f, 6.89f, 3.9f, 7.4f, 3.12f, 1.87f, 9.5f, 2.07f, 3.07f, 0.24f, 1.09f, 7.29f, 2.31f, 4.33f, 0.86f, 6.07f, 0.86f, 4.36f, 8.19f, 7.9f, 4.64f, 6.18f, 2.63f, 1.36f, 9.99f, 8.06f, 7.8f, 2.64f, 4.86f, 2.45f, 0.06f, 9.28f, 8.97f, 1.43f, 5.91f, 9.25f, 4.92f, 3.22f, 6.73f, 7.3f, 4.97f, 8.91f, 0.27f, 6.94f, 6.88f, 1.37f, 0.46f, 3.81f, 6.99f, 1.92f, 3.57f, 6.78f, 6.82f, 9.63f, 2.33f, 2.7f, 9.85f, 4.8f, 5.43f}}, {1, {0.0f, 4.0f, 4.0f, 24.0f, 8.0f, 0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 1.0f, 7.0f, 1.0f, 25.0f, 11.0f, 1.0f, 1.0f, 7.0f, 5.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {6.16f, 7.12f, 5.13f, 7.86f, 4.42f, 9.3f, 8.6f, 6.79f, 8.44f, 9.69f, 9.89f, 6.47f, 7.86f, 9.3f, 9.3f, 7.86f, 9.3f, 9.3f, 9.89f, 9.89f, 9.5f, 9.89f, 9.89f, 9.5f, 9.5f, 9.5f, 6.89f, 6.18f, 9.99f, 9.99f, 6.73f, 9.28f, 8.97f, 9.63f, 9.85f, 9.85f, 7.29f, 7.29f, 2.31f, 7.9f, 7.9f, 4.64f, 6.94f, 6.94f, 6.88f, 6.78f, 6.82f, 6.82f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nchw_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_nchw_quant8_2() {
static std::vector<MixedTypedExample> examples_nchw_quant8_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{1, {0.0f, 4.0f, 4.0f, 24.0f, 8.0f, 0.0f, 4.0f, 4.0f, 28.0f, 12.0f, 1.0f, 7.0f, 1.0f, 25.0f, 11.0f, 1.0f, 1.0f, 7.0f, 5.0f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {221, 185, 249, 2, 162, 189, 22, 158, 41, 154, 146, 178, 144, 128, 127, 71, 209, 197, 49, 111, 5, 233, 126, 27, 32, 51, 192, 104, 134, 26, 225, 102, 222, 140, 109, 191, 237, 75, 75, 110, 168, 215, 79, 170, 166, 211, 178, 30, 22, 242, 33, 247, 225, 11, 162, 238, 55, 194, 16, 178, 198, 37, 24, 16, 137, 22, 60, 219, 90, 146, 172, 98, 185, 78, 47, 238, 52, 77, 6, 27, 182, 58, 108, 22, 152, 22, 109, 205, 198, 116, 154, 66, 34, 250, 202, 195, 66, 122, 61, 2, 232, 224, 36, 148, 231, 123, 80, 168, 183, 124, 223, 7, 174, 172, 34, 12, 95, 175, 48, 89, 170, 171, 241, 58, 68, 246, 120, 136}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {154, 178, 128, 197, 111, 233, 215, 170, 211, 242, 247, 162, 197, 233, 233, 197, 233, 233, 247, 247, 238, 247, 247, 238, 238, 238, 172, 154, 250, 250, 168, 232, 224, 241, 246, 246, 182, 182, 58, 198, 198, 116, 174, 174, 172, 170, 171, 171}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_nchw_quant8_2;
};

