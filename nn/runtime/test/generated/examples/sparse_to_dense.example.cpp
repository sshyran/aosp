// clang-format off
// Generated file (from: sparse_to_dense.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples_one_dim_float32() {
static std::vector<MixedTypedExample> examples_one_dim_float32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {2.0f, 4.0f, 6.0f}}},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
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
  {{0, {0.0f, 2.0f, 0.0f, 4.0f, 0.0f, 6.0f, 0.0f}}},
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
return examples_one_dim_float32;
};

std::vector<MixedTypedExample>& get_examples_one_dim_float32_relaxed() {
static std::vector<MixedTypedExample> examples_one_dim_float32_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {2.0f, 4.0f, 6.0f}}},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
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
  {{0, {0.0f, 2.0f, 0.0f, 4.0f, 0.0f, 6.0f, 0.0f}}},
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
return examples_one_dim_float32_relaxed;
};

std::vector<MixedTypedExample>& get_examples_two_dim_float32() {
static std::vector<MixedTypedExample> examples_two_dim_float32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {2.0f, 4.0f, 6.0f}}},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}},
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
  {{0, {2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4.0f, 0.0f, 0.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
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
return examples_two_dim_float32;
};

std::vector<MixedTypedExample>& get_examples_two_dim_float32_relaxed() {
static std::vector<MixedTypedExample> examples_two_dim_float32_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {2.0f, 4.0f, 6.0f}}},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}},
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
  {{0, {2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4.0f, 0.0f, 0.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
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
return examples_two_dim_float32_relaxed;
};

std::vector<MixedTypedExample>& get_examples_default_value_float32() {
static std::vector<MixedTypedExample> examples_default_value_float32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {2.0f, 4.0f, 6.0f}}},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
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
  {{0, {-1.0f, 2.0f, -1.0f, 4.0f, -1.0f, 6.0f, -1.0f}}},
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
return examples_default_value_float32;
};

std::vector<MixedTypedExample>& get_examples_default_value_float32_relaxed() {
static std::vector<MixedTypedExample> examples_default_value_float32_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{2, {2.0f, 4.0f, 6.0f}}},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
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
  {{0, {-1.0f, 2.0f, -1.0f, 4.0f, -1.0f, 6.0f, -1.0f}}},
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
return examples_default_value_float32_relaxed;
};

std::vector<MixedTypedExample>& get_examples_one_dim_int32() {
static std::vector<MixedTypedExample> examples_one_dim_int32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}, {2, {2, 4, 6}}},
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
  {},
  // int -> INT32 map
  {{0, {0, 2, 0, 4, 0, 6, 0}}},
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
return examples_one_dim_int32;
};

std::vector<MixedTypedExample>& get_examples_one_dim_int32_relaxed() {
static std::vector<MixedTypedExample> examples_one_dim_int32_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}, {2, {2, 4, 6}}},
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
  {},
  // int -> INT32 map
  {{0, {0, 2, 0, 4, 0, 6, 0}}},
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
return examples_one_dim_int32_relaxed;
};

std::vector<MixedTypedExample>& get_examples_two_dim_int32() {
static std::vector<MixedTypedExample> examples_two_dim_int32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}, {2, {2, 4, 6}}},
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
  {},
  // int -> INT32 map
  {{0, {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0}}},
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
return examples_two_dim_int32;
};

std::vector<MixedTypedExample>& get_examples_two_dim_int32_relaxed() {
static std::vector<MixedTypedExample> examples_two_dim_int32_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}, {2, {2, 4, 6}}},
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
  {},
  // int -> INT32 map
  {{0, {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0}}},
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
return examples_two_dim_int32_relaxed;
};

std::vector<MixedTypedExample>& get_examples_default_value_int32() {
static std::vector<MixedTypedExample> examples_default_value_int32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}, {2, {2, 4, 6}}},
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
  {},
  // int -> INT32 map
  {{0, {-1, 2, -1, 4, -1, 6, -1}}},
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
return examples_default_value_int32;
};

std::vector<MixedTypedExample>& get_examples_default_value_int32_relaxed() {
static std::vector<MixedTypedExample> examples_default_value_int32_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}, {2, {2, 4, 6}}},
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
  {},
  // int -> INT32 map
  {{0, {-1, 2, -1, 4, -1, 6, -1}}},
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
return examples_default_value_int32_relaxed;
};

std::vector<MixedTypedExample>& get_examples_one_dim_float16() {
static std::vector<MixedTypedExample> examples_one_dim_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{2, {2.0f, 4.0f, 6.0f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {0.0f, 2.0f, 0.0f, 4.0f, 0.0f, 6.0f, 0.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_one_dim_float16;
};

std::vector<MixedTypedExample>& get_examples_one_dim_float16_relaxed() {
static std::vector<MixedTypedExample> examples_one_dim_float16_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{2, {2.0f, 4.0f, 6.0f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {0.0f, 2.0f, 0.0f, 4.0f, 0.0f, 6.0f, 0.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_one_dim_float16_relaxed;
};

std::vector<MixedTypedExample>& get_examples_two_dim_float16() {
static std::vector<MixedTypedExample> examples_two_dim_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{2, {2.0f, 4.0f, 6.0f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4.0f, 0.0f, 0.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_two_dim_float16;
};

std::vector<MixedTypedExample>& get_examples_two_dim_float16_relaxed() {
static std::vector<MixedTypedExample> examples_two_dim_float16_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{2, {2.0f, 4.0f, 6.0f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4.0f, 0.0f, 0.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_two_dim_float16_relaxed;
};

std::vector<MixedTypedExample>& get_examples_default_value_float16() {
static std::vector<MixedTypedExample> examples_default_value_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{2, {2.0f, 4.0f, 6.0f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {-1.0f, 2.0f, -1.0f, 4.0f, -1.0f, 6.0f, -1.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_default_value_float16;
};

std::vector<MixedTypedExample>& get_examples_default_value_float16_relaxed() {
static std::vector<MixedTypedExample> examples_default_value_float16_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{2, {2.0f, 4.0f, 6.0f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {-1.0f, 2.0f, -1.0f, 4.0f, -1.0f, 6.0f, -1.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_default_value_float16_relaxed;
};

std::vector<MixedTypedExample>& get_examples_one_dim_quant8() {
static std::vector<MixedTypedExample> examples_one_dim_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {{2, {130, 132, 134}}},
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
  {{0, {128, 130, 128, 132, 128, 134, 128}}},
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
return examples_one_dim_quant8;
};

std::vector<MixedTypedExample>& get_examples_one_dim_quant8_relaxed() {
static std::vector<MixedTypedExample> examples_one_dim_quant8_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {{2, {130, 132, 134}}},
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
  {{0, {128, 130, 128, 132, 128, 134, 128}}},
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
return examples_one_dim_quant8_relaxed;
};

std::vector<MixedTypedExample>& get_examples_two_dim_quant8() {
static std::vector<MixedTypedExample> examples_two_dim_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}},
  // int -> QUANT8_ASYMM map
  {{2, {130, 132, 134}}},
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
  {{0, {130, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 132, 128, 128, 134, 128, 128, 128, 128, 128, 128, 128}}},
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
return examples_two_dim_quant8;
};

std::vector<MixedTypedExample>& get_examples_two_dim_quant8_relaxed() {
static std::vector<MixedTypedExample> examples_two_dim_quant8_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {0, 0, 0, 1, 2, 1, 2, 0, 1}}, {1, {3, 3, 3}}},
  // int -> QUANT8_ASYMM map
  {{2, {130, 132, 134}}},
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
  {{0, {130, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 132, 128, 128, 134, 128, 128, 128, 128, 128, 128, 128}}},
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
return examples_two_dim_quant8_relaxed;
};

std::vector<MixedTypedExample>& get_examples_default_value_quant8() {
static std::vector<MixedTypedExample> examples_default_value_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {{2, {130, 132, 134}}},
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
  {{0, {127, 130, 127, 132, 127, 134, 127}}},
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
return examples_default_value_quant8;
};

std::vector<MixedTypedExample>& get_examples_default_value_quant8_relaxed() {
static std::vector<MixedTypedExample> examples_default_value_quant8_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 5}}, {1, {7}}},
  // int -> QUANT8_ASYMM map
  {{2, {130, 132, 134}}},
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
  {{0, {127, 130, 127, 132, 127, 134, 127}}},
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
return examples_default_value_quant8_relaxed;
};

