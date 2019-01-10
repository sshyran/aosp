// clang-format off
// Generated file (from: depthwise_conv2d_per_channel.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples_same() {
static std::vector<MixedTypedExample> examples_same = {
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
  {{0, {4, 16, 4, 32, 4, 64, 4, 128}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {8, 48}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_same;
};

std::vector<MixedTypedExample>& get_examples_same_weight_as_input() {
static std::vector<MixedTypedExample> examples_same_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {0, 0}}},
  // int -> QUANT8_ASYMM map
  {{0, {4, 16, 4, 32, 4, 64, 4, 128}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {{1, {2, 4, 2, 0, 2, 2, 2, 0}}},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {8, 48}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_same_weight_as_input;
};

std::vector<MixedTypedExample>& get_examples_different() {
static std::vector<MixedTypedExample> examples_different = {
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
  {{0, {129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_different;
};

std::vector<MixedTypedExample>& get_examples_different_weight_as_input() {
static std::vector<MixedTypedExample> examples_different_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {4, 4, 4, 4}}},
  // int -> QUANT8_ASYMM map
  {{0, {129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {{1, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_different_weight_as_input;
};

std::vector<MixedTypedExample>& get_examples_layout_nhwc() {
static std::vector<MixedTypedExample> examples_layout_nhwc = {
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
  {{0, {129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_layout_nhwc;
};

std::vector<MixedTypedExample>& get_examples_layout_nhwc_weight_as_input() {
static std::vector<MixedTypedExample> examples_layout_nhwc_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {4, 4, 4, 4}}},
  // int -> QUANT8_ASYMM map
  {{0, {129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130, 129, 130}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {{1, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131, 132, 130, 134, 131}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_layout_nhwc_weight_as_input;
};

std::vector<MixedTypedExample>& get_examples_layout_nchw() {
static std::vector<MixedTypedExample> examples_layout_nchw = {
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
  {{0, {129, 129, 129, 129, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 132, 132, 132, 130, 130, 130, 130, 134, 134, 134, 134, 131, 131, 131, 131}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_layout_nchw;
};

std::vector<MixedTypedExample>& get_examples_layout_nchw_weight_as_input() {
static std::vector<MixedTypedExample> examples_layout_nchw_weight_as_input = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{2, {4, 4, 4, 4}}},
  // int -> QUANT8_ASYMM map
  {{0, {129, 129, 129, 129, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {{1, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {132, 132, 132, 132, 130, 130, 130, 130, 134, 134, 134, 134, 131, 131, 131, 131}}},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_layout_nchw_weight_as_input;
};

