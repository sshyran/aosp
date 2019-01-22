// clang-format off
// Generated file (from: generate_proposals.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples_nhwc() {
static std::vector<MixedTypedExample> examples_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 2, 2, 8}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.9f, 0.85f, 0.85f, 0.75f, 0.8f, 0.9f, 0.95f}}, {1, {0.5f, 0.1f, 0.1f, 0.1f, 0.5f, 0.1f, 0.5f, 0.1f, -0.25f, 0.1f, -0.1f, -0.1f, -0.25f, 0.1f, 0.2f, 0.1f, 0.4f, -0.1f, -0.2f, 0.2f, 0.4f, -0.1f, -0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 2, 2, 8}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.9f, 0.85f, 0.85f, 0.75f, 0.8f, 0.9f, 0.95f}}, {1, {0.5f, 0.1f, 0.1f, 0.1f, 0.5f, 0.1f, 0.5f, 0.1f, -0.25f, 0.1f, -0.1f, -0.1f, -0.25f, 0.1f, 0.2f, 0.1f, 0.4f, -0.1f, -0.2f, 0.2f, 0.4f, -0.1f, -0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nhwc_relaxed;
};

std::vector<MixedTypedExample>& get_examples_nhwc_float16() {
static std::vector<MixedTypedExample> examples_nhwc_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 2, 2, 8}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.800000011920929f, 0.8999999761581421f, 0.8500000238418579f, 0.8500000238418579f, 0.75f, 0.800000011920929f, 0.8999999761581421f, 0.949999988079071f}}, {1, {0.5f, 0.10000000149011612f, 0.10000000149011612f, 0.10000000149011612f, 0.5f, 0.10000000149011612f, 0.5f, 0.10000000149011612f, -0.25f, 0.10000000149011612f, -0.10000000149011612f, -0.10000000149011612f, -0.25f, 0.10000000149011612f, 0.20000000298023224f, 0.10000000149011612f, 0.4000000059604645f, -0.10000000149011612f, -0.20000000298023224f, 0.20000000298023224f, 0.4000000059604645f, -0.10000000149011612f, -0.20000000298023224f, 0.20000000298023224f, -0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, 0.20000000298023224f, -0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, 0.20000000298023224f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.800000011920929f}}, {1, {4.378597259521484f, 2.7571942806243896f, 6.821402549743652f, 7.642805099487305f, 1.3512787818908691f, 0.18965816497802734f, 4.648721218109131f, 4.610342025756836f, 3.1903252601623535f, 1.2951626777648926f, 6.8096747398376465f, 3.104837417602539f, 1.981269121170044f, 3.1571943759918213f, 3.6187307834625244f, 8.042805671691895f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nhwc_float16;
};

std::vector<MixedTypedExample>& get_examples_nchw() {
static std::vector<MixedTypedExample> examples_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 8, 2, 2}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.85f, 0.75f, 0.9f, 0.9f, 0.85f, 0.8f, 0.95f}}, {1, {0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.1f, -0.1f, -0.2f, 0.2f, 0.1f, -0.1f, 0.2f, 0.2f, 0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.5f, 0.2f, -0.2f, 0.2f, 0.1f, 0.1f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 8, 2, 2}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.85f, 0.75f, 0.9f, 0.9f, 0.85f, 0.8f, 0.95f}}, {1, {0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.1f, -0.1f, -0.2f, 0.2f, 0.1f, -0.1f, 0.2f, 0.2f, 0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.5f, 0.2f, -0.2f, 0.2f, 0.1f, 0.1f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nchw_relaxed;
};

std::vector<MixedTypedExample>& get_examples_nchw_float16() {
static std::vector<MixedTypedExample> examples_nchw_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 8, 2, 2}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.800000011920929f, 0.8500000238418579f, 0.75f, 0.8999999761581421f, 0.8999999761581421f, 0.8500000238418579f, 0.800000011920929f, 0.949999988079071f}}, {1, {0.5f, -0.25f, 0.4000000059604645f, -0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.10000000149011612f, -0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, -0.10000000149011612f, 0.20000000298023224f, 0.20000000298023224f, 0.5f, -0.25f, 0.4000000059604645f, -0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, -0.10000000149011612f, -0.20000000298023224f, 0.5f, 0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.20000000298023224f, 0.20000000298023224f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.800000011920929f}}, {1, {4.378597259521484f, 2.7571942806243896f, 6.821402549743652f, 7.642805099487305f, 1.3512787818908691f, 0.18965816497802734f, 4.648721218109131f, 4.610342025756836f, 3.1903252601623535f, 1.2951626777648926f, 6.8096747398376465f, 3.104837417602539f, 1.981269121170044f, 3.1571943759918213f, 3.6187307834625244f, 8.042805671691895f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nchw_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nhwc() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nhwc = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 2, 2, 8}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.9f, 0.85f, 0.85f, 0.75f, 0.8f, 0.9f, 0.95f}}, {1, {0.5f, 0.1f, 0.1f, 0.1f, 0.5f, 0.1f, 0.5f, 0.1f, -0.25f, 0.1f, -0.1f, -0.1f, -0.25f, 0.1f, 0.2f, 0.1f, 0.4f, -0.1f, -0.2f, 0.2f, 0.4f, -0.1f, -0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nhwc;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nhwc_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 2, 2, 8}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.9f, 0.85f, 0.85f, 0.75f, 0.8f, 0.9f, 0.95f}}, {1, {0.5f, 0.1f, 0.1f, 0.1f, 0.5f, 0.1f, 0.5f, 0.1f, -0.25f, 0.1f, -0.1f, -0.1f, -0.25f, 0.1f, 0.2f, 0.1f, 0.4f, -0.1f, -0.2f, 0.2f, 0.4f, -0.1f, -0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f, -0.2f, -0.2f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nhwc_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nhwc_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 2, 2, 8}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.800000011920929f, 0.8999999761581421f, 0.8500000238418579f, 0.8500000238418579f, 0.75f, 0.800000011920929f, 0.8999999761581421f, 0.949999988079071f}}, {1, {0.5f, 0.10000000149011612f, 0.10000000149011612f, 0.10000000149011612f, 0.5f, 0.10000000149011612f, 0.5f, 0.10000000149011612f, -0.25f, 0.10000000149011612f, -0.10000000149011612f, -0.10000000149011612f, -0.25f, 0.10000000149011612f, 0.20000000298023224f, 0.10000000149011612f, 0.4000000059604645f, -0.10000000149011612f, -0.20000000298023224f, 0.20000000298023224f, 0.4000000059604645f, -0.10000000149011612f, -0.20000000298023224f, 0.20000000298023224f, -0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, 0.20000000298023224f, -0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, 0.20000000298023224f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.800000011920929f}}, {1, {4.378597259521484f, 2.7571942806243896f, 6.821402549743652f, 7.642805099487305f, 1.3512787818908691f, 0.18965816497802734f, 4.648721218109131f, 4.610342025756836f, 3.1903252601623535f, 1.2951626777648926f, 6.8096747398376465f, 3.104837417602539f, 1.981269121170044f, 3.1571943759918213f, 3.6187307834625244f, 8.042805671691895f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nhwc_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nchw() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nchw = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 8, 2, 2}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.85f, 0.75f, 0.9f, 0.9f, 0.85f, 0.8f, 0.95f}}, {1, {0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.1f, -0.1f, -0.2f, 0.2f, 0.1f, -0.1f, 0.2f, 0.2f, 0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.5f, 0.2f, -0.2f, 0.2f, 0.1f, 0.1f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nchw;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nchw_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 8, 2, 2}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.8f, 0.85f, 0.75f, 0.9f, 0.9f, 0.85f, 0.8f, 0.95f}}, {1, {0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.1f, -0.1f, -0.2f, 0.2f, 0.1f, -0.1f, 0.2f, 0.2f, 0.5f, -0.25f, 0.4f, -0.2f, 0.1f, 0.1f, -0.1f, -0.2f, 0.5f, 0.2f, -0.2f, 0.2f, 0.1f, 0.1f, 0.2f, 0.2f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.95f, 0.9f, 0.85f, 0.8f}}, {1, {4.3785973f, 2.7571943f, 6.8214025f, 7.642805f, 1.3512788f, 0.18965816f, 4.648721f, 4.610342f, 3.1903253f, 1.2951627f, 6.8096747f, 3.1048374f, 1.9812691f, 3.1571944f, 3.6187308f, 8.042806f}}},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nchw_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nchw_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 2, 2, 2}}, {1, {1, 8, 2, 2}}, {2, {2, 4}}, {3, {1, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.800000011920929f, 0.8500000238418579f, 0.75f, 0.8999999761581421f, 0.8999999761581421f, 0.8500000238418579f, 0.800000011920929f, 0.949999988079071f}}, {1, {0.5f, -0.25f, 0.4000000059604645f, -0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.10000000149011612f, -0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, -0.10000000149011612f, 0.20000000298023224f, 0.20000000298023224f, 0.5f, -0.25f, 0.4000000059604645f, -0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, -0.10000000149011612f, -0.20000000298023224f, 0.5f, 0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.20000000298023224f, 0.20000000298023224f}}, {2, {0.0f, 1.0f, 4.0f, 3.0f, 1.0f, 0.0f, 3.0f, 4.0f}}, {3, {32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}, {1, {4, 4}}, {2, {1}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {4}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.949999988079071f, 0.8999999761581421f, 0.8500000238418579f, 0.800000011920929f}}, {1, {4.378597259521484f, 2.7571942806243896f, 6.821402549743652f, 7.642805099487305f, 1.3512787818908691f, 0.18965816497802734f, 4.648721218109131f, 4.610342025756836f, 3.1903252601623535f, 1.2951626777648926f, 6.8096747398376465f, 3.104837417602539f, 1.981269121170044f, 3.1571943759918213f, 3.6187307834625244f, 8.042805671691895f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nchw_float16;
};

std::vector<MixedTypedExample>& get_examples_nhwc_2() {
static std::vector<MixedTypedExample> examples_nhwc_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 4, 4, 16}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.21f, 0.78f, 0.57f, 0.795f, 0.66f, 0.915f, 0.615f, 0.27f, 0.69f, 0.645f, 0.945f, 0.465f, 0.345f, 0.855f, 0.555f, 0.48f, 0.6f, 0.735f, 0.63f, 0.495f, 0.03f, 0.12f, 0.225f, 0.24f, 0.285f, 0.51f, 0.315f, 0.435f, 0.255f, 0.585f, 0.06f, 0.9f, 0.75f, 0.18f, 0.45f, 0.36f, 0.09f, 0.405f, 0.15f, 0.0f, 0.195f, 0.075f, 0.81f, 0.87f, 0.93f, 0.39f, 0.165f, 0.825f, 0.525f, 0.765f, 0.105f, 0.54f, 0.705f, 0.675f, 0.3f, 0.42f, 0.045f, 0.33f, 0.015f, 0.84f, 0.135f, 0.72f, 0.375f, 0.495f, 0.315f, 0.195f, 0.24f, 0.21f, 0.54f, 0.78f, 0.72f, 0.045f, 0.93f, 0.27f, 0.735f, 0.135f, 0.09f, 0.81f, 0.705f, 0.39f, 0.885f, 0.42f, 0.945f, 0.9f, 0.225f, 0.75f, 0.3f, 0.375f, 0.63f, 0.825f, 0.675f, 0.015f, 0.48f, 0.645f, 0.615f, 0.33f, 0.465f, 0.66f, 0.6f, 0.075f, 0.84f, 0.285f, 0.57f, 0.585f, 0.165f, 0.06f, 0.36f, 0.795f, 0.855f, 0.105f, 0.45f, 0.0f, 0.87f, 0.525f, 0.255f, 0.69f, 0.555f, 0.15f, 0.345f, 0.03f, 0.915f, 0.405f, 0.435f, 0.765f, 0.12f, 0.51f, 0.18f}}, {1, {-1.9f, 0.4f, 1.4f, 0.5f, -1.5f, -0.2f, 0.3f, 1.2f, 0.0f, -0.6f, 0.4f, -1.3f, 0.8f, 0.9f, -0.2f, 0.8f, -0.2f, 0.0f, 0.4f, 0.1f, -0.2f, -1.6f, -0.6f, -0.1f, -1.0f, 0.6f, 0.5f, -0.2f, -1.7f, -1.4f, 0.5f, -0.1f, -1.5f, 1.3f, -0.7f, -0.9f, 0.9f, 0.2f, -0.2f, 0.0f, -0.7f, 0.3f, -0.4f, -0.3f, -0.5f, -0.3f, 1.0f, -0.7f, 1.2f, -0.3f, 0.0f, 0.3f, -0.7f, 1.0f, -0.2f, -0.6f, -1.3f, 0.0f, 0.3f, 0.1f, 0.4f, 0.2f, 2.4f, 0.0f, 0.1f, 0.0f, 0.7f, -0.9f, 0.1f, -0.4f, 0.3f, -0.3f, -0.7f, 0.1f, 0.7f, 0.0f, -0.3f, 1.6f, 0.0f, 1.1f, 0.4f, -0.7f, -0.9f, 0.0f, 0.0f, 0.4f, -0.6f, 0.4f, -1.9f, -1.2f, 0.0f, -0.3f, 0.2f, 0.0f, 0.1f, 0.8f, 0.0f, 0.9f, -1.7f, 0.3f, 0.7f, -0.7f, 0.7f, 1.2f, -0.4f, -0.1f, -0.6f, 0.6f, -0.4f, -0.2f, 0.3f, -0.5f, 0.0f, 1.0f, -0.1f, -0.3f, -0.8f, 0.1f, -1.2f, -2.4f, 0.1f, 1.4f, 0.4f, 0.1f, -1.1f, 0.4f, -0.4f, -0.2f, 0.1f, 0.0f, 0.7f, 0.1f, -1.3f, 0.1f, -0.4f, -0.2f, 0.2f, 0.1f, -0.8f, 0.0f, -1.4f, 2.0f, -0.6f, -0.5f, 0.0f, 1.0f, -1.4f, -1.1f, 0.6f, -0.7f, 0.4f, 1.1f, -1.1f, 1.6f, -0.3f, 0.0f, -0.7f, 0.3f, -1.3f, 0.0f, 0.0f, 0.0f, -0.3f, 0.0f, -1.1f, -1.5f, 0.9f, -1.4f, -0.7f, 0.1f, -1.4f, 0.9f, 0.1f, 0.2f, -0.1f, -1.7f, 0.2f, -0.3f, -0.9f, 1.1f, 0.1f, 1.0f, 1.0f, -0.9f, 0.7f, 0.0f, -0.3f, 0.2f, -0.8f, -0.5f, 0.6f, -1.2f, 1.0f, 0.6f, 0.0f, -1.6f, 0.1f, -1.2f, 0.7f, 0.8f, 0.5f, -0.2f, -0.8f, -1.3f, -0.3f, 0.0f, 0.0f, 0.3f, -0.6f, -0.3f, 1.3f, 0.1f, 2.2f, 1.2f, -1.1f, 0.1f, 1.2f, 1.2f, 1.3f, -0.9f, 0.1f, -0.5f, 0.1f, -0.7f, -1.3f, 1.3f, 0.1f, 2.0f, 0.0f, 0.2f, 0.6f, 0.0f, -0.1f, -0.4f, -0.5f, 0.1f, -0.6f, -0.3f, 0.2f, -0.4f, -0.4f, -0.7f, -1.8f, 0.4f, -0.7f, 0.4f, 1.4f, -0.3f, 0.8f, 0.0f, 0.4f, -0.1f, -1.0f, 0.2f, 0.5f, -0.6f, -1.1f, 0.2f, 1.6f, -0.2f, -0.4f, -0.9f, 0.0f, 0.3f, 0.0f, 0.3f, -0.3f, 0.3f, 0.3f, 1.9f, 0.3f, -0.5f, -0.8f, -1.3f, -0.8f, 0.2f, 0.2f, -0.4f, -0.3f, 0.6f, 0.2f, -0.2f, 1.2f, 0.0f, 0.0f, -0.3f, 0.3f, -1.5f, -1.0f, -0.3f, -0.7f, -0.3f, -0.4f, -1.0f, -0.6f, -0.7f, -0.2f, 0.6f, -0.3f, 0.5f, -0.2f, 0.3f, -0.5f, -1.7f, 0.0f, -0.7f, -0.1f, -1.5f, -0.9f, 0.6f, 0.3f, -0.1f, 0.2f, 0.5f, 0.6f, -0.8f, -0.3f, 0.6f, 0.9f, -0.3f, 0.1f, -1.7f, -1.5f, 0.0f, -0.1f, -0.3f, 0.7f, -0.3f, -0.4f, 0.0f, -0.4f, -0.3f, 0.1f, 1.1f, 1.8f, -0.9f, 0.6f, 0.5f, 0.2f, -0.7f, 0.2f, 0.1f, 1.2f, 2.2f, 0.3f, 0.6f, 0.4f, 0.1f, 0.2f, 0.0f, -1.1f, -0.2f, -0.7f, 0.0f, -1.2f, 0.6f, -0.6f, -0.2f, -0.4f, 0.0f, 0.7f, -1.2f, 0.8f, 0.0f, -0.3f, 0.2f, 0.6f, -1.0f, -0.1f, -0.1f, 0.0f, -0.4f, -0.2f, 0.4f, -1.4f, 0.3f, 0.1f, 1.3f, -0.2f, -0.7f, 0.6f, 0.7f, 0.6f, 0.1f, -0.4f, 0.1f, -0.2f, -0.8f, 0.0f, -1.3f, 1.2f, 1.4f, 1.1f, 0.5f, 0.3f, 0.0f, 0.1f, -0.4f, 0.5f, -0.1f, -0.5f, 0.3f, -0.7f, 0.9f, -0.1f, -0.4f, 0.2f, -0.8f, 1.0f, 1.0f, 0.1f, 0.1f, -0.2f, 0.0f, -0.4f, -0.3f, -0.8f, 0.7f, -0.9f, -0.3f, -0.3f, -2.8f, 1.0f, 1.4f, 0.0f, -2.6f, 1.1f, -1.1f, 0.5f, 0.1f, -0.4f, -1.5f, 0.0f, 0.3f, -0.3f, -0.2f, 0.7f, -0.8f, -0.1f, 0.5f, 0.7f, 1.4f, -1.2f, -1.0f, -0.6f, 0.2f, 1.1f, -0.9f, 0.7f, -0.4f, 0.0f, 0.0f, -0.2f, -0.2f, 0.1f, 0.0f, 0.0f, -0.7f, -0.7f, -1.4f, -0.9f, -0.5f, -0.6f, 0.4f, 0.3f, 0.0f, 0.9f, -0.2f, 0.7f, 1.2f, 0.5f, 0.8f, -0.5f, 1.0f, 0.2f, -0.5f, 1.3f, -0.5f, 0.3f, 1.2f, -0.3f, -0.1f, 1.3f, 0.2f, 0.6f, -1.4f, -0.1f, -0.2f, -0.4f, -0.9f, 1.2f, -0.9f, -0.2f, -1.2f, -1.0f, -0.2f, -1.6f, 2.1f, -0.6f, -0.2f, -0.3f, 0.5f, 0.9f, -0.4f, 0.0f, -0.1f, 0.1f, -0.6f, -1.0f, -0.7f, 0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 4, 4, 16}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.21f, 0.78f, 0.57f, 0.795f, 0.66f, 0.915f, 0.615f, 0.27f, 0.69f, 0.645f, 0.945f, 0.465f, 0.345f, 0.855f, 0.555f, 0.48f, 0.6f, 0.735f, 0.63f, 0.495f, 0.03f, 0.12f, 0.225f, 0.24f, 0.285f, 0.51f, 0.315f, 0.435f, 0.255f, 0.585f, 0.06f, 0.9f, 0.75f, 0.18f, 0.45f, 0.36f, 0.09f, 0.405f, 0.15f, 0.0f, 0.195f, 0.075f, 0.81f, 0.87f, 0.93f, 0.39f, 0.165f, 0.825f, 0.525f, 0.765f, 0.105f, 0.54f, 0.705f, 0.675f, 0.3f, 0.42f, 0.045f, 0.33f, 0.015f, 0.84f, 0.135f, 0.72f, 0.375f, 0.495f, 0.315f, 0.195f, 0.24f, 0.21f, 0.54f, 0.78f, 0.72f, 0.045f, 0.93f, 0.27f, 0.735f, 0.135f, 0.09f, 0.81f, 0.705f, 0.39f, 0.885f, 0.42f, 0.945f, 0.9f, 0.225f, 0.75f, 0.3f, 0.375f, 0.63f, 0.825f, 0.675f, 0.015f, 0.48f, 0.645f, 0.615f, 0.33f, 0.465f, 0.66f, 0.6f, 0.075f, 0.84f, 0.285f, 0.57f, 0.585f, 0.165f, 0.06f, 0.36f, 0.795f, 0.855f, 0.105f, 0.45f, 0.0f, 0.87f, 0.525f, 0.255f, 0.69f, 0.555f, 0.15f, 0.345f, 0.03f, 0.915f, 0.405f, 0.435f, 0.765f, 0.12f, 0.51f, 0.18f}}, {1, {-1.9f, 0.4f, 1.4f, 0.5f, -1.5f, -0.2f, 0.3f, 1.2f, 0.0f, -0.6f, 0.4f, -1.3f, 0.8f, 0.9f, -0.2f, 0.8f, -0.2f, 0.0f, 0.4f, 0.1f, -0.2f, -1.6f, -0.6f, -0.1f, -1.0f, 0.6f, 0.5f, -0.2f, -1.7f, -1.4f, 0.5f, -0.1f, -1.5f, 1.3f, -0.7f, -0.9f, 0.9f, 0.2f, -0.2f, 0.0f, -0.7f, 0.3f, -0.4f, -0.3f, -0.5f, -0.3f, 1.0f, -0.7f, 1.2f, -0.3f, 0.0f, 0.3f, -0.7f, 1.0f, -0.2f, -0.6f, -1.3f, 0.0f, 0.3f, 0.1f, 0.4f, 0.2f, 2.4f, 0.0f, 0.1f, 0.0f, 0.7f, -0.9f, 0.1f, -0.4f, 0.3f, -0.3f, -0.7f, 0.1f, 0.7f, 0.0f, -0.3f, 1.6f, 0.0f, 1.1f, 0.4f, -0.7f, -0.9f, 0.0f, 0.0f, 0.4f, -0.6f, 0.4f, -1.9f, -1.2f, 0.0f, -0.3f, 0.2f, 0.0f, 0.1f, 0.8f, 0.0f, 0.9f, -1.7f, 0.3f, 0.7f, -0.7f, 0.7f, 1.2f, -0.4f, -0.1f, -0.6f, 0.6f, -0.4f, -0.2f, 0.3f, -0.5f, 0.0f, 1.0f, -0.1f, -0.3f, -0.8f, 0.1f, -1.2f, -2.4f, 0.1f, 1.4f, 0.4f, 0.1f, -1.1f, 0.4f, -0.4f, -0.2f, 0.1f, 0.0f, 0.7f, 0.1f, -1.3f, 0.1f, -0.4f, -0.2f, 0.2f, 0.1f, -0.8f, 0.0f, -1.4f, 2.0f, -0.6f, -0.5f, 0.0f, 1.0f, -1.4f, -1.1f, 0.6f, -0.7f, 0.4f, 1.1f, -1.1f, 1.6f, -0.3f, 0.0f, -0.7f, 0.3f, -1.3f, 0.0f, 0.0f, 0.0f, -0.3f, 0.0f, -1.1f, -1.5f, 0.9f, -1.4f, -0.7f, 0.1f, -1.4f, 0.9f, 0.1f, 0.2f, -0.1f, -1.7f, 0.2f, -0.3f, -0.9f, 1.1f, 0.1f, 1.0f, 1.0f, -0.9f, 0.7f, 0.0f, -0.3f, 0.2f, -0.8f, -0.5f, 0.6f, -1.2f, 1.0f, 0.6f, 0.0f, -1.6f, 0.1f, -1.2f, 0.7f, 0.8f, 0.5f, -0.2f, -0.8f, -1.3f, -0.3f, 0.0f, 0.0f, 0.3f, -0.6f, -0.3f, 1.3f, 0.1f, 2.2f, 1.2f, -1.1f, 0.1f, 1.2f, 1.2f, 1.3f, -0.9f, 0.1f, -0.5f, 0.1f, -0.7f, -1.3f, 1.3f, 0.1f, 2.0f, 0.0f, 0.2f, 0.6f, 0.0f, -0.1f, -0.4f, -0.5f, 0.1f, -0.6f, -0.3f, 0.2f, -0.4f, -0.4f, -0.7f, -1.8f, 0.4f, -0.7f, 0.4f, 1.4f, -0.3f, 0.8f, 0.0f, 0.4f, -0.1f, -1.0f, 0.2f, 0.5f, -0.6f, -1.1f, 0.2f, 1.6f, -0.2f, -0.4f, -0.9f, 0.0f, 0.3f, 0.0f, 0.3f, -0.3f, 0.3f, 0.3f, 1.9f, 0.3f, -0.5f, -0.8f, -1.3f, -0.8f, 0.2f, 0.2f, -0.4f, -0.3f, 0.6f, 0.2f, -0.2f, 1.2f, 0.0f, 0.0f, -0.3f, 0.3f, -1.5f, -1.0f, -0.3f, -0.7f, -0.3f, -0.4f, -1.0f, -0.6f, -0.7f, -0.2f, 0.6f, -0.3f, 0.5f, -0.2f, 0.3f, -0.5f, -1.7f, 0.0f, -0.7f, -0.1f, -1.5f, -0.9f, 0.6f, 0.3f, -0.1f, 0.2f, 0.5f, 0.6f, -0.8f, -0.3f, 0.6f, 0.9f, -0.3f, 0.1f, -1.7f, -1.5f, 0.0f, -0.1f, -0.3f, 0.7f, -0.3f, -0.4f, 0.0f, -0.4f, -0.3f, 0.1f, 1.1f, 1.8f, -0.9f, 0.6f, 0.5f, 0.2f, -0.7f, 0.2f, 0.1f, 1.2f, 2.2f, 0.3f, 0.6f, 0.4f, 0.1f, 0.2f, 0.0f, -1.1f, -0.2f, -0.7f, 0.0f, -1.2f, 0.6f, -0.6f, -0.2f, -0.4f, 0.0f, 0.7f, -1.2f, 0.8f, 0.0f, -0.3f, 0.2f, 0.6f, -1.0f, -0.1f, -0.1f, 0.0f, -0.4f, -0.2f, 0.4f, -1.4f, 0.3f, 0.1f, 1.3f, -0.2f, -0.7f, 0.6f, 0.7f, 0.6f, 0.1f, -0.4f, 0.1f, -0.2f, -0.8f, 0.0f, -1.3f, 1.2f, 1.4f, 1.1f, 0.5f, 0.3f, 0.0f, 0.1f, -0.4f, 0.5f, -0.1f, -0.5f, 0.3f, -0.7f, 0.9f, -0.1f, -0.4f, 0.2f, -0.8f, 1.0f, 1.0f, 0.1f, 0.1f, -0.2f, 0.0f, -0.4f, -0.3f, -0.8f, 0.7f, -0.9f, -0.3f, -0.3f, -2.8f, 1.0f, 1.4f, 0.0f, -2.6f, 1.1f, -1.1f, 0.5f, 0.1f, -0.4f, -1.5f, 0.0f, 0.3f, -0.3f, -0.2f, 0.7f, -0.8f, -0.1f, 0.5f, 0.7f, 1.4f, -1.2f, -1.0f, -0.6f, 0.2f, 1.1f, -0.9f, 0.7f, -0.4f, 0.0f, 0.0f, -0.2f, -0.2f, 0.1f, 0.0f, 0.0f, -0.7f, -0.7f, -1.4f, -0.9f, -0.5f, -0.6f, 0.4f, 0.3f, 0.0f, 0.9f, -0.2f, 0.7f, 1.2f, 0.5f, 0.8f, -0.5f, 1.0f, 0.2f, -0.5f, 1.3f, -0.5f, 0.3f, 1.2f, -0.3f, -0.1f, 1.3f, 0.2f, 0.6f, -1.4f, -0.1f, -0.2f, -0.4f, -0.9f, 1.2f, -0.9f, -0.2f, -1.2f, -1.0f, -0.2f, -1.6f, 2.1f, -0.6f, -0.2f, -0.3f, 0.5f, 0.9f, -0.4f, 0.0f, -0.1f, 0.1f, -0.6f, -1.0f, -0.7f, 0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nhwc_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_nhwc_float16_2() {
static std::vector<MixedTypedExample> examples_nhwc_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 4, 4, 16}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8849999904632568f, 0.20999999344348907f, 0.7799999713897705f, 0.5699999928474426f, 0.7950000166893005f, 0.6600000262260437f, 0.9150000214576721f, 0.6150000095367432f, 0.27000001072883606f, 0.6899999976158142f, 0.6449999809265137f, 0.9449999928474426f, 0.4650000035762787f, 0.3449999988079071f, 0.8550000190734863f, 0.5550000071525574f, 0.47999998927116394f, 0.6000000238418579f, 0.7350000143051147f, 0.6299999952316284f, 0.4950000047683716f, 0.029999999329447746f, 0.11999999731779099f, 0.22499999403953552f, 0.23999999463558197f, 0.2849999964237213f, 0.5099999904632568f, 0.3149999976158142f, 0.4350000023841858f, 0.2549999952316284f, 0.5849999785423279f, 0.05999999865889549f, 0.8999999761581421f, 0.75f, 0.18000000715255737f, 0.44999998807907104f, 0.36000001430511475f, 0.09000000357627869f, 0.4050000011920929f, 0.15000000596046448f, 0.0f, 0.19499999284744263f, 0.07500000298023224f, 0.8100000023841858f, 0.8700000047683716f, 0.9300000071525574f, 0.38999998569488525f, 0.16500000655651093f, 0.824999988079071f, 0.5249999761581421f, 0.7649999856948853f, 0.10499999672174454f, 0.5400000214576721f, 0.7049999833106995f, 0.675000011920929f, 0.30000001192092896f, 0.41999998688697815f, 0.04500000178813934f, 0.33000001311302185f, 0.014999999664723873f, 0.8399999737739563f, 0.13500000536441803f, 0.7200000286102295f, 0.375f, 0.4950000047683716f, 0.3149999976158142f, 0.19499999284744263f, 0.23999999463558197f, 0.20999999344348907f, 0.5400000214576721f, 0.7799999713897705f, 0.7200000286102295f, 0.04500000178813934f, 0.9300000071525574f, 0.27000001072883606f, 0.7350000143051147f, 0.13500000536441803f, 0.09000000357627869f, 0.8100000023841858f, 0.7049999833106995f, 0.38999998569488525f, 0.8849999904632568f, 0.41999998688697815f, 0.9449999928474426f, 0.8999999761581421f, 0.22499999403953552f, 0.75f, 0.30000001192092896f, 0.375f, 0.6299999952316284f, 0.824999988079071f, 0.675000011920929f, 0.014999999664723873f, 0.47999998927116394f, 0.6449999809265137f, 0.6150000095367432f, 0.33000001311302185f, 0.4650000035762787f, 0.6600000262260437f, 0.6000000238418579f, 0.07500000298023224f, 0.8399999737739563f, 0.2849999964237213f, 0.5699999928474426f, 0.5849999785423279f, 0.16500000655651093f, 0.05999999865889549f, 0.36000001430511475f, 0.7950000166893005f, 0.8550000190734863f, 0.10499999672174454f, 0.44999998807907104f, 0.0f, 0.8700000047683716f, 0.5249999761581421f, 0.2549999952316284f, 0.6899999976158142f, 0.5550000071525574f, 0.15000000596046448f, 0.3449999988079071f, 0.029999999329447746f, 0.9150000214576721f, 0.4050000011920929f, 0.4350000023841858f, 0.7649999856948853f, 0.11999999731779099f, 0.5099999904632568f, 0.18000000715255737f}}, {1, {-1.899999976158142f, 0.4000000059604645f, 1.399999976158142f, 0.5f, -1.5f, -0.20000000298023224f, 0.30000001192092896f, 1.2000000476837158f, 0.0f, -0.6000000238418579f, 0.4000000059604645f, -1.2999999523162842f, 0.800000011920929f, 0.8999999761581421f, -0.20000000298023224f, 0.800000011920929f, -0.20000000298023224f, 0.0f, 0.4000000059604645f, 0.10000000149011612f, -0.20000000298023224f, -1.600000023841858f, -0.6000000238418579f, -0.10000000149011612f, -1.0f, 0.6000000238418579f, 0.5f, -0.20000000298023224f, -1.7000000476837158f, -1.399999976158142f, 0.5f, -0.10000000149011612f, -1.5f, 1.2999999523162842f, -0.699999988079071f, -0.8999999761581421f, 0.8999999761581421f, 0.20000000298023224f, -0.20000000298023224f, 0.0f, -0.699999988079071f, 0.30000001192092896f, -0.4000000059604645f, -0.30000001192092896f, -0.5f, -0.30000001192092896f, 1.0f, -0.699999988079071f, 1.2000000476837158f, -0.30000001192092896f, 0.0f, 0.30000001192092896f, -0.699999988079071f, 1.0f, -0.20000000298023224f, -0.6000000238418579f, -1.2999999523162842f, 0.0f, 0.30000001192092896f, 0.10000000149011612f, 0.4000000059604645f, 0.20000000298023224f, 2.4000000953674316f, 0.0f, 0.10000000149011612f, 0.0f, 0.699999988079071f, -0.8999999761581421f, 0.10000000149011612f, -0.4000000059604645f, 0.30000001192092896f, -0.30000001192092896f, -0.699999988079071f, 0.10000000149011612f, 0.699999988079071f, 0.0f, -0.30000001192092896f, 1.600000023841858f, 0.0f, 1.100000023841858f, 0.4000000059604645f, -0.699999988079071f, -0.8999999761581421f, 0.0f, 0.0f, 0.4000000059604645f, -0.6000000238418579f, 0.4000000059604645f, -1.899999976158142f, -1.2000000476837158f, 0.0f, -0.30000001192092896f, 0.20000000298023224f, 0.0f, 0.10000000149011612f, 0.800000011920929f, 0.0f, 0.8999999761581421f, -1.7000000476837158f, 0.30000001192092896f, 0.699999988079071f, -0.699999988079071f, 0.699999988079071f, 1.2000000476837158f, -0.4000000059604645f, -0.10000000149011612f, -0.6000000238418579f, 0.6000000238418579f, -0.4000000059604645f, -0.20000000298023224f, 0.30000001192092896f, -0.5f, 0.0f, 1.0f, -0.10000000149011612f, -0.30000001192092896f, -0.800000011920929f, 0.10000000149011612f, -1.2000000476837158f, -2.4000000953674316f, 0.10000000149011612f, 1.399999976158142f, 0.4000000059604645f, 0.10000000149011612f, -1.100000023841858f, 0.4000000059604645f, -0.4000000059604645f, -0.20000000298023224f, 0.10000000149011612f, 0.0f, 0.699999988079071f, 0.10000000149011612f, -1.2999999523162842f, 0.10000000149011612f, -0.4000000059604645f, -0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, -0.800000011920929f, 0.0f, -1.399999976158142f, 2.0f, -0.6000000238418579f, -0.5f, 0.0f, 1.0f, -1.399999976158142f, -1.100000023841858f, 0.6000000238418579f, -0.699999988079071f, 0.4000000059604645f, 1.100000023841858f, -1.100000023841858f, 1.600000023841858f, -0.30000001192092896f, 0.0f, -0.699999988079071f, 0.30000001192092896f, -1.2999999523162842f, 0.0f, 0.0f, 0.0f, -0.30000001192092896f, 0.0f, -1.100000023841858f, -1.5f, 0.8999999761581421f, -1.399999976158142f, -0.699999988079071f, 0.10000000149011612f, -1.399999976158142f, 0.8999999761581421f, 0.10000000149011612f, 0.20000000298023224f, -0.10000000149011612f, -1.7000000476837158f, 0.20000000298023224f, -0.30000001192092896f, -0.8999999761581421f, 1.100000023841858f, 0.10000000149011612f, 1.0f, 1.0f, -0.8999999761581421f, 0.699999988079071f, 0.0f, -0.30000001192092896f, 0.20000000298023224f, -0.800000011920929f, -0.5f, 0.6000000238418579f, -1.2000000476837158f, 1.0f, 0.6000000238418579f, 0.0f, -1.600000023841858f, 0.10000000149011612f, -1.2000000476837158f, 0.699999988079071f, 0.800000011920929f, 0.5f, -0.20000000298023224f, -0.800000011920929f, -1.2999999523162842f, -0.30000001192092896f, 0.0f, 0.0f, 0.30000001192092896f, -0.6000000238418579f, -0.30000001192092896f, 1.2999999523162842f, 0.10000000149011612f, 2.200000047683716f, 1.2000000476837158f, -1.100000023841858f, 0.10000000149011612f, 1.2000000476837158f, 1.2000000476837158f, 1.2999999523162842f, -0.8999999761581421f, 0.10000000149011612f, -0.5f, 0.10000000149011612f, -0.699999988079071f, -1.2999999523162842f, 1.2999999523162842f, 0.10000000149011612f, 2.0f, 0.0f, 0.20000000298023224f, 0.6000000238418579f, 0.0f, -0.10000000149011612f, -0.4000000059604645f, -0.5f, 0.10000000149011612f, -0.6000000238418579f, -0.30000001192092896f, 0.20000000298023224f, -0.4000000059604645f, -0.4000000059604645f, -0.699999988079071f, -1.7999999523162842f, 0.4000000059604645f, -0.699999988079071f, 0.4000000059604645f, 1.399999976158142f, -0.30000001192092896f, 0.800000011920929f, 0.0f, 0.4000000059604645f, -0.10000000149011612f, -1.0f, 0.20000000298023224f, 0.5f, -0.6000000238418579f, -1.100000023841858f, 0.20000000298023224f, 1.600000023841858f, -0.20000000298023224f, -0.4000000059604645f, -0.8999999761581421f, 0.0f, 0.30000001192092896f, 0.0f, 0.30000001192092896f, -0.30000001192092896f, 0.30000001192092896f, 0.30000001192092896f, 1.899999976158142f, 0.30000001192092896f, -0.5f, -0.800000011920929f, -1.2999999523162842f, -0.800000011920929f, 0.20000000298023224f, 0.20000000298023224f, -0.4000000059604645f, -0.30000001192092896f, 0.6000000238418579f, 0.20000000298023224f, -0.20000000298023224f, 1.2000000476837158f, 0.0f, 0.0f, -0.30000001192092896f, 0.30000001192092896f, -1.5f, -1.0f, -0.30000001192092896f, -0.699999988079071f, -0.30000001192092896f, -0.4000000059604645f, -1.0f, -0.6000000238418579f, -0.699999988079071f, -0.20000000298023224f, 0.6000000238418579f, -0.30000001192092896f, 0.5f, -0.20000000298023224f, 0.30000001192092896f, -0.5f, -1.7000000476837158f, 0.0f, -0.699999988079071f, -0.10000000149011612f, -1.5f, -0.8999999761581421f, 0.6000000238418579f, 0.30000001192092896f, -0.10000000149011612f, 0.20000000298023224f, 0.5f, 0.6000000238418579f, -0.800000011920929f, -0.30000001192092896f, 0.6000000238418579f, 0.8999999761581421f, -0.30000001192092896f, 0.10000000149011612f, -1.7000000476837158f, -1.5f, 0.0f, -0.10000000149011612f, -0.30000001192092896f, 0.699999988079071f, -0.30000001192092896f, -0.4000000059604645f, 0.0f, -0.4000000059604645f, -0.30000001192092896f, 0.10000000149011612f, 1.100000023841858f, 1.7999999523162842f, -0.8999999761581421f, 0.6000000238418579f, 0.5f, 0.20000000298023224f, -0.699999988079071f, 0.20000000298023224f, 0.10000000149011612f, 1.2000000476837158f, 2.200000047683716f, 0.30000001192092896f, 0.6000000238418579f, 0.4000000059604645f, 0.10000000149011612f, 0.20000000298023224f, 0.0f, -1.100000023841858f, -0.20000000298023224f, -0.699999988079071f, 0.0f, -1.2000000476837158f, 0.6000000238418579f, -0.6000000238418579f, -0.20000000298023224f, -0.4000000059604645f, 0.0f, 0.699999988079071f, -1.2000000476837158f, 0.800000011920929f, 0.0f, -0.30000001192092896f, 0.20000000298023224f, 0.6000000238418579f, -1.0f, -0.10000000149011612f, -0.10000000149011612f, 0.0f, -0.4000000059604645f, -0.20000000298023224f, 0.4000000059604645f, -1.399999976158142f, 0.30000001192092896f, 0.10000000149011612f, 1.2999999523162842f, -0.20000000298023224f, -0.699999988079071f, 0.6000000238418579f, 0.699999988079071f, 0.6000000238418579f, 0.10000000149011612f, -0.4000000059604645f, 0.10000000149011612f, -0.20000000298023224f, -0.800000011920929f, 0.0f, -1.2999999523162842f, 1.2000000476837158f, 1.399999976158142f, 1.100000023841858f, 0.5f, 0.30000001192092896f, 0.0f, 0.10000000149011612f, -0.4000000059604645f, 0.5f, -0.10000000149011612f, -0.5f, 0.30000001192092896f, -0.699999988079071f, 0.8999999761581421f, -0.10000000149011612f, -0.4000000059604645f, 0.20000000298023224f, -0.800000011920929f, 1.0f, 1.0f, 0.10000000149011612f, 0.10000000149011612f, -0.20000000298023224f, 0.0f, -0.4000000059604645f, -0.30000001192092896f, -0.800000011920929f, 0.699999988079071f, -0.8999999761581421f, -0.30000001192092896f, -0.30000001192092896f, -2.799999952316284f, 1.0f, 1.399999976158142f, 0.0f, -2.5999999046325684f, 1.100000023841858f, -1.100000023841858f, 0.5f, 0.10000000149011612f, -0.4000000059604645f, -1.5f, 0.0f, 0.30000001192092896f, -0.30000001192092896f, -0.20000000298023224f, 0.699999988079071f, -0.800000011920929f, -0.10000000149011612f, 0.5f, 0.699999988079071f, 1.399999976158142f, -1.2000000476837158f, -1.0f, -0.6000000238418579f, 0.20000000298023224f, 1.100000023841858f, -0.8999999761581421f, 0.699999988079071f, -0.4000000059604645f, 0.0f, 0.0f, -0.20000000298023224f, -0.20000000298023224f, 0.10000000149011612f, 0.0f, 0.0f, -0.699999988079071f, -0.699999988079071f, -1.399999976158142f, -0.8999999761581421f, -0.5f, -0.6000000238418579f, 0.4000000059604645f, 0.30000001192092896f, 0.0f, 0.8999999761581421f, -0.20000000298023224f, 0.699999988079071f, 1.2000000476837158f, 0.5f, 0.800000011920929f, -0.5f, 1.0f, 0.20000000298023224f, -0.5f, 1.2999999523162842f, -0.5f, 0.30000001192092896f, 1.2000000476837158f, -0.30000001192092896f, -0.10000000149011612f, 1.2999999523162842f, 0.20000000298023224f, 0.6000000238418579f, -1.399999976158142f, -0.10000000149011612f, -0.20000000298023224f, -0.4000000059604645f, -0.8999999761581421f, 1.2000000476837158f, -0.8999999761581421f, -0.20000000298023224f, -1.2000000476837158f, -1.0f, -0.20000000298023224f, -1.600000023841858f, 2.0999999046325684f, -0.6000000238418579f, -0.20000000298023224f, -0.30000001192092896f, 0.5f, 0.8999999761581421f, -0.4000000059604645f, 0.0f, -0.10000000149011612f, 0.10000000149011612f, -0.6000000238418579f, -1.0f, -0.699999988079071f, 0.20000000298023224f, -0.20000000298023224f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.9449999928474426f, 0.9300000071525574f, 0.9150000214576721f, 0.8999999761581421f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7950000166893005f, 0.7799999713897705f, 0.7649999856948853f, 0.75f, 0.7350000143051147f, 0.7200000286102295f, 0.7049999833106995f, 0.6899999976158142f, 0.675000011920929f, 0.9449999928474426f, 0.9150000214576721f, 0.8999999761581421f, 0.8849999904632568f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7799999713897705f, 0.7350000143051147f, 0.7200000286102295f, 0.6299999952316284f, 0.6000000238418579f, 0.5849999785423279f, 0.5400000214576721f}}, {1, {16.84515380859375f, 2.517073392868042f, 33.15484619140625f, 7.482926368713379f, 32.96343994140625f, 40.74744415283203f, 43.83656311035156f, 47.25255584716797f, 0.0f, 9.143808364868164f, 16.243606567382812f, 14.056192398071289f, 0.0f, 25.789657592773438f, 25.71002197265625f, 30.210342407226562f, 37.947444915771484f, 20.791667938232422f, 44.45255661010742f, 32.80833053588867f, 30.27760887145996f, 32.21635055541992f, 32.92238998413086f, 38.183650970458984f, 25.885488510131836f, 29.08658218383789f, 31.314512252807617f, 30.91341781616211f, 2.8654022216796875f, 5.789658069610596f, 26.73459815979004f, 10.210342407226562f, 0.5408763885498047f, 3.582404136657715f, 15.459123611450195f, 5.217595100402832f, 10.753355026245117f, 35.98240280151367f, 15.246644973754883f, 37.61759567260742f, 1.459360122680664f, 23.050153732299805f, 4.1406402587890625f, 36.149845123291016f, 0.0f, 15.600000381469727f, 11.068763732910156f, 21.600000381469727f, 38.54087829589844f, 35.28548812866211f, 53.45912170410156f, 40.71451187133789f, 26.13425636291504f, 48.35863494873047f, 27.465742111206055f, 64.0f, 29.962539672851562f, 3.1999998092651367f, 33.23746109008789f, 19.200000762939453f, 11.65351676940918f, 43.98029327392578f, 48.34648132324219f, 46.419708251953125f, 0.0f, 26.967151641845703f, 26.74894142150879f, 31.032848358154297f, 28.59032440185547f, 9.050153732299805f, 32.0f, 22.14984703063965f, 17.828777313232422f, 19.0068302154541f, 32.0f, 20.9931697845459f, 3.5724945068359375f, 7.273454189300537f, 11.6275053024292f, 19.126544952392578f, 4.989657878875732f, 26.799999237060547f, 9.410341262817383f, 32.0f, 15.157195091247559f, 18.005369186401367f, 20.04280662536621f, 25.194631576538086f, 30.889404296875f, 9.652012825012207f, 32.0f, 12.347987174987793f, 3.3994140625f, 3.8000001907348633f, 32.0f, 9.800000190734863f, 24.98040771484375f, 10.08658218383789f, 28.619590759277344f, 11.91341781616211f, 13.950423240661621f, 3.8843491077423096f, 22.049575805664062f, 6.1156511306762695f, 24.259361267089844f, 6.800000190734863f, 26.94063949584961f, 22.799999237060547f, 3.653836727142334f, 19.475812911987305f, 13.546163558959961f, 28.524187088012695f, 11.947443008422852f, 29.318363189697266f, 18.452556610107422f, 32.0f, 17.318363189697266f, 0.0f, 20.281635284423828f, 16.176950454711914f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nhwc_float16_2;
};

std::vector<MixedTypedExample>& get_examples_nchw_2() {
static std::vector<MixedTypedExample> examples_nchw_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 16, 4, 4}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.795f, 0.27f, 0.465f, 0.48f, 0.495f, 0.24f, 0.435f, 0.9f, 0.36f, 0.0f, 0.87f, 0.825f, 0.54f, 0.42f, 0.84f, 0.21f, 0.66f, 0.69f, 0.345f, 0.6f, 0.03f, 0.285f, 0.255f, 0.75f, 0.09f, 0.195f, 0.93f, 0.525f, 0.705f, 0.045f, 0.135f, 0.78f, 0.915f, 0.645f, 0.855f, 0.735f, 0.12f, 0.51f, 0.585f, 0.18f, 0.405f, 0.075f, 0.39f, 0.765f, 0.675f, 0.33f, 0.72f, 0.57f, 0.615f, 0.945f, 0.555f, 0.63f, 0.225f, 0.315f, 0.06f, 0.45f, 0.15f, 0.81f, 0.165f, 0.105f, 0.3f, 0.015f, 0.375f, 0.495f, 0.21f, 0.045f, 0.135f, 0.39f, 0.9f, 0.375f, 0.015f, 0.33f, 0.075f, 0.585f, 0.795f, 0.0f, 0.69f, 0.03f, 0.765f, 0.315f, 0.54f, 0.93f, 0.09f, 0.885f, 0.225f, 0.63f, 0.48f, 0.465f, 0.84f, 0.165f, 0.855f, 0.87f, 0.555f, 0.915f, 0.12f, 0.195f, 0.78f, 0.27f, 0.81f, 0.42f, 0.75f, 0.825f, 0.645f, 0.66f, 0.285f, 0.06f, 0.105f, 0.525f, 0.15f, 0.405f, 0.51f, 0.24f, 0.72f, 0.735f, 0.705f, 0.945f, 0.3f, 0.675f, 0.615f, 0.6f, 0.57f, 0.36f, 0.45f, 0.255f, 0.345f, 0.435f, 0.18f}}, {1, {-1.9f, -0.2f, -1.5f, 1.2f, 0.1f, 0.4f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.2f, 1.0f, -0.6f, -1.3f, -0.4f, 0.4f, 0.0f, 1.3f, -0.3f, 0.0f, -0.7f, 0.9f, 1.0f, 0.0f, 1.0f, 0.0f, -0.3f, 0.6f, -0.3f, 1.3f, -0.7f, 1.4f, 0.4f, -0.7f, 0.0f, 0.7f, -0.9f, -1.7f, -0.1f, 0.7f, -1.4f, -0.3f, -0.9f, 0.0f, 1.3f, 0.1f, -1.8f, 0.5f, 0.1f, -0.9f, 0.3f, -0.9f, 0.0f, 0.3f, -0.3f, 0.1f, -1.1f, 0.0f, 1.1f, -1.6f, 0.1f, 2.0f, 0.4f, -1.5f, -0.2f, 0.9f, -0.7f, 0.1f, 0.0f, 0.7f, -0.8f, -1.3f, 0.6f, -1.1f, 0.1f, 0.1f, 2.2f, 0.0f, -0.7f, -0.2f, -1.6f, 0.2f, 1.0f, -0.4f, 0.4f, -0.7f, 0.1f, 0.1f, -0.7f, -1.5f, 1.0f, -1.2f, 1.2f, 0.2f, 0.4f, 0.3f, -0.6f, -0.2f, -0.2f, 0.3f, -0.6f, 0.7f, -1.2f, -0.4f, 0.4f, 0.9f, 1.0f, 0.7f, -1.1f, 0.6f, 1.4f, 1.2f, -0.1f, 0.0f, -0.6f, -0.3f, 0.4f, 1.2f, -2.4f, -0.2f, 1.1f, -1.4f, -0.9f, 0.8f, 0.1f, 0.0f, -0.3f, 0.0f, -1.0f, -0.7f, -1.3f, -0.7f, -1.9f, -0.4f, 0.1f, 0.2f, -1.1f, -0.7f, 0.7f, 0.5f, 1.2f, -0.1f, 0.8f, -0.6f, 0.6f, 0.3f, 0.0f, 0.1f, -1.2f, -0.1f, 1.4f, 0.1f, 1.6f, 0.1f, 0.0f, -0.2f, 1.2f, -0.4f, 0.0f, 0.4f, 0.5f, -0.4f, 0.3f, 0.7f, 0.0f, -0.6f, 0.4f, -0.8f, -0.3f, -1.4f, -0.3f, -0.8f, 1.3f, -0.5f, 0.4f, -1.3f, -0.2f, -0.3f, 0.1f, 0.0f, -0.3f, 0.6f, 0.1f, 0.0f, 0.0f, 0.9f, 0.2f, -1.3f, -0.9f, 0.1f, -0.1f, 0.8f, -1.7f, -0.5f, 0.4f, -0.3f, 0.2f, -0.4f, -1.1f, -1.4f, -0.7f, 0.1f, -0.8f, -0.3f, 0.1f, -0.6f, -1.0f, 0.9f, -1.4f, -0.3f, 0.2f, 1.6f, 0.0f, -0.2f, 0.4f, 2.0f, 0.3f, 0.2f, -0.5f, 0.0f, -0.5f, -0.3f, 0.2f, -0.2f, 0.5f, 1.0f, 2.4f, 0.0f, 0.1f, 0.3f, -0.4f, -0.6f, -1.3f, -0.1f, 0.6f, 0.0f, 0.1f, 0.2f, 0.5f, 0.8f, -0.1f, -0.7f, 0.0f, 1.1f, 0.8f, -0.5f, -0.2f, -0.5f, 0.0f, -1.7f, -1.2f, 0.3f, -0.7f, -0.4f, -0.6f, -1.1f, -0.8f, -1.0f, 0.0f, 0.1f, 0.6f, -0.7f, -0.1f, -0.4f, -0.5f, -0.8f, 0.0f, 0.7f, 0.3f, -0.3f, -1.6f, 0.2f, -1.3f, -0.3f, -0.7f, -1.7f, 0.5f, 0.0f, -0.1f, 0.1f, 0.3f, 0.7f, 0.3f, -0.4f, 0.0f, -0.1f, 2.1f, 1.6f, -0.8f, -0.7f, -0.1f, -1.5f, 0.2f, -1.2f, 0.0f, -0.2f, -0.7f, -0.9f, -0.3f, 0.0f, 0.9f, 1.3f, -0.6f, -0.2f, 0.2f, -0.3f, -1.5f, 0.0f, -0.7f, 0.6f, -0.4f, -0.8f, 0.9f, -0.3f, -0.2f, 0.0f, -0.2f, 0.2f, -0.2f, -0.4f, 0.2f, -0.4f, -0.9f, -0.1f, 0.2f, -0.6f, -0.2f, 0.0f, -0.1f, -0.3f, 0.7f, -0.2f, 0.7f, 0.6f, -0.3f, -0.9f, -0.4f, -1.0f, 0.6f, -0.3f, 0.1f, -0.2f, 0.4f, -1.3f, -0.4f, -2.8f, -0.8f, -0.2f, 1.2f, -1.4f, 0.5f, 0.0f, -0.3f, -0.6f, 0.3f, 0.7f, 1.2f, -0.4f, -1.4f, 1.2f, 0.2f, 1.0f, -0.1f, 0.1f, 0.5f, -0.1f, 0.9f, 0.3f, 0.6f, -0.7f, -0.1f, -0.3f, 2.2f, 0.0f, 0.3f, 1.4f, -0.8f, 1.4f, 0.5f, 0.0f, 0.8f, -0.2f, -0.4f, 0.0f, 0.2f, -0.2f, 0.2f, -0.4f, 0.3f, 0.7f, 0.1f, 1.1f, 1.0f, 0.0f, 0.7f, 0.0f, -0.5f, -0.4f, 0.0f, 0.3f, -0.2f, 0.6f, 0.5f, 0.0f, 0.6f, -1.2f, 1.3f, 0.5f, 1.0f, -2.6f, 1.4f, -0.7f, 1.0f, -0.9f, -0.1f, -0.3f, 1.2f, -0.3f, 0.6f, -0.4f, 0.4f, 0.8f, -0.2f, 0.3f, 0.1f, 1.1f, -1.2f, -0.7f, 0.2f, 1.2f, 0.1f, 0.3f, 0.0f, 0.5f, -0.8f, -0.3f, 0.1f, 0.0f, -0.7f, 0.0f, 0.1f, -1.1f, -1.0f, -1.4f, -0.5f, -0.9f, -0.6f, 0.3f, 0.0f, -0.2f, -0.3f, 0.1f, 0.2f, -0.3f, 0.6f, 0.1f, -0.2f, 0.5f, -0.6f, -0.9f, 1.3f, -0.2f, -1.0f, 1.9f, -0.3f, 0.3f, 0.6f, 1.1f, 0.0f, 0.2f, 0.7f, -0.4f, 0.0f, 0.1f, 0.2f, -0.5f, -0.5f, -1.2f, -0.7f, 0.3f, 0.3f, -0.5f, 0.9f, 1.8f, -1.1f, 0.6f, 0.6f, 0.5f, -0.4f, -0.4f, 1.1f, -0.6f, 0.3f, -1.0f, 0.2f, -0.5f, -1.5f, -1.7f, -0.3f, -0.9f, -0.2f, -1.0f, 0.1f, -0.1f, -0.3f, -1.5f, -0.9f, 0.4f, 1.2f, -0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 16, 4, 4}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.795f, 0.27f, 0.465f, 0.48f, 0.495f, 0.24f, 0.435f, 0.9f, 0.36f, 0.0f, 0.87f, 0.825f, 0.54f, 0.42f, 0.84f, 0.21f, 0.66f, 0.69f, 0.345f, 0.6f, 0.03f, 0.285f, 0.255f, 0.75f, 0.09f, 0.195f, 0.93f, 0.525f, 0.705f, 0.045f, 0.135f, 0.78f, 0.915f, 0.645f, 0.855f, 0.735f, 0.12f, 0.51f, 0.585f, 0.18f, 0.405f, 0.075f, 0.39f, 0.765f, 0.675f, 0.33f, 0.72f, 0.57f, 0.615f, 0.945f, 0.555f, 0.63f, 0.225f, 0.315f, 0.06f, 0.45f, 0.15f, 0.81f, 0.165f, 0.105f, 0.3f, 0.015f, 0.375f, 0.495f, 0.21f, 0.045f, 0.135f, 0.39f, 0.9f, 0.375f, 0.015f, 0.33f, 0.075f, 0.585f, 0.795f, 0.0f, 0.69f, 0.03f, 0.765f, 0.315f, 0.54f, 0.93f, 0.09f, 0.885f, 0.225f, 0.63f, 0.48f, 0.465f, 0.84f, 0.165f, 0.855f, 0.87f, 0.555f, 0.915f, 0.12f, 0.195f, 0.78f, 0.27f, 0.81f, 0.42f, 0.75f, 0.825f, 0.645f, 0.66f, 0.285f, 0.06f, 0.105f, 0.525f, 0.15f, 0.405f, 0.51f, 0.24f, 0.72f, 0.735f, 0.705f, 0.945f, 0.3f, 0.675f, 0.615f, 0.6f, 0.57f, 0.36f, 0.45f, 0.255f, 0.345f, 0.435f, 0.18f}}, {1, {-1.9f, -0.2f, -1.5f, 1.2f, 0.1f, 0.4f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.2f, 1.0f, -0.6f, -1.3f, -0.4f, 0.4f, 0.0f, 1.3f, -0.3f, 0.0f, -0.7f, 0.9f, 1.0f, 0.0f, 1.0f, 0.0f, -0.3f, 0.6f, -0.3f, 1.3f, -0.7f, 1.4f, 0.4f, -0.7f, 0.0f, 0.7f, -0.9f, -1.7f, -0.1f, 0.7f, -1.4f, -0.3f, -0.9f, 0.0f, 1.3f, 0.1f, -1.8f, 0.5f, 0.1f, -0.9f, 0.3f, -0.9f, 0.0f, 0.3f, -0.3f, 0.1f, -1.1f, 0.0f, 1.1f, -1.6f, 0.1f, 2.0f, 0.4f, -1.5f, -0.2f, 0.9f, -0.7f, 0.1f, 0.0f, 0.7f, -0.8f, -1.3f, 0.6f, -1.1f, 0.1f, 0.1f, 2.2f, 0.0f, -0.7f, -0.2f, -1.6f, 0.2f, 1.0f, -0.4f, 0.4f, -0.7f, 0.1f, 0.1f, -0.7f, -1.5f, 1.0f, -1.2f, 1.2f, 0.2f, 0.4f, 0.3f, -0.6f, -0.2f, -0.2f, 0.3f, -0.6f, 0.7f, -1.2f, -0.4f, 0.4f, 0.9f, 1.0f, 0.7f, -1.1f, 0.6f, 1.4f, 1.2f, -0.1f, 0.0f, -0.6f, -0.3f, 0.4f, 1.2f, -2.4f, -0.2f, 1.1f, -1.4f, -0.9f, 0.8f, 0.1f, 0.0f, -0.3f, 0.0f, -1.0f, -0.7f, -1.3f, -0.7f, -1.9f, -0.4f, 0.1f, 0.2f, -1.1f, -0.7f, 0.7f, 0.5f, 1.2f, -0.1f, 0.8f, -0.6f, 0.6f, 0.3f, 0.0f, 0.1f, -1.2f, -0.1f, 1.4f, 0.1f, 1.6f, 0.1f, 0.0f, -0.2f, 1.2f, -0.4f, 0.0f, 0.4f, 0.5f, -0.4f, 0.3f, 0.7f, 0.0f, -0.6f, 0.4f, -0.8f, -0.3f, -1.4f, -0.3f, -0.8f, 1.3f, -0.5f, 0.4f, -1.3f, -0.2f, -0.3f, 0.1f, 0.0f, -0.3f, 0.6f, 0.1f, 0.0f, 0.0f, 0.9f, 0.2f, -1.3f, -0.9f, 0.1f, -0.1f, 0.8f, -1.7f, -0.5f, 0.4f, -0.3f, 0.2f, -0.4f, -1.1f, -1.4f, -0.7f, 0.1f, -0.8f, -0.3f, 0.1f, -0.6f, -1.0f, 0.9f, -1.4f, -0.3f, 0.2f, 1.6f, 0.0f, -0.2f, 0.4f, 2.0f, 0.3f, 0.2f, -0.5f, 0.0f, -0.5f, -0.3f, 0.2f, -0.2f, 0.5f, 1.0f, 2.4f, 0.0f, 0.1f, 0.3f, -0.4f, -0.6f, -1.3f, -0.1f, 0.6f, 0.0f, 0.1f, 0.2f, 0.5f, 0.8f, -0.1f, -0.7f, 0.0f, 1.1f, 0.8f, -0.5f, -0.2f, -0.5f, 0.0f, -1.7f, -1.2f, 0.3f, -0.7f, -0.4f, -0.6f, -1.1f, -0.8f, -1.0f, 0.0f, 0.1f, 0.6f, -0.7f, -0.1f, -0.4f, -0.5f, -0.8f, 0.0f, 0.7f, 0.3f, -0.3f, -1.6f, 0.2f, -1.3f, -0.3f, -0.7f, -1.7f, 0.5f, 0.0f, -0.1f, 0.1f, 0.3f, 0.7f, 0.3f, -0.4f, 0.0f, -0.1f, 2.1f, 1.6f, -0.8f, -0.7f, -0.1f, -1.5f, 0.2f, -1.2f, 0.0f, -0.2f, -0.7f, -0.9f, -0.3f, 0.0f, 0.9f, 1.3f, -0.6f, -0.2f, 0.2f, -0.3f, -1.5f, 0.0f, -0.7f, 0.6f, -0.4f, -0.8f, 0.9f, -0.3f, -0.2f, 0.0f, -0.2f, 0.2f, -0.2f, -0.4f, 0.2f, -0.4f, -0.9f, -0.1f, 0.2f, -0.6f, -0.2f, 0.0f, -0.1f, -0.3f, 0.7f, -0.2f, 0.7f, 0.6f, -0.3f, -0.9f, -0.4f, -1.0f, 0.6f, -0.3f, 0.1f, -0.2f, 0.4f, -1.3f, -0.4f, -2.8f, -0.8f, -0.2f, 1.2f, -1.4f, 0.5f, 0.0f, -0.3f, -0.6f, 0.3f, 0.7f, 1.2f, -0.4f, -1.4f, 1.2f, 0.2f, 1.0f, -0.1f, 0.1f, 0.5f, -0.1f, 0.9f, 0.3f, 0.6f, -0.7f, -0.1f, -0.3f, 2.2f, 0.0f, 0.3f, 1.4f, -0.8f, 1.4f, 0.5f, 0.0f, 0.8f, -0.2f, -0.4f, 0.0f, 0.2f, -0.2f, 0.2f, -0.4f, 0.3f, 0.7f, 0.1f, 1.1f, 1.0f, 0.0f, 0.7f, 0.0f, -0.5f, -0.4f, 0.0f, 0.3f, -0.2f, 0.6f, 0.5f, 0.0f, 0.6f, -1.2f, 1.3f, 0.5f, 1.0f, -2.6f, 1.4f, -0.7f, 1.0f, -0.9f, -0.1f, -0.3f, 1.2f, -0.3f, 0.6f, -0.4f, 0.4f, 0.8f, -0.2f, 0.3f, 0.1f, 1.1f, -1.2f, -0.7f, 0.2f, 1.2f, 0.1f, 0.3f, 0.0f, 0.5f, -0.8f, -0.3f, 0.1f, 0.0f, -0.7f, 0.0f, 0.1f, -1.1f, -1.0f, -1.4f, -0.5f, -0.9f, -0.6f, 0.3f, 0.0f, -0.2f, -0.3f, 0.1f, 0.2f, -0.3f, 0.6f, 0.1f, -0.2f, 0.5f, -0.6f, -0.9f, 1.3f, -0.2f, -1.0f, 1.9f, -0.3f, 0.3f, 0.6f, 1.1f, 0.0f, 0.2f, 0.7f, -0.4f, 0.0f, 0.1f, 0.2f, -0.5f, -0.5f, -1.2f, -0.7f, 0.3f, 0.3f, -0.5f, 0.9f, 1.8f, -1.1f, 0.6f, 0.6f, 0.5f, -0.4f, -0.4f, 1.1f, -0.6f, 0.3f, -1.0f, 0.2f, -0.5f, -1.5f, -1.7f, -0.3f, -0.9f, -0.2f, -1.0f, 0.1f, -0.1f, -0.3f, -1.5f, -0.9f, 0.4f, 1.2f, -0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nchw_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_nchw_float16_2() {
static std::vector<MixedTypedExample> examples_nchw_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 16, 4, 4}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8849999904632568f, 0.7950000166893005f, 0.27000001072883606f, 0.4650000035762787f, 0.47999998927116394f, 0.4950000047683716f, 0.23999999463558197f, 0.4350000023841858f, 0.8999999761581421f, 0.36000001430511475f, 0.0f, 0.8700000047683716f, 0.824999988079071f, 0.5400000214576721f, 0.41999998688697815f, 0.8399999737739563f, 0.20999999344348907f, 0.6600000262260437f, 0.6899999976158142f, 0.3449999988079071f, 0.6000000238418579f, 0.029999999329447746f, 0.2849999964237213f, 0.2549999952316284f, 0.75f, 0.09000000357627869f, 0.19499999284744263f, 0.9300000071525574f, 0.5249999761581421f, 0.7049999833106995f, 0.04500000178813934f, 0.13500000536441803f, 0.7799999713897705f, 0.9150000214576721f, 0.6449999809265137f, 0.8550000190734863f, 0.7350000143051147f, 0.11999999731779099f, 0.5099999904632568f, 0.5849999785423279f, 0.18000000715255737f, 0.4050000011920929f, 0.07500000298023224f, 0.38999998569488525f, 0.7649999856948853f, 0.675000011920929f, 0.33000001311302185f, 0.7200000286102295f, 0.5699999928474426f, 0.6150000095367432f, 0.9449999928474426f, 0.5550000071525574f, 0.6299999952316284f, 0.22499999403953552f, 0.3149999976158142f, 0.05999999865889549f, 0.44999998807907104f, 0.15000000596046448f, 0.8100000023841858f, 0.16500000655651093f, 0.10499999672174454f, 0.30000001192092896f, 0.014999999664723873f, 0.375f, 0.4950000047683716f, 0.20999999344348907f, 0.04500000178813934f, 0.13500000536441803f, 0.38999998569488525f, 0.8999999761581421f, 0.375f, 0.014999999664723873f, 0.33000001311302185f, 0.07500000298023224f, 0.5849999785423279f, 0.7950000166893005f, 0.0f, 0.6899999976158142f, 0.029999999329447746f, 0.7649999856948853f, 0.3149999976158142f, 0.5400000214576721f, 0.9300000071525574f, 0.09000000357627869f, 0.8849999904632568f, 0.22499999403953552f, 0.6299999952316284f, 0.47999998927116394f, 0.4650000035762787f, 0.8399999737739563f, 0.16500000655651093f, 0.8550000190734863f, 0.8700000047683716f, 0.5550000071525574f, 0.9150000214576721f, 0.11999999731779099f, 0.19499999284744263f, 0.7799999713897705f, 0.27000001072883606f, 0.8100000023841858f, 0.41999998688697815f, 0.75f, 0.824999988079071f, 0.6449999809265137f, 0.6600000262260437f, 0.2849999964237213f, 0.05999999865889549f, 0.10499999672174454f, 0.5249999761581421f, 0.15000000596046448f, 0.4050000011920929f, 0.5099999904632568f, 0.23999999463558197f, 0.7200000286102295f, 0.7350000143051147f, 0.7049999833106995f, 0.9449999928474426f, 0.30000001192092896f, 0.675000011920929f, 0.6150000095367432f, 0.6000000238418579f, 0.5699999928474426f, 0.36000001430511475f, 0.44999998807907104f, 0.2549999952316284f, 0.3449999988079071f, 0.4350000023841858f, 0.18000000715255737f}}, {1, {-1.899999976158142f, -0.20000000298023224f, -1.5f, 1.2000000476837158f, 0.10000000149011612f, 0.4000000059604645f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.20000000298023224f, 1.0f, -0.6000000238418579f, -1.2999999523162842f, -0.4000000059604645f, 0.4000000059604645f, 0.0f, 1.2999999523162842f, -0.30000001192092896f, 0.0f, -0.699999988079071f, 0.8999999761581421f, 1.0f, 0.0f, 1.0f, 0.0f, -0.30000001192092896f, 0.6000000238418579f, -0.30000001192092896f, 1.2999999523162842f, -0.699999988079071f, 1.399999976158142f, 0.4000000059604645f, -0.699999988079071f, 0.0f, 0.699999988079071f, -0.8999999761581421f, -1.7000000476837158f, -0.10000000149011612f, 0.699999988079071f, -1.399999976158142f, -0.30000001192092896f, -0.8999999761581421f, 0.0f, 1.2999999523162842f, 0.10000000149011612f, -1.7999999523162842f, 0.5f, 0.10000000149011612f, -0.8999999761581421f, 0.30000001192092896f, -0.8999999761581421f, 0.0f, 0.30000001192092896f, -0.30000001192092896f, 0.10000000149011612f, -1.100000023841858f, 0.0f, 1.100000023841858f, -1.600000023841858f, 0.10000000149011612f, 2.0f, 0.4000000059604645f, -1.5f, -0.20000000298023224f, 0.8999999761581421f, -0.699999988079071f, 0.10000000149011612f, 0.0f, 0.699999988079071f, -0.800000011920929f, -1.2999999523162842f, 0.6000000238418579f, -1.100000023841858f, 0.10000000149011612f, 0.10000000149011612f, 2.200000047683716f, 0.0f, -0.699999988079071f, -0.20000000298023224f, -1.600000023841858f, 0.20000000298023224f, 1.0f, -0.4000000059604645f, 0.4000000059604645f, -0.699999988079071f, 0.10000000149011612f, 0.10000000149011612f, -0.699999988079071f, -1.5f, 1.0f, -1.2000000476837158f, 1.2000000476837158f, 0.20000000298023224f, 0.4000000059604645f, 0.30000001192092896f, -0.6000000238418579f, -0.20000000298023224f, -0.20000000298023224f, 0.30000001192092896f, -0.6000000238418579f, 0.699999988079071f, -1.2000000476837158f, -0.4000000059604645f, 0.4000000059604645f, 0.8999999761581421f, 1.0f, 0.699999988079071f, -1.100000023841858f, 0.6000000238418579f, 1.399999976158142f, 1.2000000476837158f, -0.10000000149011612f, 0.0f, -0.6000000238418579f, -0.30000001192092896f, 0.4000000059604645f, 1.2000000476837158f, -2.4000000953674316f, -0.20000000298023224f, 1.100000023841858f, -1.399999976158142f, -0.8999999761581421f, 0.800000011920929f, 0.10000000149011612f, 0.0f, -0.30000001192092896f, 0.0f, -1.0f, -0.699999988079071f, -1.2999999523162842f, -0.699999988079071f, -1.899999976158142f, -0.4000000059604645f, 0.10000000149011612f, 0.20000000298023224f, -1.100000023841858f, -0.699999988079071f, 0.699999988079071f, 0.5f, 1.2000000476837158f, -0.10000000149011612f, 0.800000011920929f, -0.6000000238418579f, 0.6000000238418579f, 0.30000001192092896f, 0.0f, 0.10000000149011612f, -1.2000000476837158f, -0.10000000149011612f, 1.399999976158142f, 0.10000000149011612f, 1.600000023841858f, 0.10000000149011612f, 0.0f, -0.20000000298023224f, 1.2000000476837158f, -0.4000000059604645f, 0.0f, 0.4000000059604645f, 0.5f, -0.4000000059604645f, 0.30000001192092896f, 0.699999988079071f, 0.0f, -0.6000000238418579f, 0.4000000059604645f, -0.800000011920929f, -0.30000001192092896f, -1.399999976158142f, -0.30000001192092896f, -0.800000011920929f, 1.2999999523162842f, -0.5f, 0.4000000059604645f, -1.2999999523162842f, -0.20000000298023224f, -0.30000001192092896f, 0.10000000149011612f, 0.0f, -0.30000001192092896f, 0.6000000238418579f, 0.10000000149011612f, 0.0f, 0.0f, 0.8999999761581421f, 0.20000000298023224f, -1.2999999523162842f, -0.8999999761581421f, 0.10000000149011612f, -0.10000000149011612f, 0.800000011920929f, -1.7000000476837158f, -0.5f, 0.4000000059604645f, -0.30000001192092896f, 0.20000000298023224f, -0.4000000059604645f, -1.100000023841858f, -1.399999976158142f, -0.699999988079071f, 0.10000000149011612f, -0.800000011920929f, -0.30000001192092896f, 0.10000000149011612f, -0.6000000238418579f, -1.0f, 0.8999999761581421f, -1.399999976158142f, -0.30000001192092896f, 0.20000000298023224f, 1.600000023841858f, 0.0f, -0.20000000298023224f, 0.4000000059604645f, 2.0f, 0.30000001192092896f, 0.20000000298023224f, -0.5f, 0.0f, -0.5f, -0.30000001192092896f, 0.20000000298023224f, -0.20000000298023224f, 0.5f, 1.0f, 2.4000000953674316f, 0.0f, 0.10000000149011612f, 0.30000001192092896f, -0.4000000059604645f, -0.6000000238418579f, -1.2999999523162842f, -0.10000000149011612f, 0.6000000238418579f, 0.0f, 0.10000000149011612f, 0.20000000298023224f, 0.5f, 0.800000011920929f, -0.10000000149011612f, -0.699999988079071f, 0.0f, 1.100000023841858f, 0.800000011920929f, -0.5f, -0.20000000298023224f, -0.5f, 0.0f, -1.7000000476837158f, -1.2000000476837158f, 0.30000001192092896f, -0.699999988079071f, -0.4000000059604645f, -0.6000000238418579f, -1.100000023841858f, -0.800000011920929f, -1.0f, 0.0f, 0.10000000149011612f, 0.6000000238418579f, -0.699999988079071f, -0.10000000149011612f, -0.4000000059604645f, -0.5f, -0.800000011920929f, 0.0f, 0.699999988079071f, 0.30000001192092896f, -0.30000001192092896f, -1.600000023841858f, 0.20000000298023224f, -1.2999999523162842f, -0.30000001192092896f, -0.699999988079071f, -1.7000000476837158f, 0.5f, 0.0f, -0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, 0.699999988079071f, 0.30000001192092896f, -0.4000000059604645f, 0.0f, -0.10000000149011612f, 2.0999999046325684f, 1.600000023841858f, -0.800000011920929f, -0.699999988079071f, -0.10000000149011612f, -1.5f, 0.20000000298023224f, -1.2000000476837158f, 0.0f, -0.20000000298023224f, -0.699999988079071f, -0.8999999761581421f, -0.30000001192092896f, 0.0f, 0.8999999761581421f, 1.2999999523162842f, -0.6000000238418579f, -0.20000000298023224f, 0.20000000298023224f, -0.30000001192092896f, -1.5f, 0.0f, -0.699999988079071f, 0.6000000238418579f, -0.4000000059604645f, -0.800000011920929f, 0.8999999761581421f, -0.30000001192092896f, -0.20000000298023224f, 0.0f, -0.20000000298023224f, 0.20000000298023224f, -0.20000000298023224f, -0.4000000059604645f, 0.20000000298023224f, -0.4000000059604645f, -0.8999999761581421f, -0.10000000149011612f, 0.20000000298023224f, -0.6000000238418579f, -0.20000000298023224f, 0.0f, -0.10000000149011612f, -0.30000001192092896f, 0.699999988079071f, -0.20000000298023224f, 0.699999988079071f, 0.6000000238418579f, -0.30000001192092896f, -0.8999999761581421f, -0.4000000059604645f, -1.0f, 0.6000000238418579f, -0.30000001192092896f, 0.10000000149011612f, -0.20000000298023224f, 0.4000000059604645f, -1.2999999523162842f, -0.4000000059604645f, -2.799999952316284f, -0.800000011920929f, -0.20000000298023224f, 1.2000000476837158f, -1.399999976158142f, 0.5f, 0.0f, -0.30000001192092896f, -0.6000000238418579f, 0.30000001192092896f, 0.699999988079071f, 1.2000000476837158f, -0.4000000059604645f, -1.399999976158142f, 1.2000000476837158f, 0.20000000298023224f, 1.0f, -0.10000000149011612f, 0.10000000149011612f, 0.5f, -0.10000000149011612f, 0.8999999761581421f, 0.30000001192092896f, 0.6000000238418579f, -0.699999988079071f, -0.10000000149011612f, -0.30000001192092896f, 2.200000047683716f, 0.0f, 0.30000001192092896f, 1.399999976158142f, -0.800000011920929f, 1.399999976158142f, 0.5f, 0.0f, 0.800000011920929f, -0.20000000298023224f, -0.4000000059604645f, 0.0f, 0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, -0.4000000059604645f, 0.30000001192092896f, 0.699999988079071f, 0.10000000149011612f, 1.100000023841858f, 1.0f, 0.0f, 0.699999988079071f, 0.0f, -0.5f, -0.4000000059604645f, 0.0f, 0.30000001192092896f, -0.20000000298023224f, 0.6000000238418579f, 0.5f, 0.0f, 0.6000000238418579f, -1.2000000476837158f, 1.2999999523162842f, 0.5f, 1.0f, -2.5999999046325684f, 1.399999976158142f, -0.699999988079071f, 1.0f, -0.8999999761581421f, -0.10000000149011612f, -0.30000001192092896f, 1.2000000476837158f, -0.30000001192092896f, 0.6000000238418579f, -0.4000000059604645f, 0.4000000059604645f, 0.800000011920929f, -0.20000000298023224f, 0.30000001192092896f, 0.10000000149011612f, 1.100000023841858f, -1.2000000476837158f, -0.699999988079071f, 0.20000000298023224f, 1.2000000476837158f, 0.10000000149011612f, 0.30000001192092896f, 0.0f, 0.5f, -0.800000011920929f, -0.30000001192092896f, 0.10000000149011612f, 0.0f, -0.699999988079071f, 0.0f, 0.10000000149011612f, -1.100000023841858f, -1.0f, -1.399999976158142f, -0.5f, -0.8999999761581421f, -0.6000000238418579f, 0.30000001192092896f, 0.0f, -0.20000000298023224f, -0.30000001192092896f, 0.10000000149011612f, 0.20000000298023224f, -0.30000001192092896f, 0.6000000238418579f, 0.10000000149011612f, -0.20000000298023224f, 0.5f, -0.6000000238418579f, -0.8999999761581421f, 1.2999999523162842f, -0.20000000298023224f, -1.0f, 1.899999976158142f, -0.30000001192092896f, 0.30000001192092896f, 0.6000000238418579f, 1.100000023841858f, 0.0f, 0.20000000298023224f, 0.699999988079071f, -0.4000000059604645f, 0.0f, 0.10000000149011612f, 0.20000000298023224f, -0.5f, -0.5f, -1.2000000476837158f, -0.699999988079071f, 0.30000001192092896f, 0.30000001192092896f, -0.5f, 0.8999999761581421f, 1.7999999523162842f, -1.100000023841858f, 0.6000000238418579f, 0.6000000238418579f, 0.5f, -0.4000000059604645f, -0.4000000059604645f, 1.100000023841858f, -0.6000000238418579f, 0.30000001192092896f, -1.0f, 0.20000000298023224f, -0.5f, -1.5f, -1.7000000476837158f, -0.30000001192092896f, -0.8999999761581421f, -0.20000000298023224f, -1.0f, 0.10000000149011612f, -0.10000000149011612f, -0.30000001192092896f, -1.5f, -0.8999999761581421f, 0.4000000059604645f, 1.2000000476837158f, -0.20000000298023224f, -0.20000000298023224f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.9449999928474426f, 0.9300000071525574f, 0.9150000214576721f, 0.8999999761581421f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7950000166893005f, 0.7799999713897705f, 0.7649999856948853f, 0.75f, 0.7350000143051147f, 0.7200000286102295f, 0.7049999833106995f, 0.6899999976158142f, 0.675000011920929f, 0.9449999928474426f, 0.9150000214576721f, 0.8999999761581421f, 0.8849999904632568f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7799999713897705f, 0.7350000143051147f, 0.7200000286102295f, 0.6299999952316284f, 0.6000000238418579f, 0.5849999785423279f, 0.5400000214576721f}}, {1, {16.84515380859375f, 2.517073392868042f, 33.15484619140625f, 7.482926368713379f, 32.96343994140625f, 40.74744415283203f, 43.83656311035156f, 47.25255584716797f, 0.0f, 9.143808364868164f, 16.243606567382812f, 14.056192398071289f, 0.0f, 25.789657592773438f, 25.71002197265625f, 30.210342407226562f, 37.947444915771484f, 20.791667938232422f, 44.45255661010742f, 32.80833053588867f, 30.27760887145996f, 32.21635055541992f, 32.92238998413086f, 38.183650970458984f, 25.885488510131836f, 29.08658218383789f, 31.314512252807617f, 30.91341781616211f, 2.8654022216796875f, 5.789658069610596f, 26.73459815979004f, 10.210342407226562f, 0.5408763885498047f, 3.582404136657715f, 15.459123611450195f, 5.217595100402832f, 10.753355026245117f, 35.98240280151367f, 15.246644973754883f, 37.61759567260742f, 1.459360122680664f, 23.050153732299805f, 4.1406402587890625f, 36.149845123291016f, 0.0f, 15.600000381469727f, 11.068763732910156f, 21.600000381469727f, 38.54087829589844f, 35.28548812866211f, 53.45912170410156f, 40.71451187133789f, 26.13425636291504f, 48.35863494873047f, 27.465742111206055f, 64.0f, 29.962539672851562f, 3.1999998092651367f, 33.23746109008789f, 19.200000762939453f, 11.65351676940918f, 43.98029327392578f, 48.34648132324219f, 46.419708251953125f, 0.0f, 26.967151641845703f, 26.74894142150879f, 31.032848358154297f, 28.59032440185547f, 9.050153732299805f, 32.0f, 22.14984703063965f, 17.828777313232422f, 19.0068302154541f, 32.0f, 20.9931697845459f, 3.5724945068359375f, 7.273454189300537f, 11.6275053024292f, 19.126544952392578f, 4.989657878875732f, 26.799999237060547f, 9.410341262817383f, 32.0f, 15.157195091247559f, 18.005369186401367f, 20.04280662536621f, 25.194631576538086f, 30.889404296875f, 9.652012825012207f, 32.0f, 12.347987174987793f, 3.3994140625f, 3.8000001907348633f, 32.0f, 9.800000190734863f, 24.98040771484375f, 10.08658218383789f, 28.619590759277344f, 11.91341781616211f, 13.950423240661621f, 3.8843491077423096f, 22.049575805664062f, 6.1156511306762695f, 24.259361267089844f, 6.800000190734863f, 26.94063949584961f, 22.799999237060547f, 3.653836727142334f, 19.475812911987305f, 13.546163558959961f, 28.524187088012695f, 11.947443008422852f, 29.318363189697266f, 18.452556610107422f, 32.0f, 17.318363189697266f, 0.0f, 20.281635284423828f, 16.176950454711914f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_nchw_float16_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nhwc_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 4, 4, 16}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.21f, 0.78f, 0.57f, 0.795f, 0.66f, 0.915f, 0.615f, 0.27f, 0.69f, 0.645f, 0.945f, 0.465f, 0.345f, 0.855f, 0.555f, 0.48f, 0.6f, 0.735f, 0.63f, 0.495f, 0.03f, 0.12f, 0.225f, 0.24f, 0.285f, 0.51f, 0.315f, 0.435f, 0.255f, 0.585f, 0.06f, 0.9f, 0.75f, 0.18f, 0.45f, 0.36f, 0.09f, 0.405f, 0.15f, 0.0f, 0.195f, 0.075f, 0.81f, 0.87f, 0.93f, 0.39f, 0.165f, 0.825f, 0.525f, 0.765f, 0.105f, 0.54f, 0.705f, 0.675f, 0.3f, 0.42f, 0.045f, 0.33f, 0.015f, 0.84f, 0.135f, 0.72f, 0.375f, 0.495f, 0.315f, 0.195f, 0.24f, 0.21f, 0.54f, 0.78f, 0.72f, 0.045f, 0.93f, 0.27f, 0.735f, 0.135f, 0.09f, 0.81f, 0.705f, 0.39f, 0.885f, 0.42f, 0.945f, 0.9f, 0.225f, 0.75f, 0.3f, 0.375f, 0.63f, 0.825f, 0.675f, 0.015f, 0.48f, 0.645f, 0.615f, 0.33f, 0.465f, 0.66f, 0.6f, 0.075f, 0.84f, 0.285f, 0.57f, 0.585f, 0.165f, 0.06f, 0.36f, 0.795f, 0.855f, 0.105f, 0.45f, 0.0f, 0.87f, 0.525f, 0.255f, 0.69f, 0.555f, 0.15f, 0.345f, 0.03f, 0.915f, 0.405f, 0.435f, 0.765f, 0.12f, 0.51f, 0.18f}}, {1, {-1.9f, 0.4f, 1.4f, 0.5f, -1.5f, -0.2f, 0.3f, 1.2f, 0.0f, -0.6f, 0.4f, -1.3f, 0.8f, 0.9f, -0.2f, 0.8f, -0.2f, 0.0f, 0.4f, 0.1f, -0.2f, -1.6f, -0.6f, -0.1f, -1.0f, 0.6f, 0.5f, -0.2f, -1.7f, -1.4f, 0.5f, -0.1f, -1.5f, 1.3f, -0.7f, -0.9f, 0.9f, 0.2f, -0.2f, 0.0f, -0.7f, 0.3f, -0.4f, -0.3f, -0.5f, -0.3f, 1.0f, -0.7f, 1.2f, -0.3f, 0.0f, 0.3f, -0.7f, 1.0f, -0.2f, -0.6f, -1.3f, 0.0f, 0.3f, 0.1f, 0.4f, 0.2f, 2.4f, 0.0f, 0.1f, 0.0f, 0.7f, -0.9f, 0.1f, -0.4f, 0.3f, -0.3f, -0.7f, 0.1f, 0.7f, 0.0f, -0.3f, 1.6f, 0.0f, 1.1f, 0.4f, -0.7f, -0.9f, 0.0f, 0.0f, 0.4f, -0.6f, 0.4f, -1.9f, -1.2f, 0.0f, -0.3f, 0.2f, 0.0f, 0.1f, 0.8f, 0.0f, 0.9f, -1.7f, 0.3f, 0.7f, -0.7f, 0.7f, 1.2f, -0.4f, -0.1f, -0.6f, 0.6f, -0.4f, -0.2f, 0.3f, -0.5f, 0.0f, 1.0f, -0.1f, -0.3f, -0.8f, 0.1f, -1.2f, -2.4f, 0.1f, 1.4f, 0.4f, 0.1f, -1.1f, 0.4f, -0.4f, -0.2f, 0.1f, 0.0f, 0.7f, 0.1f, -1.3f, 0.1f, -0.4f, -0.2f, 0.2f, 0.1f, -0.8f, 0.0f, -1.4f, 2.0f, -0.6f, -0.5f, 0.0f, 1.0f, -1.4f, -1.1f, 0.6f, -0.7f, 0.4f, 1.1f, -1.1f, 1.6f, -0.3f, 0.0f, -0.7f, 0.3f, -1.3f, 0.0f, 0.0f, 0.0f, -0.3f, 0.0f, -1.1f, -1.5f, 0.9f, -1.4f, -0.7f, 0.1f, -1.4f, 0.9f, 0.1f, 0.2f, -0.1f, -1.7f, 0.2f, -0.3f, -0.9f, 1.1f, 0.1f, 1.0f, 1.0f, -0.9f, 0.7f, 0.0f, -0.3f, 0.2f, -0.8f, -0.5f, 0.6f, -1.2f, 1.0f, 0.6f, 0.0f, -1.6f, 0.1f, -1.2f, 0.7f, 0.8f, 0.5f, -0.2f, -0.8f, -1.3f, -0.3f, 0.0f, 0.0f, 0.3f, -0.6f, -0.3f, 1.3f, 0.1f, 2.2f, 1.2f, -1.1f, 0.1f, 1.2f, 1.2f, 1.3f, -0.9f, 0.1f, -0.5f, 0.1f, -0.7f, -1.3f, 1.3f, 0.1f, 2.0f, 0.0f, 0.2f, 0.6f, 0.0f, -0.1f, -0.4f, -0.5f, 0.1f, -0.6f, -0.3f, 0.2f, -0.4f, -0.4f, -0.7f, -1.8f, 0.4f, -0.7f, 0.4f, 1.4f, -0.3f, 0.8f, 0.0f, 0.4f, -0.1f, -1.0f, 0.2f, 0.5f, -0.6f, -1.1f, 0.2f, 1.6f, -0.2f, -0.4f, -0.9f, 0.0f, 0.3f, 0.0f, 0.3f, -0.3f, 0.3f, 0.3f, 1.9f, 0.3f, -0.5f, -0.8f, -1.3f, -0.8f, 0.2f, 0.2f, -0.4f, -0.3f, 0.6f, 0.2f, -0.2f, 1.2f, 0.0f, 0.0f, -0.3f, 0.3f, -1.5f, -1.0f, -0.3f, -0.7f, -0.3f, -0.4f, -1.0f, -0.6f, -0.7f, -0.2f, 0.6f, -0.3f, 0.5f, -0.2f, 0.3f, -0.5f, -1.7f, 0.0f, -0.7f, -0.1f, -1.5f, -0.9f, 0.6f, 0.3f, -0.1f, 0.2f, 0.5f, 0.6f, -0.8f, -0.3f, 0.6f, 0.9f, -0.3f, 0.1f, -1.7f, -1.5f, 0.0f, -0.1f, -0.3f, 0.7f, -0.3f, -0.4f, 0.0f, -0.4f, -0.3f, 0.1f, 1.1f, 1.8f, -0.9f, 0.6f, 0.5f, 0.2f, -0.7f, 0.2f, 0.1f, 1.2f, 2.2f, 0.3f, 0.6f, 0.4f, 0.1f, 0.2f, 0.0f, -1.1f, -0.2f, -0.7f, 0.0f, -1.2f, 0.6f, -0.6f, -0.2f, -0.4f, 0.0f, 0.7f, -1.2f, 0.8f, 0.0f, -0.3f, 0.2f, 0.6f, -1.0f, -0.1f, -0.1f, 0.0f, -0.4f, -0.2f, 0.4f, -1.4f, 0.3f, 0.1f, 1.3f, -0.2f, -0.7f, 0.6f, 0.7f, 0.6f, 0.1f, -0.4f, 0.1f, -0.2f, -0.8f, 0.0f, -1.3f, 1.2f, 1.4f, 1.1f, 0.5f, 0.3f, 0.0f, 0.1f, -0.4f, 0.5f, -0.1f, -0.5f, 0.3f, -0.7f, 0.9f, -0.1f, -0.4f, 0.2f, -0.8f, 1.0f, 1.0f, 0.1f, 0.1f, -0.2f, 0.0f, -0.4f, -0.3f, -0.8f, 0.7f, -0.9f, -0.3f, -0.3f, -2.8f, 1.0f, 1.4f, 0.0f, -2.6f, 1.1f, -1.1f, 0.5f, 0.1f, -0.4f, -1.5f, 0.0f, 0.3f, -0.3f, -0.2f, 0.7f, -0.8f, -0.1f, 0.5f, 0.7f, 1.4f, -1.2f, -1.0f, -0.6f, 0.2f, 1.1f, -0.9f, 0.7f, -0.4f, 0.0f, 0.0f, -0.2f, -0.2f, 0.1f, 0.0f, 0.0f, -0.7f, -0.7f, -1.4f, -0.9f, -0.5f, -0.6f, 0.4f, 0.3f, 0.0f, 0.9f, -0.2f, 0.7f, 1.2f, 0.5f, 0.8f, -0.5f, 1.0f, 0.2f, -0.5f, 1.3f, -0.5f, 0.3f, 1.2f, -0.3f, -0.1f, 1.3f, 0.2f, 0.6f, -1.4f, -0.1f, -0.2f, -0.4f, -0.9f, 1.2f, -0.9f, -0.2f, -1.2f, -1.0f, -0.2f, -1.6f, 2.1f, -0.6f, -0.2f, -0.3f, 0.5f, 0.9f, -0.4f, 0.0f, -0.1f, 0.1f, -0.6f, -1.0f, -0.7f, 0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nhwc_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nhwc_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 4, 4, 16}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.21f, 0.78f, 0.57f, 0.795f, 0.66f, 0.915f, 0.615f, 0.27f, 0.69f, 0.645f, 0.945f, 0.465f, 0.345f, 0.855f, 0.555f, 0.48f, 0.6f, 0.735f, 0.63f, 0.495f, 0.03f, 0.12f, 0.225f, 0.24f, 0.285f, 0.51f, 0.315f, 0.435f, 0.255f, 0.585f, 0.06f, 0.9f, 0.75f, 0.18f, 0.45f, 0.36f, 0.09f, 0.405f, 0.15f, 0.0f, 0.195f, 0.075f, 0.81f, 0.87f, 0.93f, 0.39f, 0.165f, 0.825f, 0.525f, 0.765f, 0.105f, 0.54f, 0.705f, 0.675f, 0.3f, 0.42f, 0.045f, 0.33f, 0.015f, 0.84f, 0.135f, 0.72f, 0.375f, 0.495f, 0.315f, 0.195f, 0.24f, 0.21f, 0.54f, 0.78f, 0.72f, 0.045f, 0.93f, 0.27f, 0.735f, 0.135f, 0.09f, 0.81f, 0.705f, 0.39f, 0.885f, 0.42f, 0.945f, 0.9f, 0.225f, 0.75f, 0.3f, 0.375f, 0.63f, 0.825f, 0.675f, 0.015f, 0.48f, 0.645f, 0.615f, 0.33f, 0.465f, 0.66f, 0.6f, 0.075f, 0.84f, 0.285f, 0.57f, 0.585f, 0.165f, 0.06f, 0.36f, 0.795f, 0.855f, 0.105f, 0.45f, 0.0f, 0.87f, 0.525f, 0.255f, 0.69f, 0.555f, 0.15f, 0.345f, 0.03f, 0.915f, 0.405f, 0.435f, 0.765f, 0.12f, 0.51f, 0.18f}}, {1, {-1.9f, 0.4f, 1.4f, 0.5f, -1.5f, -0.2f, 0.3f, 1.2f, 0.0f, -0.6f, 0.4f, -1.3f, 0.8f, 0.9f, -0.2f, 0.8f, -0.2f, 0.0f, 0.4f, 0.1f, -0.2f, -1.6f, -0.6f, -0.1f, -1.0f, 0.6f, 0.5f, -0.2f, -1.7f, -1.4f, 0.5f, -0.1f, -1.5f, 1.3f, -0.7f, -0.9f, 0.9f, 0.2f, -0.2f, 0.0f, -0.7f, 0.3f, -0.4f, -0.3f, -0.5f, -0.3f, 1.0f, -0.7f, 1.2f, -0.3f, 0.0f, 0.3f, -0.7f, 1.0f, -0.2f, -0.6f, -1.3f, 0.0f, 0.3f, 0.1f, 0.4f, 0.2f, 2.4f, 0.0f, 0.1f, 0.0f, 0.7f, -0.9f, 0.1f, -0.4f, 0.3f, -0.3f, -0.7f, 0.1f, 0.7f, 0.0f, -0.3f, 1.6f, 0.0f, 1.1f, 0.4f, -0.7f, -0.9f, 0.0f, 0.0f, 0.4f, -0.6f, 0.4f, -1.9f, -1.2f, 0.0f, -0.3f, 0.2f, 0.0f, 0.1f, 0.8f, 0.0f, 0.9f, -1.7f, 0.3f, 0.7f, -0.7f, 0.7f, 1.2f, -0.4f, -0.1f, -0.6f, 0.6f, -0.4f, -0.2f, 0.3f, -0.5f, 0.0f, 1.0f, -0.1f, -0.3f, -0.8f, 0.1f, -1.2f, -2.4f, 0.1f, 1.4f, 0.4f, 0.1f, -1.1f, 0.4f, -0.4f, -0.2f, 0.1f, 0.0f, 0.7f, 0.1f, -1.3f, 0.1f, -0.4f, -0.2f, 0.2f, 0.1f, -0.8f, 0.0f, -1.4f, 2.0f, -0.6f, -0.5f, 0.0f, 1.0f, -1.4f, -1.1f, 0.6f, -0.7f, 0.4f, 1.1f, -1.1f, 1.6f, -0.3f, 0.0f, -0.7f, 0.3f, -1.3f, 0.0f, 0.0f, 0.0f, -0.3f, 0.0f, -1.1f, -1.5f, 0.9f, -1.4f, -0.7f, 0.1f, -1.4f, 0.9f, 0.1f, 0.2f, -0.1f, -1.7f, 0.2f, -0.3f, -0.9f, 1.1f, 0.1f, 1.0f, 1.0f, -0.9f, 0.7f, 0.0f, -0.3f, 0.2f, -0.8f, -0.5f, 0.6f, -1.2f, 1.0f, 0.6f, 0.0f, -1.6f, 0.1f, -1.2f, 0.7f, 0.8f, 0.5f, -0.2f, -0.8f, -1.3f, -0.3f, 0.0f, 0.0f, 0.3f, -0.6f, -0.3f, 1.3f, 0.1f, 2.2f, 1.2f, -1.1f, 0.1f, 1.2f, 1.2f, 1.3f, -0.9f, 0.1f, -0.5f, 0.1f, -0.7f, -1.3f, 1.3f, 0.1f, 2.0f, 0.0f, 0.2f, 0.6f, 0.0f, -0.1f, -0.4f, -0.5f, 0.1f, -0.6f, -0.3f, 0.2f, -0.4f, -0.4f, -0.7f, -1.8f, 0.4f, -0.7f, 0.4f, 1.4f, -0.3f, 0.8f, 0.0f, 0.4f, -0.1f, -1.0f, 0.2f, 0.5f, -0.6f, -1.1f, 0.2f, 1.6f, -0.2f, -0.4f, -0.9f, 0.0f, 0.3f, 0.0f, 0.3f, -0.3f, 0.3f, 0.3f, 1.9f, 0.3f, -0.5f, -0.8f, -1.3f, -0.8f, 0.2f, 0.2f, -0.4f, -0.3f, 0.6f, 0.2f, -0.2f, 1.2f, 0.0f, 0.0f, -0.3f, 0.3f, -1.5f, -1.0f, -0.3f, -0.7f, -0.3f, -0.4f, -1.0f, -0.6f, -0.7f, -0.2f, 0.6f, -0.3f, 0.5f, -0.2f, 0.3f, -0.5f, -1.7f, 0.0f, -0.7f, -0.1f, -1.5f, -0.9f, 0.6f, 0.3f, -0.1f, 0.2f, 0.5f, 0.6f, -0.8f, -0.3f, 0.6f, 0.9f, -0.3f, 0.1f, -1.7f, -1.5f, 0.0f, -0.1f, -0.3f, 0.7f, -0.3f, -0.4f, 0.0f, -0.4f, -0.3f, 0.1f, 1.1f, 1.8f, -0.9f, 0.6f, 0.5f, 0.2f, -0.7f, 0.2f, 0.1f, 1.2f, 2.2f, 0.3f, 0.6f, 0.4f, 0.1f, 0.2f, 0.0f, -1.1f, -0.2f, -0.7f, 0.0f, -1.2f, 0.6f, -0.6f, -0.2f, -0.4f, 0.0f, 0.7f, -1.2f, 0.8f, 0.0f, -0.3f, 0.2f, 0.6f, -1.0f, -0.1f, -0.1f, 0.0f, -0.4f, -0.2f, 0.4f, -1.4f, 0.3f, 0.1f, 1.3f, -0.2f, -0.7f, 0.6f, 0.7f, 0.6f, 0.1f, -0.4f, 0.1f, -0.2f, -0.8f, 0.0f, -1.3f, 1.2f, 1.4f, 1.1f, 0.5f, 0.3f, 0.0f, 0.1f, -0.4f, 0.5f, -0.1f, -0.5f, 0.3f, -0.7f, 0.9f, -0.1f, -0.4f, 0.2f, -0.8f, 1.0f, 1.0f, 0.1f, 0.1f, -0.2f, 0.0f, -0.4f, -0.3f, -0.8f, 0.7f, -0.9f, -0.3f, -0.3f, -2.8f, 1.0f, 1.4f, 0.0f, -2.6f, 1.1f, -1.1f, 0.5f, 0.1f, -0.4f, -1.5f, 0.0f, 0.3f, -0.3f, -0.2f, 0.7f, -0.8f, -0.1f, 0.5f, 0.7f, 1.4f, -1.2f, -1.0f, -0.6f, 0.2f, 1.1f, -0.9f, 0.7f, -0.4f, 0.0f, 0.0f, -0.2f, -0.2f, 0.1f, 0.0f, 0.0f, -0.7f, -0.7f, -1.4f, -0.9f, -0.5f, -0.6f, 0.4f, 0.3f, 0.0f, 0.9f, -0.2f, 0.7f, 1.2f, 0.5f, 0.8f, -0.5f, 1.0f, 0.2f, -0.5f, 1.3f, -0.5f, 0.3f, 1.2f, -0.3f, -0.1f, 1.3f, 0.2f, 0.6f, -1.4f, -0.1f, -0.2f, -0.4f, -0.9f, 1.2f, -0.9f, -0.2f, -1.2f, -1.0f, -0.2f, -1.6f, 2.1f, -0.6f, -0.2f, -0.3f, 0.5f, 0.9f, -0.4f, 0.0f, -0.1f, 0.1f, -0.6f, -1.0f, -0.7f, 0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nhwc_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nhwc_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 4, 4, 16}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8849999904632568f, 0.20999999344348907f, 0.7799999713897705f, 0.5699999928474426f, 0.7950000166893005f, 0.6600000262260437f, 0.9150000214576721f, 0.6150000095367432f, 0.27000001072883606f, 0.6899999976158142f, 0.6449999809265137f, 0.9449999928474426f, 0.4650000035762787f, 0.3449999988079071f, 0.8550000190734863f, 0.5550000071525574f, 0.47999998927116394f, 0.6000000238418579f, 0.7350000143051147f, 0.6299999952316284f, 0.4950000047683716f, 0.029999999329447746f, 0.11999999731779099f, 0.22499999403953552f, 0.23999999463558197f, 0.2849999964237213f, 0.5099999904632568f, 0.3149999976158142f, 0.4350000023841858f, 0.2549999952316284f, 0.5849999785423279f, 0.05999999865889549f, 0.8999999761581421f, 0.75f, 0.18000000715255737f, 0.44999998807907104f, 0.36000001430511475f, 0.09000000357627869f, 0.4050000011920929f, 0.15000000596046448f, 0.0f, 0.19499999284744263f, 0.07500000298023224f, 0.8100000023841858f, 0.8700000047683716f, 0.9300000071525574f, 0.38999998569488525f, 0.16500000655651093f, 0.824999988079071f, 0.5249999761581421f, 0.7649999856948853f, 0.10499999672174454f, 0.5400000214576721f, 0.7049999833106995f, 0.675000011920929f, 0.30000001192092896f, 0.41999998688697815f, 0.04500000178813934f, 0.33000001311302185f, 0.014999999664723873f, 0.8399999737739563f, 0.13500000536441803f, 0.7200000286102295f, 0.375f, 0.4950000047683716f, 0.3149999976158142f, 0.19499999284744263f, 0.23999999463558197f, 0.20999999344348907f, 0.5400000214576721f, 0.7799999713897705f, 0.7200000286102295f, 0.04500000178813934f, 0.9300000071525574f, 0.27000001072883606f, 0.7350000143051147f, 0.13500000536441803f, 0.09000000357627869f, 0.8100000023841858f, 0.7049999833106995f, 0.38999998569488525f, 0.8849999904632568f, 0.41999998688697815f, 0.9449999928474426f, 0.8999999761581421f, 0.22499999403953552f, 0.75f, 0.30000001192092896f, 0.375f, 0.6299999952316284f, 0.824999988079071f, 0.675000011920929f, 0.014999999664723873f, 0.47999998927116394f, 0.6449999809265137f, 0.6150000095367432f, 0.33000001311302185f, 0.4650000035762787f, 0.6600000262260437f, 0.6000000238418579f, 0.07500000298023224f, 0.8399999737739563f, 0.2849999964237213f, 0.5699999928474426f, 0.5849999785423279f, 0.16500000655651093f, 0.05999999865889549f, 0.36000001430511475f, 0.7950000166893005f, 0.8550000190734863f, 0.10499999672174454f, 0.44999998807907104f, 0.0f, 0.8700000047683716f, 0.5249999761581421f, 0.2549999952316284f, 0.6899999976158142f, 0.5550000071525574f, 0.15000000596046448f, 0.3449999988079071f, 0.029999999329447746f, 0.9150000214576721f, 0.4050000011920929f, 0.4350000023841858f, 0.7649999856948853f, 0.11999999731779099f, 0.5099999904632568f, 0.18000000715255737f}}, {1, {-1.899999976158142f, 0.4000000059604645f, 1.399999976158142f, 0.5f, -1.5f, -0.20000000298023224f, 0.30000001192092896f, 1.2000000476837158f, 0.0f, -0.6000000238418579f, 0.4000000059604645f, -1.2999999523162842f, 0.800000011920929f, 0.8999999761581421f, -0.20000000298023224f, 0.800000011920929f, -0.20000000298023224f, 0.0f, 0.4000000059604645f, 0.10000000149011612f, -0.20000000298023224f, -1.600000023841858f, -0.6000000238418579f, -0.10000000149011612f, -1.0f, 0.6000000238418579f, 0.5f, -0.20000000298023224f, -1.7000000476837158f, -1.399999976158142f, 0.5f, -0.10000000149011612f, -1.5f, 1.2999999523162842f, -0.699999988079071f, -0.8999999761581421f, 0.8999999761581421f, 0.20000000298023224f, -0.20000000298023224f, 0.0f, -0.699999988079071f, 0.30000001192092896f, -0.4000000059604645f, -0.30000001192092896f, -0.5f, -0.30000001192092896f, 1.0f, -0.699999988079071f, 1.2000000476837158f, -0.30000001192092896f, 0.0f, 0.30000001192092896f, -0.699999988079071f, 1.0f, -0.20000000298023224f, -0.6000000238418579f, -1.2999999523162842f, 0.0f, 0.30000001192092896f, 0.10000000149011612f, 0.4000000059604645f, 0.20000000298023224f, 2.4000000953674316f, 0.0f, 0.10000000149011612f, 0.0f, 0.699999988079071f, -0.8999999761581421f, 0.10000000149011612f, -0.4000000059604645f, 0.30000001192092896f, -0.30000001192092896f, -0.699999988079071f, 0.10000000149011612f, 0.699999988079071f, 0.0f, -0.30000001192092896f, 1.600000023841858f, 0.0f, 1.100000023841858f, 0.4000000059604645f, -0.699999988079071f, -0.8999999761581421f, 0.0f, 0.0f, 0.4000000059604645f, -0.6000000238418579f, 0.4000000059604645f, -1.899999976158142f, -1.2000000476837158f, 0.0f, -0.30000001192092896f, 0.20000000298023224f, 0.0f, 0.10000000149011612f, 0.800000011920929f, 0.0f, 0.8999999761581421f, -1.7000000476837158f, 0.30000001192092896f, 0.699999988079071f, -0.699999988079071f, 0.699999988079071f, 1.2000000476837158f, -0.4000000059604645f, -0.10000000149011612f, -0.6000000238418579f, 0.6000000238418579f, -0.4000000059604645f, -0.20000000298023224f, 0.30000001192092896f, -0.5f, 0.0f, 1.0f, -0.10000000149011612f, -0.30000001192092896f, -0.800000011920929f, 0.10000000149011612f, -1.2000000476837158f, -2.4000000953674316f, 0.10000000149011612f, 1.399999976158142f, 0.4000000059604645f, 0.10000000149011612f, -1.100000023841858f, 0.4000000059604645f, -0.4000000059604645f, -0.20000000298023224f, 0.10000000149011612f, 0.0f, 0.699999988079071f, 0.10000000149011612f, -1.2999999523162842f, 0.10000000149011612f, -0.4000000059604645f, -0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, -0.800000011920929f, 0.0f, -1.399999976158142f, 2.0f, -0.6000000238418579f, -0.5f, 0.0f, 1.0f, -1.399999976158142f, -1.100000023841858f, 0.6000000238418579f, -0.699999988079071f, 0.4000000059604645f, 1.100000023841858f, -1.100000023841858f, 1.600000023841858f, -0.30000001192092896f, 0.0f, -0.699999988079071f, 0.30000001192092896f, -1.2999999523162842f, 0.0f, 0.0f, 0.0f, -0.30000001192092896f, 0.0f, -1.100000023841858f, -1.5f, 0.8999999761581421f, -1.399999976158142f, -0.699999988079071f, 0.10000000149011612f, -1.399999976158142f, 0.8999999761581421f, 0.10000000149011612f, 0.20000000298023224f, -0.10000000149011612f, -1.7000000476837158f, 0.20000000298023224f, -0.30000001192092896f, -0.8999999761581421f, 1.100000023841858f, 0.10000000149011612f, 1.0f, 1.0f, -0.8999999761581421f, 0.699999988079071f, 0.0f, -0.30000001192092896f, 0.20000000298023224f, -0.800000011920929f, -0.5f, 0.6000000238418579f, -1.2000000476837158f, 1.0f, 0.6000000238418579f, 0.0f, -1.600000023841858f, 0.10000000149011612f, -1.2000000476837158f, 0.699999988079071f, 0.800000011920929f, 0.5f, -0.20000000298023224f, -0.800000011920929f, -1.2999999523162842f, -0.30000001192092896f, 0.0f, 0.0f, 0.30000001192092896f, -0.6000000238418579f, -0.30000001192092896f, 1.2999999523162842f, 0.10000000149011612f, 2.200000047683716f, 1.2000000476837158f, -1.100000023841858f, 0.10000000149011612f, 1.2000000476837158f, 1.2000000476837158f, 1.2999999523162842f, -0.8999999761581421f, 0.10000000149011612f, -0.5f, 0.10000000149011612f, -0.699999988079071f, -1.2999999523162842f, 1.2999999523162842f, 0.10000000149011612f, 2.0f, 0.0f, 0.20000000298023224f, 0.6000000238418579f, 0.0f, -0.10000000149011612f, -0.4000000059604645f, -0.5f, 0.10000000149011612f, -0.6000000238418579f, -0.30000001192092896f, 0.20000000298023224f, -0.4000000059604645f, -0.4000000059604645f, -0.699999988079071f, -1.7999999523162842f, 0.4000000059604645f, -0.699999988079071f, 0.4000000059604645f, 1.399999976158142f, -0.30000001192092896f, 0.800000011920929f, 0.0f, 0.4000000059604645f, -0.10000000149011612f, -1.0f, 0.20000000298023224f, 0.5f, -0.6000000238418579f, -1.100000023841858f, 0.20000000298023224f, 1.600000023841858f, -0.20000000298023224f, -0.4000000059604645f, -0.8999999761581421f, 0.0f, 0.30000001192092896f, 0.0f, 0.30000001192092896f, -0.30000001192092896f, 0.30000001192092896f, 0.30000001192092896f, 1.899999976158142f, 0.30000001192092896f, -0.5f, -0.800000011920929f, -1.2999999523162842f, -0.800000011920929f, 0.20000000298023224f, 0.20000000298023224f, -0.4000000059604645f, -0.30000001192092896f, 0.6000000238418579f, 0.20000000298023224f, -0.20000000298023224f, 1.2000000476837158f, 0.0f, 0.0f, -0.30000001192092896f, 0.30000001192092896f, -1.5f, -1.0f, -0.30000001192092896f, -0.699999988079071f, -0.30000001192092896f, -0.4000000059604645f, -1.0f, -0.6000000238418579f, -0.699999988079071f, -0.20000000298023224f, 0.6000000238418579f, -0.30000001192092896f, 0.5f, -0.20000000298023224f, 0.30000001192092896f, -0.5f, -1.7000000476837158f, 0.0f, -0.699999988079071f, -0.10000000149011612f, -1.5f, -0.8999999761581421f, 0.6000000238418579f, 0.30000001192092896f, -0.10000000149011612f, 0.20000000298023224f, 0.5f, 0.6000000238418579f, -0.800000011920929f, -0.30000001192092896f, 0.6000000238418579f, 0.8999999761581421f, -0.30000001192092896f, 0.10000000149011612f, -1.7000000476837158f, -1.5f, 0.0f, -0.10000000149011612f, -0.30000001192092896f, 0.699999988079071f, -0.30000001192092896f, -0.4000000059604645f, 0.0f, -0.4000000059604645f, -0.30000001192092896f, 0.10000000149011612f, 1.100000023841858f, 1.7999999523162842f, -0.8999999761581421f, 0.6000000238418579f, 0.5f, 0.20000000298023224f, -0.699999988079071f, 0.20000000298023224f, 0.10000000149011612f, 1.2000000476837158f, 2.200000047683716f, 0.30000001192092896f, 0.6000000238418579f, 0.4000000059604645f, 0.10000000149011612f, 0.20000000298023224f, 0.0f, -1.100000023841858f, -0.20000000298023224f, -0.699999988079071f, 0.0f, -1.2000000476837158f, 0.6000000238418579f, -0.6000000238418579f, -0.20000000298023224f, -0.4000000059604645f, 0.0f, 0.699999988079071f, -1.2000000476837158f, 0.800000011920929f, 0.0f, -0.30000001192092896f, 0.20000000298023224f, 0.6000000238418579f, -1.0f, -0.10000000149011612f, -0.10000000149011612f, 0.0f, -0.4000000059604645f, -0.20000000298023224f, 0.4000000059604645f, -1.399999976158142f, 0.30000001192092896f, 0.10000000149011612f, 1.2999999523162842f, -0.20000000298023224f, -0.699999988079071f, 0.6000000238418579f, 0.699999988079071f, 0.6000000238418579f, 0.10000000149011612f, -0.4000000059604645f, 0.10000000149011612f, -0.20000000298023224f, -0.800000011920929f, 0.0f, -1.2999999523162842f, 1.2000000476837158f, 1.399999976158142f, 1.100000023841858f, 0.5f, 0.30000001192092896f, 0.0f, 0.10000000149011612f, -0.4000000059604645f, 0.5f, -0.10000000149011612f, -0.5f, 0.30000001192092896f, -0.699999988079071f, 0.8999999761581421f, -0.10000000149011612f, -0.4000000059604645f, 0.20000000298023224f, -0.800000011920929f, 1.0f, 1.0f, 0.10000000149011612f, 0.10000000149011612f, -0.20000000298023224f, 0.0f, -0.4000000059604645f, -0.30000001192092896f, -0.800000011920929f, 0.699999988079071f, -0.8999999761581421f, -0.30000001192092896f, -0.30000001192092896f, -2.799999952316284f, 1.0f, 1.399999976158142f, 0.0f, -2.5999999046325684f, 1.100000023841858f, -1.100000023841858f, 0.5f, 0.10000000149011612f, -0.4000000059604645f, -1.5f, 0.0f, 0.30000001192092896f, -0.30000001192092896f, -0.20000000298023224f, 0.699999988079071f, -0.800000011920929f, -0.10000000149011612f, 0.5f, 0.699999988079071f, 1.399999976158142f, -1.2000000476837158f, -1.0f, -0.6000000238418579f, 0.20000000298023224f, 1.100000023841858f, -0.8999999761581421f, 0.699999988079071f, -0.4000000059604645f, 0.0f, 0.0f, -0.20000000298023224f, -0.20000000298023224f, 0.10000000149011612f, 0.0f, 0.0f, -0.699999988079071f, -0.699999988079071f, -1.399999976158142f, -0.8999999761581421f, -0.5f, -0.6000000238418579f, 0.4000000059604645f, 0.30000001192092896f, 0.0f, 0.8999999761581421f, -0.20000000298023224f, 0.699999988079071f, 1.2000000476837158f, 0.5f, 0.800000011920929f, -0.5f, 1.0f, 0.20000000298023224f, -0.5f, 1.2999999523162842f, -0.5f, 0.30000001192092896f, 1.2000000476837158f, -0.30000001192092896f, -0.10000000149011612f, 1.2999999523162842f, 0.20000000298023224f, 0.6000000238418579f, -1.399999976158142f, -0.10000000149011612f, -0.20000000298023224f, -0.4000000059604645f, -0.8999999761581421f, 1.2000000476837158f, -0.8999999761581421f, -0.20000000298023224f, -1.2000000476837158f, -1.0f, -0.20000000298023224f, -1.600000023841858f, 2.0999999046325684f, -0.6000000238418579f, -0.20000000298023224f, -0.30000001192092896f, 0.5f, 0.8999999761581421f, -0.4000000059604645f, 0.0f, -0.10000000149011612f, 0.10000000149011612f, -0.6000000238418579f, -1.0f, -0.699999988079071f, 0.20000000298023224f, -0.20000000298023224f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.9449999928474426f, 0.9300000071525574f, 0.9150000214576721f, 0.8999999761581421f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7950000166893005f, 0.7799999713897705f, 0.7649999856948853f, 0.75f, 0.7350000143051147f, 0.7200000286102295f, 0.7049999833106995f, 0.6899999976158142f, 0.675000011920929f, 0.9449999928474426f, 0.9150000214576721f, 0.8999999761581421f, 0.8849999904632568f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7799999713897705f, 0.7350000143051147f, 0.7200000286102295f, 0.6299999952316284f, 0.6000000238418579f, 0.5849999785423279f, 0.5400000214576721f}}, {1, {16.84515380859375f, 2.517073392868042f, 33.15484619140625f, 7.482926368713379f, 32.96343994140625f, 40.74744415283203f, 43.83656311035156f, 47.25255584716797f, 0.0f, 9.143808364868164f, 16.243606567382812f, 14.056192398071289f, 0.0f, 25.789657592773438f, 25.71002197265625f, 30.210342407226562f, 37.947444915771484f, 20.791667938232422f, 44.45255661010742f, 32.80833053588867f, 30.27760887145996f, 32.21635055541992f, 32.92238998413086f, 38.183650970458984f, 25.885488510131836f, 29.08658218383789f, 31.314512252807617f, 30.91341781616211f, 2.8654022216796875f, 5.789658069610596f, 26.73459815979004f, 10.210342407226562f, 0.5408763885498047f, 3.582404136657715f, 15.459123611450195f, 5.217595100402832f, 10.753355026245117f, 35.98240280151367f, 15.246644973754883f, 37.61759567260742f, 1.459360122680664f, 23.050153732299805f, 4.1406402587890625f, 36.149845123291016f, 0.0f, 15.600000381469727f, 11.068763732910156f, 21.600000381469727f, 38.54087829589844f, 35.28548812866211f, 53.45912170410156f, 40.71451187133789f, 26.13425636291504f, 48.35863494873047f, 27.465742111206055f, 64.0f, 29.962539672851562f, 3.1999998092651367f, 33.23746109008789f, 19.200000762939453f, 11.65351676940918f, 43.98029327392578f, 48.34648132324219f, 46.419708251953125f, 0.0f, 26.967151641845703f, 26.74894142150879f, 31.032848358154297f, 28.59032440185547f, 9.050153732299805f, 32.0f, 22.14984703063965f, 17.828777313232422f, 19.0068302154541f, 32.0f, 20.9931697845459f, 3.5724945068359375f, 7.273454189300537f, 11.6275053024292f, 19.126544952392578f, 4.989657878875732f, 26.799999237060547f, 9.410341262817383f, 32.0f, 15.157195091247559f, 18.005369186401367f, 20.04280662536621f, 25.194631576538086f, 30.889404296875f, 9.652012825012207f, 32.0f, 12.347987174987793f, 3.3994140625f, 3.8000001907348633f, 32.0f, 9.800000190734863f, 24.98040771484375f, 10.08658218383789f, 28.619590759277344f, 11.91341781616211f, 13.950423240661621f, 3.8843491077423096f, 22.049575805664062f, 6.1156511306762695f, 24.259361267089844f, 6.800000190734863f, 26.94063949584961f, 22.799999237060547f, 3.653836727142334f, 19.475812911987305f, 13.546163558959961f, 28.524187088012695f, 11.947443008422852f, 29.318363189697266f, 18.452556610107422f, 32.0f, 17.318363189697266f, 0.0f, 20.281635284423828f, 16.176950454711914f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nhwc_float16_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nchw_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 16, 4, 4}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.795f, 0.27f, 0.465f, 0.48f, 0.495f, 0.24f, 0.435f, 0.9f, 0.36f, 0.0f, 0.87f, 0.825f, 0.54f, 0.42f, 0.84f, 0.21f, 0.66f, 0.69f, 0.345f, 0.6f, 0.03f, 0.285f, 0.255f, 0.75f, 0.09f, 0.195f, 0.93f, 0.525f, 0.705f, 0.045f, 0.135f, 0.78f, 0.915f, 0.645f, 0.855f, 0.735f, 0.12f, 0.51f, 0.585f, 0.18f, 0.405f, 0.075f, 0.39f, 0.765f, 0.675f, 0.33f, 0.72f, 0.57f, 0.615f, 0.945f, 0.555f, 0.63f, 0.225f, 0.315f, 0.06f, 0.45f, 0.15f, 0.81f, 0.165f, 0.105f, 0.3f, 0.015f, 0.375f, 0.495f, 0.21f, 0.045f, 0.135f, 0.39f, 0.9f, 0.375f, 0.015f, 0.33f, 0.075f, 0.585f, 0.795f, 0.0f, 0.69f, 0.03f, 0.765f, 0.315f, 0.54f, 0.93f, 0.09f, 0.885f, 0.225f, 0.63f, 0.48f, 0.465f, 0.84f, 0.165f, 0.855f, 0.87f, 0.555f, 0.915f, 0.12f, 0.195f, 0.78f, 0.27f, 0.81f, 0.42f, 0.75f, 0.825f, 0.645f, 0.66f, 0.285f, 0.06f, 0.105f, 0.525f, 0.15f, 0.405f, 0.51f, 0.24f, 0.72f, 0.735f, 0.705f, 0.945f, 0.3f, 0.675f, 0.615f, 0.6f, 0.57f, 0.36f, 0.45f, 0.255f, 0.345f, 0.435f, 0.18f}}, {1, {-1.9f, -0.2f, -1.5f, 1.2f, 0.1f, 0.4f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.2f, 1.0f, -0.6f, -1.3f, -0.4f, 0.4f, 0.0f, 1.3f, -0.3f, 0.0f, -0.7f, 0.9f, 1.0f, 0.0f, 1.0f, 0.0f, -0.3f, 0.6f, -0.3f, 1.3f, -0.7f, 1.4f, 0.4f, -0.7f, 0.0f, 0.7f, -0.9f, -1.7f, -0.1f, 0.7f, -1.4f, -0.3f, -0.9f, 0.0f, 1.3f, 0.1f, -1.8f, 0.5f, 0.1f, -0.9f, 0.3f, -0.9f, 0.0f, 0.3f, -0.3f, 0.1f, -1.1f, 0.0f, 1.1f, -1.6f, 0.1f, 2.0f, 0.4f, -1.5f, -0.2f, 0.9f, -0.7f, 0.1f, 0.0f, 0.7f, -0.8f, -1.3f, 0.6f, -1.1f, 0.1f, 0.1f, 2.2f, 0.0f, -0.7f, -0.2f, -1.6f, 0.2f, 1.0f, -0.4f, 0.4f, -0.7f, 0.1f, 0.1f, -0.7f, -1.5f, 1.0f, -1.2f, 1.2f, 0.2f, 0.4f, 0.3f, -0.6f, -0.2f, -0.2f, 0.3f, -0.6f, 0.7f, -1.2f, -0.4f, 0.4f, 0.9f, 1.0f, 0.7f, -1.1f, 0.6f, 1.4f, 1.2f, -0.1f, 0.0f, -0.6f, -0.3f, 0.4f, 1.2f, -2.4f, -0.2f, 1.1f, -1.4f, -0.9f, 0.8f, 0.1f, 0.0f, -0.3f, 0.0f, -1.0f, -0.7f, -1.3f, -0.7f, -1.9f, -0.4f, 0.1f, 0.2f, -1.1f, -0.7f, 0.7f, 0.5f, 1.2f, -0.1f, 0.8f, -0.6f, 0.6f, 0.3f, 0.0f, 0.1f, -1.2f, -0.1f, 1.4f, 0.1f, 1.6f, 0.1f, 0.0f, -0.2f, 1.2f, -0.4f, 0.0f, 0.4f, 0.5f, -0.4f, 0.3f, 0.7f, 0.0f, -0.6f, 0.4f, -0.8f, -0.3f, -1.4f, -0.3f, -0.8f, 1.3f, -0.5f, 0.4f, -1.3f, -0.2f, -0.3f, 0.1f, 0.0f, -0.3f, 0.6f, 0.1f, 0.0f, 0.0f, 0.9f, 0.2f, -1.3f, -0.9f, 0.1f, -0.1f, 0.8f, -1.7f, -0.5f, 0.4f, -0.3f, 0.2f, -0.4f, -1.1f, -1.4f, -0.7f, 0.1f, -0.8f, -0.3f, 0.1f, -0.6f, -1.0f, 0.9f, -1.4f, -0.3f, 0.2f, 1.6f, 0.0f, -0.2f, 0.4f, 2.0f, 0.3f, 0.2f, -0.5f, 0.0f, -0.5f, -0.3f, 0.2f, -0.2f, 0.5f, 1.0f, 2.4f, 0.0f, 0.1f, 0.3f, -0.4f, -0.6f, -1.3f, -0.1f, 0.6f, 0.0f, 0.1f, 0.2f, 0.5f, 0.8f, -0.1f, -0.7f, 0.0f, 1.1f, 0.8f, -0.5f, -0.2f, -0.5f, 0.0f, -1.7f, -1.2f, 0.3f, -0.7f, -0.4f, -0.6f, -1.1f, -0.8f, -1.0f, 0.0f, 0.1f, 0.6f, -0.7f, -0.1f, -0.4f, -0.5f, -0.8f, 0.0f, 0.7f, 0.3f, -0.3f, -1.6f, 0.2f, -1.3f, -0.3f, -0.7f, -1.7f, 0.5f, 0.0f, -0.1f, 0.1f, 0.3f, 0.7f, 0.3f, -0.4f, 0.0f, -0.1f, 2.1f, 1.6f, -0.8f, -0.7f, -0.1f, -1.5f, 0.2f, -1.2f, 0.0f, -0.2f, -0.7f, -0.9f, -0.3f, 0.0f, 0.9f, 1.3f, -0.6f, -0.2f, 0.2f, -0.3f, -1.5f, 0.0f, -0.7f, 0.6f, -0.4f, -0.8f, 0.9f, -0.3f, -0.2f, 0.0f, -0.2f, 0.2f, -0.2f, -0.4f, 0.2f, -0.4f, -0.9f, -0.1f, 0.2f, -0.6f, -0.2f, 0.0f, -0.1f, -0.3f, 0.7f, -0.2f, 0.7f, 0.6f, -0.3f, -0.9f, -0.4f, -1.0f, 0.6f, -0.3f, 0.1f, -0.2f, 0.4f, -1.3f, -0.4f, -2.8f, -0.8f, -0.2f, 1.2f, -1.4f, 0.5f, 0.0f, -0.3f, -0.6f, 0.3f, 0.7f, 1.2f, -0.4f, -1.4f, 1.2f, 0.2f, 1.0f, -0.1f, 0.1f, 0.5f, -0.1f, 0.9f, 0.3f, 0.6f, -0.7f, -0.1f, -0.3f, 2.2f, 0.0f, 0.3f, 1.4f, -0.8f, 1.4f, 0.5f, 0.0f, 0.8f, -0.2f, -0.4f, 0.0f, 0.2f, -0.2f, 0.2f, -0.4f, 0.3f, 0.7f, 0.1f, 1.1f, 1.0f, 0.0f, 0.7f, 0.0f, -0.5f, -0.4f, 0.0f, 0.3f, -0.2f, 0.6f, 0.5f, 0.0f, 0.6f, -1.2f, 1.3f, 0.5f, 1.0f, -2.6f, 1.4f, -0.7f, 1.0f, -0.9f, -0.1f, -0.3f, 1.2f, -0.3f, 0.6f, -0.4f, 0.4f, 0.8f, -0.2f, 0.3f, 0.1f, 1.1f, -1.2f, -0.7f, 0.2f, 1.2f, 0.1f, 0.3f, 0.0f, 0.5f, -0.8f, -0.3f, 0.1f, 0.0f, -0.7f, 0.0f, 0.1f, -1.1f, -1.0f, -1.4f, -0.5f, -0.9f, -0.6f, 0.3f, 0.0f, -0.2f, -0.3f, 0.1f, 0.2f, -0.3f, 0.6f, 0.1f, -0.2f, 0.5f, -0.6f, -0.9f, 1.3f, -0.2f, -1.0f, 1.9f, -0.3f, 0.3f, 0.6f, 1.1f, 0.0f, 0.2f, 0.7f, -0.4f, 0.0f, 0.1f, 0.2f, -0.5f, -0.5f, -1.2f, -0.7f, 0.3f, 0.3f, -0.5f, 0.9f, 1.8f, -1.1f, 0.6f, 0.6f, 0.5f, -0.4f, -0.4f, 1.1f, -0.6f, 0.3f, -1.0f, 0.2f, -0.5f, -1.5f, -1.7f, -0.3f, -0.9f, -0.2f, -1.0f, 0.1f, -0.1f, -0.3f, -1.5f, -0.9f, 0.4f, 1.2f, -0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nchw_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nchw_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 16, 4, 4}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.885f, 0.795f, 0.27f, 0.465f, 0.48f, 0.495f, 0.24f, 0.435f, 0.9f, 0.36f, 0.0f, 0.87f, 0.825f, 0.54f, 0.42f, 0.84f, 0.21f, 0.66f, 0.69f, 0.345f, 0.6f, 0.03f, 0.285f, 0.255f, 0.75f, 0.09f, 0.195f, 0.93f, 0.525f, 0.705f, 0.045f, 0.135f, 0.78f, 0.915f, 0.645f, 0.855f, 0.735f, 0.12f, 0.51f, 0.585f, 0.18f, 0.405f, 0.075f, 0.39f, 0.765f, 0.675f, 0.33f, 0.72f, 0.57f, 0.615f, 0.945f, 0.555f, 0.63f, 0.225f, 0.315f, 0.06f, 0.45f, 0.15f, 0.81f, 0.165f, 0.105f, 0.3f, 0.015f, 0.375f, 0.495f, 0.21f, 0.045f, 0.135f, 0.39f, 0.9f, 0.375f, 0.015f, 0.33f, 0.075f, 0.585f, 0.795f, 0.0f, 0.69f, 0.03f, 0.765f, 0.315f, 0.54f, 0.93f, 0.09f, 0.885f, 0.225f, 0.63f, 0.48f, 0.465f, 0.84f, 0.165f, 0.855f, 0.87f, 0.555f, 0.915f, 0.12f, 0.195f, 0.78f, 0.27f, 0.81f, 0.42f, 0.75f, 0.825f, 0.645f, 0.66f, 0.285f, 0.06f, 0.105f, 0.525f, 0.15f, 0.405f, 0.51f, 0.24f, 0.72f, 0.735f, 0.705f, 0.945f, 0.3f, 0.675f, 0.615f, 0.6f, 0.57f, 0.36f, 0.45f, 0.255f, 0.345f, 0.435f, 0.18f}}, {1, {-1.9f, -0.2f, -1.5f, 1.2f, 0.1f, 0.4f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.2f, 1.0f, -0.6f, -1.3f, -0.4f, 0.4f, 0.0f, 1.3f, -0.3f, 0.0f, -0.7f, 0.9f, 1.0f, 0.0f, 1.0f, 0.0f, -0.3f, 0.6f, -0.3f, 1.3f, -0.7f, 1.4f, 0.4f, -0.7f, 0.0f, 0.7f, -0.9f, -1.7f, -0.1f, 0.7f, -1.4f, -0.3f, -0.9f, 0.0f, 1.3f, 0.1f, -1.8f, 0.5f, 0.1f, -0.9f, 0.3f, -0.9f, 0.0f, 0.3f, -0.3f, 0.1f, -1.1f, 0.0f, 1.1f, -1.6f, 0.1f, 2.0f, 0.4f, -1.5f, -0.2f, 0.9f, -0.7f, 0.1f, 0.0f, 0.7f, -0.8f, -1.3f, 0.6f, -1.1f, 0.1f, 0.1f, 2.2f, 0.0f, -0.7f, -0.2f, -1.6f, 0.2f, 1.0f, -0.4f, 0.4f, -0.7f, 0.1f, 0.1f, -0.7f, -1.5f, 1.0f, -1.2f, 1.2f, 0.2f, 0.4f, 0.3f, -0.6f, -0.2f, -0.2f, 0.3f, -0.6f, 0.7f, -1.2f, -0.4f, 0.4f, 0.9f, 1.0f, 0.7f, -1.1f, 0.6f, 1.4f, 1.2f, -0.1f, 0.0f, -0.6f, -0.3f, 0.4f, 1.2f, -2.4f, -0.2f, 1.1f, -1.4f, -0.9f, 0.8f, 0.1f, 0.0f, -0.3f, 0.0f, -1.0f, -0.7f, -1.3f, -0.7f, -1.9f, -0.4f, 0.1f, 0.2f, -1.1f, -0.7f, 0.7f, 0.5f, 1.2f, -0.1f, 0.8f, -0.6f, 0.6f, 0.3f, 0.0f, 0.1f, -1.2f, -0.1f, 1.4f, 0.1f, 1.6f, 0.1f, 0.0f, -0.2f, 1.2f, -0.4f, 0.0f, 0.4f, 0.5f, -0.4f, 0.3f, 0.7f, 0.0f, -0.6f, 0.4f, -0.8f, -0.3f, -1.4f, -0.3f, -0.8f, 1.3f, -0.5f, 0.4f, -1.3f, -0.2f, -0.3f, 0.1f, 0.0f, -0.3f, 0.6f, 0.1f, 0.0f, 0.0f, 0.9f, 0.2f, -1.3f, -0.9f, 0.1f, -0.1f, 0.8f, -1.7f, -0.5f, 0.4f, -0.3f, 0.2f, -0.4f, -1.1f, -1.4f, -0.7f, 0.1f, -0.8f, -0.3f, 0.1f, -0.6f, -1.0f, 0.9f, -1.4f, -0.3f, 0.2f, 1.6f, 0.0f, -0.2f, 0.4f, 2.0f, 0.3f, 0.2f, -0.5f, 0.0f, -0.5f, -0.3f, 0.2f, -0.2f, 0.5f, 1.0f, 2.4f, 0.0f, 0.1f, 0.3f, -0.4f, -0.6f, -1.3f, -0.1f, 0.6f, 0.0f, 0.1f, 0.2f, 0.5f, 0.8f, -0.1f, -0.7f, 0.0f, 1.1f, 0.8f, -0.5f, -0.2f, -0.5f, 0.0f, -1.7f, -1.2f, 0.3f, -0.7f, -0.4f, -0.6f, -1.1f, -0.8f, -1.0f, 0.0f, 0.1f, 0.6f, -0.7f, -0.1f, -0.4f, -0.5f, -0.8f, 0.0f, 0.7f, 0.3f, -0.3f, -1.6f, 0.2f, -1.3f, -0.3f, -0.7f, -1.7f, 0.5f, 0.0f, -0.1f, 0.1f, 0.3f, 0.7f, 0.3f, -0.4f, 0.0f, -0.1f, 2.1f, 1.6f, -0.8f, -0.7f, -0.1f, -1.5f, 0.2f, -1.2f, 0.0f, -0.2f, -0.7f, -0.9f, -0.3f, 0.0f, 0.9f, 1.3f, -0.6f, -0.2f, 0.2f, -0.3f, -1.5f, 0.0f, -0.7f, 0.6f, -0.4f, -0.8f, 0.9f, -0.3f, -0.2f, 0.0f, -0.2f, 0.2f, -0.2f, -0.4f, 0.2f, -0.4f, -0.9f, -0.1f, 0.2f, -0.6f, -0.2f, 0.0f, -0.1f, -0.3f, 0.7f, -0.2f, 0.7f, 0.6f, -0.3f, -0.9f, -0.4f, -1.0f, 0.6f, -0.3f, 0.1f, -0.2f, 0.4f, -1.3f, -0.4f, -2.8f, -0.8f, -0.2f, 1.2f, -1.4f, 0.5f, 0.0f, -0.3f, -0.6f, 0.3f, 0.7f, 1.2f, -0.4f, -1.4f, 1.2f, 0.2f, 1.0f, -0.1f, 0.1f, 0.5f, -0.1f, 0.9f, 0.3f, 0.6f, -0.7f, -0.1f, -0.3f, 2.2f, 0.0f, 0.3f, 1.4f, -0.8f, 1.4f, 0.5f, 0.0f, 0.8f, -0.2f, -0.4f, 0.0f, 0.2f, -0.2f, 0.2f, -0.4f, 0.3f, 0.7f, 0.1f, 1.1f, 1.0f, 0.0f, 0.7f, 0.0f, -0.5f, -0.4f, 0.0f, 0.3f, -0.2f, 0.6f, 0.5f, 0.0f, 0.6f, -1.2f, 1.3f, 0.5f, 1.0f, -2.6f, 1.4f, -0.7f, 1.0f, -0.9f, -0.1f, -0.3f, 1.2f, -0.3f, 0.6f, -0.4f, 0.4f, 0.8f, -0.2f, 0.3f, 0.1f, 1.1f, -1.2f, -0.7f, 0.2f, 1.2f, 0.1f, 0.3f, 0.0f, 0.5f, -0.8f, -0.3f, 0.1f, 0.0f, -0.7f, 0.0f, 0.1f, -1.1f, -1.0f, -1.4f, -0.5f, -0.9f, -0.6f, 0.3f, 0.0f, -0.2f, -0.3f, 0.1f, 0.2f, -0.3f, 0.6f, 0.1f, -0.2f, 0.5f, -0.6f, -0.9f, 1.3f, -0.2f, -1.0f, 1.9f, -0.3f, 0.3f, 0.6f, 1.1f, 0.0f, 0.2f, 0.7f, -0.4f, 0.0f, 0.1f, 0.2f, -0.5f, -0.5f, -1.2f, -0.7f, 0.3f, 0.3f, -0.5f, 0.9f, 1.8f, -1.1f, 0.6f, 0.6f, 0.5f, -0.4f, -0.4f, 1.1f, -0.6f, 0.3f, -1.0f, 0.2f, -0.5f, -1.5f, -1.7f, -0.3f, -0.9f, -0.2f, -1.0f, 0.1f, -0.1f, -0.3f, -1.5f, -0.9f, 0.4f, 1.2f, -0.2f, -0.2f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.945f, 0.93f, 0.915f, 0.9f, 0.87f, 0.84f, 0.81f, 0.795f, 0.78f, 0.765f, 0.75f, 0.735f, 0.72f, 0.705f, 0.69f, 0.675f, 0.945f, 0.915f, 0.9f, 0.885f, 0.87f, 0.84f, 0.81f, 0.78f, 0.735f, 0.72f, 0.63f, 0.6f, 0.585f, 0.54f}}, {1, {16.845154f, 2.5170734f, 33.154846f, 7.4829264f, 32.96344f, 40.747444f, 43.836563f, 47.252556f, 0.0f, 9.143808f, 16.243607f, 14.056192f, 0.0f, 25.789658f, 25.710022f, 30.210342f, 37.947445f, 20.791668f, 44.452557f, 32.80833f, 30.277609f, 32.21635f, 32.92239f, 38.18365f, 25.885489f, 29.086582f, 31.314512f, 30.913418f, 2.8654022f, 5.789658f, 26.734598f, 10.210342f, 0.5408764f, 3.5824041f, 15.459124f, 5.217595f, 10.753355f, 35.982403f, 15.246645f, 37.617596f, 1.4593601f, 23.050154f, 4.1406403f, 36.149845f, 0.0f, 15.6f, 11.068764f, 21.6f, 38.54088f, 35.28549f, 53.45912f, 40.71451f, 26.134256f, 48.358635f, 27.465742f, 64.0f, 29.96254f, 3.1999998f, 33.23746f, 19.2f, 11.653517f, 43.980293f, 48.34648f, 46.41971f, 0.0f, 26.967152f, 26.748941f, 31.032848f, 28.590324f, 9.050154f, 32.0f, 22.149847f, 17.828777f, 19.00683f, 32.0f, 20.99317f, 3.5724945f, 7.273454f, 11.627505f, 19.126545f, 4.989658f, 26.8f, 9.410341f, 32.0f, 15.157195f, 18.00537f, 20.042807f, 25.194632f, 30.889404f, 9.652013f, 32.0f, 12.347987f, 3.399414f, 3.8000002f, 32.0f, 9.8f, 24.980408f, 10.086582f, 28.61959f, 11.913418f, 13.950423f, 3.884349f, 22.049576f, 6.115651f, 24.259361f, 6.8f, 26.94064f, 22.8f, 3.6538367f, 19.475813f, 13.546164f, 28.524187f, 11.947443f, 29.318363f, 18.452557f, 32.0f, 17.318363f, 0.0f, 20.281635f, 16.17695f}}},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nchw_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_nchw_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {2, 4, 4, 4}}, {1, {2, 16, 4, 4}}, {2, {4, 4}}, {3, {2, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.8849999904632568f, 0.7950000166893005f, 0.27000001072883606f, 0.4650000035762787f, 0.47999998927116394f, 0.4950000047683716f, 0.23999999463558197f, 0.4350000023841858f, 0.8999999761581421f, 0.36000001430511475f, 0.0f, 0.8700000047683716f, 0.824999988079071f, 0.5400000214576721f, 0.41999998688697815f, 0.8399999737739563f, 0.20999999344348907f, 0.6600000262260437f, 0.6899999976158142f, 0.3449999988079071f, 0.6000000238418579f, 0.029999999329447746f, 0.2849999964237213f, 0.2549999952316284f, 0.75f, 0.09000000357627869f, 0.19499999284744263f, 0.9300000071525574f, 0.5249999761581421f, 0.7049999833106995f, 0.04500000178813934f, 0.13500000536441803f, 0.7799999713897705f, 0.9150000214576721f, 0.6449999809265137f, 0.8550000190734863f, 0.7350000143051147f, 0.11999999731779099f, 0.5099999904632568f, 0.5849999785423279f, 0.18000000715255737f, 0.4050000011920929f, 0.07500000298023224f, 0.38999998569488525f, 0.7649999856948853f, 0.675000011920929f, 0.33000001311302185f, 0.7200000286102295f, 0.5699999928474426f, 0.6150000095367432f, 0.9449999928474426f, 0.5550000071525574f, 0.6299999952316284f, 0.22499999403953552f, 0.3149999976158142f, 0.05999999865889549f, 0.44999998807907104f, 0.15000000596046448f, 0.8100000023841858f, 0.16500000655651093f, 0.10499999672174454f, 0.30000001192092896f, 0.014999999664723873f, 0.375f, 0.4950000047683716f, 0.20999999344348907f, 0.04500000178813934f, 0.13500000536441803f, 0.38999998569488525f, 0.8999999761581421f, 0.375f, 0.014999999664723873f, 0.33000001311302185f, 0.07500000298023224f, 0.5849999785423279f, 0.7950000166893005f, 0.0f, 0.6899999976158142f, 0.029999999329447746f, 0.7649999856948853f, 0.3149999976158142f, 0.5400000214576721f, 0.9300000071525574f, 0.09000000357627869f, 0.8849999904632568f, 0.22499999403953552f, 0.6299999952316284f, 0.47999998927116394f, 0.4650000035762787f, 0.8399999737739563f, 0.16500000655651093f, 0.8550000190734863f, 0.8700000047683716f, 0.5550000071525574f, 0.9150000214576721f, 0.11999999731779099f, 0.19499999284744263f, 0.7799999713897705f, 0.27000001072883606f, 0.8100000023841858f, 0.41999998688697815f, 0.75f, 0.824999988079071f, 0.6449999809265137f, 0.6600000262260437f, 0.2849999964237213f, 0.05999999865889549f, 0.10499999672174454f, 0.5249999761581421f, 0.15000000596046448f, 0.4050000011920929f, 0.5099999904632568f, 0.23999999463558197f, 0.7200000286102295f, 0.7350000143051147f, 0.7049999833106995f, 0.9449999928474426f, 0.30000001192092896f, 0.675000011920929f, 0.6150000095367432f, 0.6000000238418579f, 0.5699999928474426f, 0.36000001430511475f, 0.44999998807907104f, 0.2549999952316284f, 0.3449999988079071f, 0.4350000023841858f, 0.18000000715255737f}}, {1, {-1.899999976158142f, -0.20000000298023224f, -1.5f, 1.2000000476837158f, 0.10000000149011612f, 0.4000000059604645f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.20000000298023224f, 1.0f, -0.6000000238418579f, -1.2999999523162842f, -0.4000000059604645f, 0.4000000059604645f, 0.0f, 1.2999999523162842f, -0.30000001192092896f, 0.0f, -0.699999988079071f, 0.8999999761581421f, 1.0f, 0.0f, 1.0f, 0.0f, -0.30000001192092896f, 0.6000000238418579f, -0.30000001192092896f, 1.2999999523162842f, -0.699999988079071f, 1.399999976158142f, 0.4000000059604645f, -0.699999988079071f, 0.0f, 0.699999988079071f, -0.8999999761581421f, -1.7000000476837158f, -0.10000000149011612f, 0.699999988079071f, -1.399999976158142f, -0.30000001192092896f, -0.8999999761581421f, 0.0f, 1.2999999523162842f, 0.10000000149011612f, -1.7999999523162842f, 0.5f, 0.10000000149011612f, -0.8999999761581421f, 0.30000001192092896f, -0.8999999761581421f, 0.0f, 0.30000001192092896f, -0.30000001192092896f, 0.10000000149011612f, -1.100000023841858f, 0.0f, 1.100000023841858f, -1.600000023841858f, 0.10000000149011612f, 2.0f, 0.4000000059604645f, -1.5f, -0.20000000298023224f, 0.8999999761581421f, -0.699999988079071f, 0.10000000149011612f, 0.0f, 0.699999988079071f, -0.800000011920929f, -1.2999999523162842f, 0.6000000238418579f, -1.100000023841858f, 0.10000000149011612f, 0.10000000149011612f, 2.200000047683716f, 0.0f, -0.699999988079071f, -0.20000000298023224f, -1.600000023841858f, 0.20000000298023224f, 1.0f, -0.4000000059604645f, 0.4000000059604645f, -0.699999988079071f, 0.10000000149011612f, 0.10000000149011612f, -0.699999988079071f, -1.5f, 1.0f, -1.2000000476837158f, 1.2000000476837158f, 0.20000000298023224f, 0.4000000059604645f, 0.30000001192092896f, -0.6000000238418579f, -0.20000000298023224f, -0.20000000298023224f, 0.30000001192092896f, -0.6000000238418579f, 0.699999988079071f, -1.2000000476837158f, -0.4000000059604645f, 0.4000000059604645f, 0.8999999761581421f, 1.0f, 0.699999988079071f, -1.100000023841858f, 0.6000000238418579f, 1.399999976158142f, 1.2000000476837158f, -0.10000000149011612f, 0.0f, -0.6000000238418579f, -0.30000001192092896f, 0.4000000059604645f, 1.2000000476837158f, -2.4000000953674316f, -0.20000000298023224f, 1.100000023841858f, -1.399999976158142f, -0.8999999761581421f, 0.800000011920929f, 0.10000000149011612f, 0.0f, -0.30000001192092896f, 0.0f, -1.0f, -0.699999988079071f, -1.2999999523162842f, -0.699999988079071f, -1.899999976158142f, -0.4000000059604645f, 0.10000000149011612f, 0.20000000298023224f, -1.100000023841858f, -0.699999988079071f, 0.699999988079071f, 0.5f, 1.2000000476837158f, -0.10000000149011612f, 0.800000011920929f, -0.6000000238418579f, 0.6000000238418579f, 0.30000001192092896f, 0.0f, 0.10000000149011612f, -1.2000000476837158f, -0.10000000149011612f, 1.399999976158142f, 0.10000000149011612f, 1.600000023841858f, 0.10000000149011612f, 0.0f, -0.20000000298023224f, 1.2000000476837158f, -0.4000000059604645f, 0.0f, 0.4000000059604645f, 0.5f, -0.4000000059604645f, 0.30000001192092896f, 0.699999988079071f, 0.0f, -0.6000000238418579f, 0.4000000059604645f, -0.800000011920929f, -0.30000001192092896f, -1.399999976158142f, -0.30000001192092896f, -0.800000011920929f, 1.2999999523162842f, -0.5f, 0.4000000059604645f, -1.2999999523162842f, -0.20000000298023224f, -0.30000001192092896f, 0.10000000149011612f, 0.0f, -0.30000001192092896f, 0.6000000238418579f, 0.10000000149011612f, 0.0f, 0.0f, 0.8999999761581421f, 0.20000000298023224f, -1.2999999523162842f, -0.8999999761581421f, 0.10000000149011612f, -0.10000000149011612f, 0.800000011920929f, -1.7000000476837158f, -0.5f, 0.4000000059604645f, -0.30000001192092896f, 0.20000000298023224f, -0.4000000059604645f, -1.100000023841858f, -1.399999976158142f, -0.699999988079071f, 0.10000000149011612f, -0.800000011920929f, -0.30000001192092896f, 0.10000000149011612f, -0.6000000238418579f, -1.0f, 0.8999999761581421f, -1.399999976158142f, -0.30000001192092896f, 0.20000000298023224f, 1.600000023841858f, 0.0f, -0.20000000298023224f, 0.4000000059604645f, 2.0f, 0.30000001192092896f, 0.20000000298023224f, -0.5f, 0.0f, -0.5f, -0.30000001192092896f, 0.20000000298023224f, -0.20000000298023224f, 0.5f, 1.0f, 2.4000000953674316f, 0.0f, 0.10000000149011612f, 0.30000001192092896f, -0.4000000059604645f, -0.6000000238418579f, -1.2999999523162842f, -0.10000000149011612f, 0.6000000238418579f, 0.0f, 0.10000000149011612f, 0.20000000298023224f, 0.5f, 0.800000011920929f, -0.10000000149011612f, -0.699999988079071f, 0.0f, 1.100000023841858f, 0.800000011920929f, -0.5f, -0.20000000298023224f, -0.5f, 0.0f, -1.7000000476837158f, -1.2000000476837158f, 0.30000001192092896f, -0.699999988079071f, -0.4000000059604645f, -0.6000000238418579f, -1.100000023841858f, -0.800000011920929f, -1.0f, 0.0f, 0.10000000149011612f, 0.6000000238418579f, -0.699999988079071f, -0.10000000149011612f, -0.4000000059604645f, -0.5f, -0.800000011920929f, 0.0f, 0.699999988079071f, 0.30000001192092896f, -0.30000001192092896f, -1.600000023841858f, 0.20000000298023224f, -1.2999999523162842f, -0.30000001192092896f, -0.699999988079071f, -1.7000000476837158f, 0.5f, 0.0f, -0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, 0.699999988079071f, 0.30000001192092896f, -0.4000000059604645f, 0.0f, -0.10000000149011612f, 2.0999999046325684f, 1.600000023841858f, -0.800000011920929f, -0.699999988079071f, -0.10000000149011612f, -1.5f, 0.20000000298023224f, -1.2000000476837158f, 0.0f, -0.20000000298023224f, -0.699999988079071f, -0.8999999761581421f, -0.30000001192092896f, 0.0f, 0.8999999761581421f, 1.2999999523162842f, -0.6000000238418579f, -0.20000000298023224f, 0.20000000298023224f, -0.30000001192092896f, -1.5f, 0.0f, -0.699999988079071f, 0.6000000238418579f, -0.4000000059604645f, -0.800000011920929f, 0.8999999761581421f, -0.30000001192092896f, -0.20000000298023224f, 0.0f, -0.20000000298023224f, 0.20000000298023224f, -0.20000000298023224f, -0.4000000059604645f, 0.20000000298023224f, -0.4000000059604645f, -0.8999999761581421f, -0.10000000149011612f, 0.20000000298023224f, -0.6000000238418579f, -0.20000000298023224f, 0.0f, -0.10000000149011612f, -0.30000001192092896f, 0.699999988079071f, -0.20000000298023224f, 0.699999988079071f, 0.6000000238418579f, -0.30000001192092896f, -0.8999999761581421f, -0.4000000059604645f, -1.0f, 0.6000000238418579f, -0.30000001192092896f, 0.10000000149011612f, -0.20000000298023224f, 0.4000000059604645f, -1.2999999523162842f, -0.4000000059604645f, -2.799999952316284f, -0.800000011920929f, -0.20000000298023224f, 1.2000000476837158f, -1.399999976158142f, 0.5f, 0.0f, -0.30000001192092896f, -0.6000000238418579f, 0.30000001192092896f, 0.699999988079071f, 1.2000000476837158f, -0.4000000059604645f, -1.399999976158142f, 1.2000000476837158f, 0.20000000298023224f, 1.0f, -0.10000000149011612f, 0.10000000149011612f, 0.5f, -0.10000000149011612f, 0.8999999761581421f, 0.30000001192092896f, 0.6000000238418579f, -0.699999988079071f, -0.10000000149011612f, -0.30000001192092896f, 2.200000047683716f, 0.0f, 0.30000001192092896f, 1.399999976158142f, -0.800000011920929f, 1.399999976158142f, 0.5f, 0.0f, 0.800000011920929f, -0.20000000298023224f, -0.4000000059604645f, 0.0f, 0.20000000298023224f, -0.20000000298023224f, 0.20000000298023224f, -0.4000000059604645f, 0.30000001192092896f, 0.699999988079071f, 0.10000000149011612f, 1.100000023841858f, 1.0f, 0.0f, 0.699999988079071f, 0.0f, -0.5f, -0.4000000059604645f, 0.0f, 0.30000001192092896f, -0.20000000298023224f, 0.6000000238418579f, 0.5f, 0.0f, 0.6000000238418579f, -1.2000000476837158f, 1.2999999523162842f, 0.5f, 1.0f, -2.5999999046325684f, 1.399999976158142f, -0.699999988079071f, 1.0f, -0.8999999761581421f, -0.10000000149011612f, -0.30000001192092896f, 1.2000000476837158f, -0.30000001192092896f, 0.6000000238418579f, -0.4000000059604645f, 0.4000000059604645f, 0.800000011920929f, -0.20000000298023224f, 0.30000001192092896f, 0.10000000149011612f, 1.100000023841858f, -1.2000000476837158f, -0.699999988079071f, 0.20000000298023224f, 1.2000000476837158f, 0.10000000149011612f, 0.30000001192092896f, 0.0f, 0.5f, -0.800000011920929f, -0.30000001192092896f, 0.10000000149011612f, 0.0f, -0.699999988079071f, 0.0f, 0.10000000149011612f, -1.100000023841858f, -1.0f, -1.399999976158142f, -0.5f, -0.8999999761581421f, -0.6000000238418579f, 0.30000001192092896f, 0.0f, -0.20000000298023224f, -0.30000001192092896f, 0.10000000149011612f, 0.20000000298023224f, -0.30000001192092896f, 0.6000000238418579f, 0.10000000149011612f, -0.20000000298023224f, 0.5f, -0.6000000238418579f, -0.8999999761581421f, 1.2999999523162842f, -0.20000000298023224f, -1.0f, 1.899999976158142f, -0.30000001192092896f, 0.30000001192092896f, 0.6000000238418579f, 1.100000023841858f, 0.0f, 0.20000000298023224f, 0.699999988079071f, -0.4000000059604645f, 0.0f, 0.10000000149011612f, 0.20000000298023224f, -0.5f, -0.5f, -1.2000000476837158f, -0.699999988079071f, 0.30000001192092896f, 0.30000001192092896f, -0.5f, 0.8999999761581421f, 1.7999999523162842f, -1.100000023841858f, 0.6000000238418579f, 0.6000000238418579f, 0.5f, -0.4000000059604645f, -0.4000000059604645f, 1.100000023841858f, -0.6000000238418579f, 0.30000001192092896f, -1.0f, 0.20000000298023224f, -0.5f, -1.5f, -1.7000000476837158f, -0.30000001192092896f, -0.8999999761581421f, -0.20000000298023224f, -1.0f, 0.10000000149011612f, -0.10000000149011612f, -0.30000001192092896f, -1.5f, -0.8999999761581421f, 0.4000000059604645f, 1.2000000476837158f, -0.20000000298023224f, -0.20000000298023224f}}, {2, {0.0f, 6.0f, 16.0f, 10.0f, 6.0f, 0.0f, 10.0f, 16.0f, 3.0f, 5.0f, 13.0f, 11.0f, 5.0f, 3.0f, 11.0f, 13.0f}}, {3, {64.0f, 64.0f, 32.0f, 32.0f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {30}}, {1, {30, 4}}, {2, {2}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {16, 14}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {0.9449999928474426f, 0.9300000071525574f, 0.9150000214576721f, 0.8999999761581421f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7950000166893005f, 0.7799999713897705f, 0.7649999856948853f, 0.75f, 0.7350000143051147f, 0.7200000286102295f, 0.7049999833106995f, 0.6899999976158142f, 0.675000011920929f, 0.9449999928474426f, 0.9150000214576721f, 0.8999999761581421f, 0.8849999904632568f, 0.8700000047683716f, 0.8399999737739563f, 0.8100000023841858f, 0.7799999713897705f, 0.7350000143051147f, 0.7200000286102295f, 0.6299999952316284f, 0.6000000238418579f, 0.5849999785423279f, 0.5400000214576721f}}, {1, {16.84515380859375f, 2.517073392868042f, 33.15484619140625f, 7.482926368713379f, 32.96343994140625f, 40.74744415283203f, 43.83656311035156f, 47.25255584716797f, 0.0f, 9.143808364868164f, 16.243606567382812f, 14.056192398071289f, 0.0f, 25.789657592773438f, 25.71002197265625f, 30.210342407226562f, 37.947444915771484f, 20.791667938232422f, 44.45255661010742f, 32.80833053588867f, 30.27760887145996f, 32.21635055541992f, 32.92238998413086f, 38.183650970458984f, 25.885488510131836f, 29.08658218383789f, 31.314512252807617f, 30.91341781616211f, 2.8654022216796875f, 5.789658069610596f, 26.73459815979004f, 10.210342407226562f, 0.5408763885498047f, 3.582404136657715f, 15.459123611450195f, 5.217595100402832f, 10.753355026245117f, 35.98240280151367f, 15.246644973754883f, 37.61759567260742f, 1.459360122680664f, 23.050153732299805f, 4.1406402587890625f, 36.149845123291016f, 0.0f, 15.600000381469727f, 11.068763732910156f, 21.600000381469727f, 38.54087829589844f, 35.28548812866211f, 53.45912170410156f, 40.71451187133789f, 26.13425636291504f, 48.35863494873047f, 27.465742111206055f, 64.0f, 29.962539672851562f, 3.1999998092651367f, 33.23746109008789f, 19.200000762939453f, 11.65351676940918f, 43.98029327392578f, 48.34648132324219f, 46.419708251953125f, 0.0f, 26.967151641845703f, 26.74894142150879f, 31.032848358154297f, 28.59032440185547f, 9.050153732299805f, 32.0f, 22.14984703063965f, 17.828777313232422f, 19.0068302154541f, 32.0f, 20.9931697845459f, 3.5724945068359375f, 7.273454189300537f, 11.6275053024292f, 19.126544952392578f, 4.989657878875732f, 26.799999237060547f, 9.410341262817383f, 32.0f, 15.157195091247559f, 18.005369186401367f, 20.04280662536621f, 25.194631576538086f, 30.889404296875f, 9.652012825012207f, 32.0f, 12.347987174987793f, 3.3994140625f, 3.8000001907348633f, 32.0f, 9.800000190734863f, 24.98040771484375f, 10.08658218383789f, 28.619590759277344f, 11.91341781616211f, 13.950423240661621f, 3.8843491077423096f, 22.049575805664062f, 6.1156511306762695f, 24.259361267089844f, 6.800000190734863f, 26.94063949584961f, 22.799999237060547f, 3.653836727142334f, 19.475812911987305f, 13.546163558959961f, 28.524187088012695f, 11.947443008422852f, 29.318363189697266f, 18.452556610107422f, 32.0f, 17.318363189697266f, 0.0f, 20.281635284423828f, 16.176950454711914f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape_nchw_float16_2;
};

