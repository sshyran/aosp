// clang-format off
// Generated file (from: axis_aligned_bbox_transform.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 100.0f, 150.0f, 400.0f, 430.0f, 1.0f, 120.0f, 60.0f, 122.0f, 61.0f, 2.0f, 10.0f, 20.0f, 20.0f, 50.0f, 2.0f, 50.0f, 120.0f, 150.0f, 250.0f, 3.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
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
  {{0, {96.778885f, 146.99292f, 463.421143f, 489.207092f, 194.76683f, 104.842926f, 395.533142f, 447.057098f, 237.520432f, 121.248184f, 243.979568f, 121.351822f, 85.999985f, 27.599991f, 397.5f, 214.100006f, 0.0f, 0.0f, 73.580643f, 200.567169f, 25.369484f, 59.474972f, 25.130516f, 62.453602f, 157.56456f, 283.425812f, 156.921158f, 282.488434f, 84.223312f, 0.0f, 345.348145f, 365.0f, 0.0f, 334.398193f, 255.0f, 511.0f, 255.0f, 374.348328f, 255.0f, 511.0f}}},
  // int -> INT32 map
  {{1, {1, 1, 2, 1, 0}}},
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
return examples;
};

std::vector<MixedTypedExample>& get_examples_relaxed() {
static std::vector<MixedTypedExample> examples_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 100.0f, 150.0f, 400.0f, 430.0f, 1.0f, 120.0f, 60.0f, 122.0f, 61.0f, 2.0f, 10.0f, 20.0f, 20.0f, 50.0f, 2.0f, 50.0f, 120.0f, 150.0f, 250.0f, 3.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
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
  {{0, {96.778885f, 146.99292f, 463.421143f, 489.207092f, 194.76683f, 104.842926f, 395.533142f, 447.057098f, 237.520432f, 121.248184f, 243.979568f, 121.351822f, 85.999985f, 27.599991f, 397.5f, 214.100006f, 0.0f, 0.0f, 73.580643f, 200.567169f, 25.369484f, 59.474972f, 25.130516f, 62.453602f, 157.56456f, 283.425812f, 156.921158f, 282.488434f, 84.223312f, 0.0f, 345.348145f, 365.0f, 0.0f, 334.398193f, 255.0f, 511.0f, 255.0f, 374.348328f, 255.0f, 511.0f}}},
  // int -> INT32 map
  {{1, {1, 1, 2, 1, 0}}},
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
return examples_relaxed;
};

std::vector<MixedTypedExample>& get_examples_float16() {
static std::vector<MixedTypedExample> examples_float16 = {
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {0.0f, 100.0f, 150.0f, 400.0f, 430.0f, 1.0f, 120.0f, 60.0f, 122.0f, 61.0f, 2.0f, 10.0f, 20.0f, 20.0f, 50.0f, 2.0f, 50.0f, 120.0f, 150.0f, 250.0f, 3.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.5f, 0.20000000298023224f, 0.20000000298023224f, -0.5f, -0.10000000149011612f, -0.10000000149011612f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f, 0.30000001192092896f, -0.20000000298023224f, 1.100000023841858f, -0.800000011920929f, 0.10000000149011612f, 0.05000000074505806f, -0.5f, -0.5f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.699999988079071f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{1, {1, 1, 2, 1, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {96.77888488769531f, 146.992919921875f, 463.421142578125f, 489.20709228515625f, 194.76683044433594f, 104.84292602539062f, 395.53314208984375f, 447.0570983886719f, 237.5204315185547f, 121.24818420410156f, 243.9795684814453f, 121.35182189941406f, 85.99998474121094f, 27.599990844726562f, 397.5f, 214.10000610351562f, 0.0f, 0.0f, 73.58064270019531f, 200.56716918945312f, 25.369483947753906f, 59.474971771240234f, 25.130516052246094f, 62.4536018371582f, 157.56455993652344f, 283.4258117675781f, 156.92115783691406f, 282.4884338378906f, 84.22331237792969f, 0.0f, 345.34814453125f, 365.0f, 0.0f, 334.398193359375f, 255.0f, 511.0f, 255.0f, 374.34832763671875f, 255.0f, 511.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_float16;
};

std::vector<MixedTypedExample>& get_examples_2() {
static std::vector<MixedTypedExample> examples_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 100.0f, 150.0f, 400.0f, 430.0f, 1.0f, 120.0f, 60.0f, 122.0f, 61.0f, 2.0f, 10.0f, 20.0f, 20.0f, 50.0f, 2.0f, 50.0f, 120.0f, 150.0f, 250.0f, 3.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
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
  {{0, {96.778885f, 146.99292f, 463.421143f, 489.207092f, 194.76683f, 104.842926f, 395.533142f, 447.057098f, 118.760216f, 60.624092f, 121.989784f, 60.675911f, 42.999992f, 13.799995f, 198.75f, 107.050003f, 0.0f, 0.0f, 51.506451f, 140.397018f, 17.758638f, 41.632481f, 17.59136f, 43.717522f, 110.295189f, 198.398071f, 109.84481f, 197.741898f, 58.956318f, 0.0f, 241.743698f, 255.5f, 0.0f, 668.796387f, 510.0f, 1022.0f, 510.0f, 748.696655f, 510.0f, 1022.0f}}},
  // int -> INT32 map
  {{1, {1, 1, 2, 1, 0}}},
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
return examples_2;
};

std::vector<MixedTypedExample>& get_examples_relaxed_2() {
static std::vector<MixedTypedExample> examples_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {0.0f, 100.0f, 150.0f, 400.0f, 430.0f, 1.0f, 120.0f, 60.0f, 122.0f, 61.0f, 2.0f, 10.0f, 20.0f, 20.0f, 50.0f, 2.0f, 50.0f, 120.0f, 150.0f, 250.0f, 3.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
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
  {{0, {96.778885f, 146.99292f, 463.421143f, 489.207092f, 194.76683f, 104.842926f, 395.533142f, 447.057098f, 118.760216f, 60.624092f, 121.989784f, 60.675911f, 42.999992f, 13.799995f, 198.75f, 107.050003f, 0.0f, 0.0f, 51.506451f, 140.397018f, 17.758638f, 41.632481f, 17.59136f, 43.717522f, 110.295189f, 198.398071f, 109.84481f, 197.741898f, 58.956318f, 0.0f, 241.743698f, 255.5f, 0.0f, 668.796387f, 510.0f, 1022.0f, 510.0f, 748.696655f, 510.0f, 1022.0f}}},
  // int -> INT32 map
  {{1, {1, 1, 2, 1, 0}}},
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
return examples_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_float16_2() {
static std::vector<MixedTypedExample> examples_float16_2 = {
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {0.0f, 100.0f, 150.0f, 400.0f, 430.0f, 1.0f, 120.0f, 60.0f, 122.0f, 61.0f, 2.0f, 10.0f, 20.0f, 20.0f, 50.0f, 2.0f, 50.0f, 120.0f, 150.0f, 250.0f, 3.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.5f, 0.20000000298023224f, 0.20000000298023224f, -0.5f, -0.10000000149011612f, -0.10000000149011612f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f, 0.30000001192092896f, -0.20000000298023224f, 1.100000023841858f, -0.800000011920929f, 0.10000000149011612f, 0.05000000074505806f, -0.5f, -0.5f}}, {2, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.699999988079071f, 1024.0f, 512.0f, 2.0f, 1024.0f, 512.0f, 2.0f}}},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{1, {1, 1, 2, 1, 0}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {96.77888488769531f, 146.992919921875f, 463.421142578125f, 489.20709228515625f, 194.76683044433594f, 104.84292602539062f, 395.53314208984375f, 447.0570983886719f, 118.76021575927734f, 60.62409210205078f, 121.98978424072266f, 60.67591094970703f, 42.99999237060547f, 13.799995422363281f, 198.75f, 107.05000305175781f, 0.0f, 0.0f, 51.50645065307617f, 140.3970184326172f, 17.758638381958008f, 41.63248062133789f, 17.591360092163086f, 43.71752166748047f, 110.2951889038086f, 198.3980712890625f, 109.84481048583984f, 197.7418975830078f, 58.95631790161133f, 0.0f, 241.7436981201172f, 255.5f, 0.0f, 668.79638671875f, 510.0f, 1022.0f, 510.0f, 748.6966552734375f, 510.0f, 1022.0f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_float16_2;
};

std::vector<MixedTypedExample>& get_examples_single_batch() {
static std::vector<MixedTypedExample> examples_single_batch = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f}}, {1, {-0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f}}, {2, {256.0f, 256.0f, 0.7f}}},
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
  {{0, {0.0f, 0.0f, 51.506451f, 140.397018f, 17.758638f, 41.632481f, 17.59136f, 43.717522f, 110.295189f, 198.398071f, 109.84481f, 197.741898f, 58.956318f, 0.0f, 241.743698f, 255.5f}}},
  // int -> INT32 map
  {{1, {2}}},
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
return examples_single_batch;
};

std::vector<MixedTypedExample>& get_examples_single_batch_relaxed() {
static std::vector<MixedTypedExample> examples_single_batch_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f}}, {1, {-0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f}}, {2, {256.0f, 256.0f, 0.7f}}},
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
  {{0, {0.0f, 0.0f, 51.506451f, 140.397018f, 17.758638f, 41.632481f, 17.59136f, 43.717522f, 110.295189f, 198.398071f, 109.84481f, 197.741898f, 58.956318f, 0.0f, 241.743698f, 255.5f}}},
  // int -> INT32 map
  {{1, {2}}},
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
return examples_single_batch_relaxed;
};

std::vector<MixedTypedExample>& get_examples_single_batch_float16() {
static std::vector<MixedTypedExample> examples_single_batch_float16 = {
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
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f}}, {1, {-0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f}}, {2, {256.0f, 256.0f, 0.699999988079071f}}},
  // int -> BOOL8 map
  {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{1, {2}}},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_SYMM map
  {},
  // int -> FLOAT16 map
  {{0, {0.0f, 0.0f, 51.50645065307617f, 140.3970184326172f, 17.758638381958008f, 41.63248062133789f, 17.591360092163086f, 43.71752166748047f, 110.2951889038086f, 198.3980712890625f, 109.84481048583984f, 197.7418975830078f, 58.95631790161133f, 0.0f, 241.7436981201172f, 255.5f}}},
  // int -> BOOL8 map
  {},
}
},
}, // End of an example
};
return examples_single_batch_float16;
};

