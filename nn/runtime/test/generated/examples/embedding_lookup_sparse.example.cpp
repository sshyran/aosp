// clang-format off
// Generated file (from: embedding_lookup_sparse.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples_simple_sum() {
static std::vector<MixedTypedExample> examples_simple_sum = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.06f, 6.6f, 6.66f, 7.2f, 7.26f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_sum;
};

std::vector<MixedTypedExample>& get_examples_simple_sum_relaxed() {
static std::vector<MixedTypedExample> examples_simple_sum_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.06f, 6.6f, 6.66f, 7.2f, 7.26f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_sum_relaxed;
};

std::vector<MixedTypedExample>& get_examples_simple_sum_float16() {
static std::vector<MixedTypedExample> examples_simple_sum_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.009999999776482582f, 0.10000000149011612f, 0.10999999940395355f, 0.20000000298023224f, 0.20999999344348907f, 1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 2.0f, 2.009999990463257f, 2.0999999046325684f, 2.109999895095825f, 2.200000047683716f, 2.2100000381469727f, 3.0f, 3.009999990463257f, 3.0999999046325684f, 3.109999895095825f, 3.200000047683716f, 3.2100000381469727f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.059999942779541f, 6.599999904632568f, 6.659999847412109f, 7.199999809265137f, 7.260000228881836f}}},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_sum_float16;
};

std::vector<MixedTypedExample>& get_examples_simple_mean() {
static std::vector<MixedTypedExample> examples_simple_mean = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_mean;
};

std::vector<MixedTypedExample>& get_examples_simple_mean_relaxed() {
static std::vector<MixedTypedExample> examples_simple_mean_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_mean_relaxed;
};

std::vector<MixedTypedExample>& get_examples_simple_mean_float16() {
static std::vector<MixedTypedExample> examples_simple_mean_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.009999999776482582f, 0.10000000149011612f, 0.10999999940395355f, 0.20000000298023224f, 0.20999999344348907f, 1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 2.0f, 2.009999990463257f, 2.0999999046325684f, 2.109999895095825f, 2.200000047683716f, 2.2100000381469727f, 3.0f, 3.009999990463257f, 3.0999999046325684f, 3.109999895095825f, 3.200000047683716f, 3.2100000381469727f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f}}},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_mean_float16;
};

std::vector<MixedTypedExample>& get_examples_simple_sqrtn() {
static std::vector<MixedTypedExample> examples_simple_sqrtn = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.3416407864998738f, 1.3550571943648724f, 1.475804865149861f, 1.48922127301486f, 1.6099689437998486f, 1.623385351664847f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_sqrtn;
};

std::vector<MixedTypedExample>& get_examples_simple_sqrtn_relaxed() {
static std::vector<MixedTypedExample> examples_simple_sqrtn_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.3416407864998738f, 1.3550571943648724f, 1.475804865149861f, 1.48922127301486f, 1.6099689437998486f, 1.623385351664847f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_sqrtn_relaxed;
};

std::vector<MixedTypedExample>& get_examples_simple_sqrtn_float16() {
static std::vector<MixedTypedExample> examples_simple_sqrtn_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 2, 0, 2, 1}}, {2, {3, 2}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.009999999776482582f, 0.10000000149011612f, 0.10999999940395355f, 0.20000000298023224f, 0.20999999344348907f, 1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 2.0f, 2.009999990463257f, 2.0999999046325684f, 2.109999895095825f, 2.200000047683716f, 2.2100000381469727f, 3.0f, 3.009999990463257f, 3.0999999046325684f, 3.109999895095825f, 3.200000047683716f, 3.2100000381469727f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.341640830039978f, 1.3550572395324707f, 1.4758048057556152f, 1.489221215248108f, 1.609968900680542f, 1.6233853101730347f}}},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_simple_sqrtn_float16;
};

std::vector<MixedTypedExample>& get_examples_3d_indices() {
static std::vector<MixedTypedExample> examples_3d_indices = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 0, 2, 0, 0, 2, 0, 1}}, {2, {3, 2, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.06f, 6.6f, 6.66f, 7.2f, 7.26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_3d_indices;
};

std::vector<MixedTypedExample>& get_examples_3d_indices_relaxed() {
static std::vector<MixedTypedExample> examples_3d_indices_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.01f, 0.1f, 0.11f, 0.2f, 0.21000000000000002f, 1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 2.0f, 2.01f, 2.1f, 2.11f, 2.2f, 2.21f, 3.0f, 3.01f, 3.1f, 3.11f, 3.2f, 3.21f}}},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 0, 2, 0, 0, 2, 0, 1}}, {2, {3, 2, 2}}},
  // int -> QUANT8_ASYMM map
  {},
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
  {{0, {1.0f, 1.01f, 1.1f, 1.11f, 1.2f, 1.21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.06f, 6.6f, 6.66f, 7.2f, 7.26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
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
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_3d_indices_relaxed;
};

std::vector<MixedTypedExample>& get_examples_3d_indices_float16() {
static std::vector<MixedTypedExample> examples_3d_indices_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 3, 0}}, {1, {0, 0, 0, 2, 0, 0, 2, 0, 1}}, {2, {3, 2, 2}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{3, {1.0f, 2.0f, 4.0f}}, {4, {0.0f, 0.009999999776482582f, 0.10000000149011612f, 0.10999999940395355f, 0.20000000298023224f, 0.20999999344348907f, 1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 2.0f, 2.009999990463257f, 2.0999999046325684f, 2.109999895095825f, 2.200000047683716f, 2.2100000381469727f, 3.0f, 3.009999990463257f, 3.0999999046325684f, 3.109999895095825f, 3.200000047683716f, 3.2100000381469727f}}},
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 1.0099999904632568f, 1.100000023841858f, 1.1100000143051147f, 1.2000000476837158f, 1.2100000381469727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.059999942779541f, 6.599999904632568f, 6.659999847412109f, 7.199999809265137f, 7.260000228881836f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
  // int -> BOOL8 map
  {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  {},
}
},
}, // End of an example
};
return examples_3d_indices_float16;
};

