// clang-format off
// Generated file (from: quantized_lstm.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{9, {-7876, 13488, -726, 32839}}, {10, {9206, -46884, -11693, -38724}}, {11, {39481, 48624, 48976, -21419}}, {12, {-58999, -17050, -41852, -40538}}},
  // int -> QUANT8_ASYMM map
  {{0, {166, 179, 50, 150}}, {1, {146, 250, 235, 171, 10, 218, 171, 108}}, {2, {24, 50, 132, 179, 158, 110, 3, 169}}, {3, {133, 34, 29, 49, 206, 109, 54, 183}}, {4, {195, 187, 11, 99, 109, 10, 218, 48}}, {5, {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26}}, {6, {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253}}, {7, {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216}}, {8, {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98}}, {14, {136, 150, 140, 115, 135, 152, 138, 112}}},
  // int -> QUANT16_SYMM map
  {{13, {876, 1034, 955, -909, 761, 1029, 796, -1036}}},
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
  {{1, {140, 151, 146, 112, 136, 156, 142, 112}}},
  // int -> QUANT16_SYMM map
  {{0, {1485, 1177, 1373, -1023, 1019, 1355, 1097, -1235}}},
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
  {},
  // int -> INT32 map
  {{9, {-7876, 13488, -726, 32839}}, {10, {9206, -46884, -11693, -38724}}, {11, {39481, 48624, 48976, -21419}}, {12, {-58999, -17050, -41852, -40538}}},
  // int -> QUANT8_ASYMM map
  {{0, {166, 179, 50, 150}}, {1, {146, 250, 235, 171, 10, 218, 171, 108}}, {2, {24, 50, 132, 179, 158, 110, 3, 169}}, {3, {133, 34, 29, 49, 206, 109, 54, 183}}, {4, {195, 187, 11, 99, 109, 10, 218, 48}}, {5, {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26}}, {6, {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253}}, {7, {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216}}, {8, {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98}}, {14, {136, 150, 140, 115, 135, 152, 138, 112}}},
  // int -> QUANT16_SYMM map
  {{13, {876, 1034, 955, -909, 761, 1029, 796, -1036}}},
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
  {{1, {140, 151, 146, 112, 136, 156, 142, 112}}},
  // int -> QUANT16_SYMM map
  {{0, {1485, 1177, 1373, -1023, 1019, 1355, 1097, -1235}}},
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
return examples_relaxed;
};

