// clang-format off
// Generated file (from: axis_aligned_bbox_transform.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples() {
static std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {4}}, {3, {4, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {4}}, {3, {4, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {4}}, {3, {4, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 2, 1}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.5f, 0.20000000298023224f, 0.20000000298023224f, -0.5f, -0.10000000149011612f, -0.10000000149011612f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f, 0.30000001192092896f, -0.20000000298023224f, 1.100000023841858f, -0.800000011920929f, 0.10000000149011612f, 0.05000000074505806f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.699999988079071f, 1024.0f, 512.0f, 2.0f}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {144.22434997558594f, 191.27606201171875f, 475.775634765625f, 500.72393798828125f, 217.1903839111328f, 107.27606201171875f, 462.80963134765625f, 416.72393798828125f, 59.38929748535156f, 30.198368072509766f, 60.61070251464844f, 30.501632690429688f, 54.308753967285156f, 25.17861557006836f, 66.49124908447266f, 35.22138595581055f, 0.0f, 0.0f, 16.51398468017578f, 42.54195785522461f, 13.21904468536377f, 31.837459564208984f, 14.78095531463623f, 38.162540435791016f, 82.2574462890625f, 146.86663818359375f, 85.74254608154297f, 148.53335571289062f, 92.75493621826172f, 8.983185768127441f, 179.1999969482422f, 159.0167999267578f, 0.0f, 486.27496337890625f, 1024.0f, 2048.0f, 1024.0f, 1137.5916748046875f, 1024.0f, 2048.0f}}},
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
return examples_float16;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {4}}, {3, {4, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_relaxed() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {4}}, {3, {4, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_float16() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_float16 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {4}}, {3, {4, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 1, 2, 1}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.5f, 0.20000000298023224f, 0.20000000298023224f, -0.5f, -0.10000000149011612f, -0.10000000149011612f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f, 0.30000001192092896f, -0.20000000298023224f, 1.100000023841858f, -0.800000011920929f, 0.10000000149011612f, 0.05000000074505806f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 128.0f, 256.0f, 0.5f, 256.0f, 256.0f, 0.699999988079071f, 1024.0f, 512.0f, 2.0f}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {144.22434997558594f, 191.27606201171875f, 475.775634765625f, 500.72393798828125f, 217.1903839111328f, 107.27606201171875f, 462.80963134765625f, 416.72393798828125f, 59.38929748535156f, 30.198368072509766f, 60.61070251464844f, 30.501632690429688f, 54.308753967285156f, 25.17861557006836f, 66.49124908447266f, 35.22138595581055f, 0.0f, 0.0f, 16.51398468017578f, 42.54195785522461f, 13.21904468536377f, 31.837459564208984f, 14.78095531463623f, 38.162540435791016f, 82.2574462890625f, 146.86663818359375f, 85.74254608154297f, 148.53335571289062f, 92.75493621826172f, 8.983185768127441f, 179.1999969482422f, 159.0167999267578f, 0.0f, 486.27496337890625f, 1024.0f, 2048.0f, 1024.0f, 1137.5916748046875f, 1024.0f, 2048.0f}}},
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
return examples_dynamic_output_shape_float16;
};

std::vector<MixedTypedExample>& get_examples_2() {
static std::vector<MixedTypedExample> examples_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {7}}, {3, {7, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 32.0f, 32.0f, 0.1f, 128.0f, 256.0f, 0.5f, 32.0f, 32.0f, 0.1f, 32.0f, 32.0f, 0.1f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 0, 1, 0, 0, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {7}}, {3, {7, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 32.0f, 32.0f, 0.1f, 128.0f, 256.0f, 0.5f, 32.0f, 32.0f, 0.1f, 32.0f, 32.0f, 0.1f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 0, 1, 0, 0, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {7}}, {3, {7, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 0, 1, 0, 0, 2, 1}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.5f, 0.20000000298023224f, 0.20000000298023224f, -0.5f, -0.10000000149011612f, -0.10000000149011612f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f, 0.30000001192092896f, -0.20000000298023224f, 1.100000023841858f, -0.800000011920929f, 0.10000000149011612f, 0.05000000074505806f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 32.0f, 32.0f, 0.10000000149011612f, 128.0f, 256.0f, 0.5f, 32.0f, 32.0f, 0.10000000149011612f, 32.0f, 32.0f, 0.10000000149011612f, 256.0f, 256.0f, 0.699999988079071f, 1024.0f, 512.0f, 2.0f}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {144.22434997558594f, 191.27606201171875f, 475.775634765625f, 500.72393798828125f, 217.1903839111328f, 107.27606201171875f, 462.80963134765625f, 416.72393798828125f, 59.38929748535156f, 30.198368072509766f, 60.61070251464844f, 30.501632690429688f, 54.308753967285156f, 25.17861557006836f, 66.49124908447266f, 35.22138595581055f, 0.0f, 0.0f, 16.51398468017578f, 42.54195785522461f, 13.21904468536377f, 31.837459564208984f, 14.78095531463623f, 38.162540435791016f, 82.2574462890625f, 146.86663818359375f, 85.74254608154297f, 148.53335571289062f, 92.75493621826172f, 8.983185768127441f, 179.1999969482422f, 159.0167999267578f, 0.0f, 486.27496337890625f, 1024.0f, 2048.0f, 1024.0f, 1137.5916748046875f, 1024.0f, 2048.0f}}},
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
return examples_float16_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {7}}, {3, {7, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 32.0f, 32.0f, 0.1f, 128.0f, 256.0f, 0.5f, 32.0f, 32.0f, 0.1f, 32.0f, 32.0f, 0.1f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 0, 1, 0, 0, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_relaxed_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {7}}, {3, {7, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.2f, 0.2f, 0.1f, 0.1f, 0.3f, -0.1f, -0.2f, 0.1f, -0.5f, 0.2f, 0.2f, -0.5f, -0.1f, -0.1f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2f, 0.2f, 0.2f, -3.0f, -4.0f, 1.0f, -0.5f, 0.3f, 0.5f, 0.3f, -0.2f, 1.1f, -0.8f, 0.1f, 0.05f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 32.0f, 32.0f, 0.1f, 128.0f, 256.0f, 0.5f, 32.0f, 32.0f, 0.1f, 32.0f, 32.0f, 0.1f, 256.0f, 256.0f, 0.7f, 1024.0f, 512.0f, 2.0f}}},
  // int -> INT32 map
  .int32Operands = {{2, {1, 0, 1, 0, 0, 2, 1}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {144.22435f, 191.276062f, 475.775635f, 500.723938f, 217.190384f, 107.276062f, 462.809631f, 416.723938f, 59.389297f, 30.198368f, 60.610703f, 30.501633f, 54.308754f, 25.178616f, 66.491249f, 35.221386f, 0.0f, 0.0f, 16.513985f, 42.541958f, 13.219045f, 31.83746f, 14.780955f, 38.16254f, 82.257446f, 146.866638f, 85.742546f, 148.533356f, 92.754936f, 8.983186f, 179.199997f, 159.0168f, 0.0f, 486.274963f, 1024.0f, 2048.0f, 1024.0f, 1137.591675f, 1024.0f, 2048.0f}}},
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
}
},
}, // End of an example
};
return examples_dynamic_output_shape_relaxed_2;
};

std::vector<MixedTypedExample>& get_examples_dynamic_output_shape_float16_2() {
static std::vector<MixedTypedExample> examples_dynamic_output_shape_float16_2 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {5, 4}}, {1, {5, 8}}, {2, {7}}, {3, {7, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{2, {1, 0, 1, 0, 0, 2, 1}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {100.0f, 150.0f, 400.0f, 430.0f, 120.0f, 60.0f, 122.0f, 61.0f, 10.0f, 20.0f, 20.0f, 50.0f, 50.0f, 120.0f, 150.0f, 250.0f, 400.0f, 100.0f, 1000.0f, 2000.0f}}, {1, {0.20000000298023224f, 0.20000000298023224f, 0.10000000149011612f, 0.10000000149011612f, 0.30000001192092896f, -0.10000000149011612f, -0.20000000298023224f, 0.10000000149011612f, -0.5f, 0.20000000298023224f, 0.20000000298023224f, -0.5f, -0.10000000149011612f, -0.10000000149011612f, 2.5f, 3.0f, -0.5f, -0.5f, 1.0f, 1.0f, 0.5f, 0.5f, -1.5f, -1.2000000476837158f, 0.20000000298023224f, 0.20000000298023224f, -3.0f, -4.0f, 1.0f, -0.5f, 0.30000001192092896f, 0.5f, 0.30000001192092896f, -0.20000000298023224f, 1.100000023841858f, -0.800000011920929f, 0.10000000149011612f, 0.05000000074505806f, -0.5f, -0.5f}}, {3, {512.0f, 512.0f, 1.0f, 32.0f, 32.0f, 0.10000000149011612f, 128.0f, 256.0f, 0.5f, 32.0f, 32.0f, 0.10000000149011612f, 32.0f, 32.0f, 0.10000000149011612f, 256.0f, 256.0f, 0.699999988079071f, 1024.0f, 512.0f, 2.0f}}},
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
  .operandDimensions = {{0, {5, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {144.22434997558594f, 191.27606201171875f, 475.775634765625f, 500.72393798828125f, 217.1903839111328f, 107.27606201171875f, 462.80963134765625f, 416.72393798828125f, 59.38929748535156f, 30.198368072509766f, 60.61070251464844f, 30.501632690429688f, 54.308753967285156f, 25.17861557006836f, 66.49124908447266f, 35.22138595581055f, 0.0f, 0.0f, 16.51398468017578f, 42.54195785522461f, 13.21904468536377f, 31.837459564208984f, 14.78095531463623f, 38.162540435791016f, 82.2574462890625f, 146.86663818359375f, 85.74254608154297f, 148.53335571289062f, 92.75493621826172f, 8.983185768127441f, 179.1999969482422f, 159.0167999267578f, 0.0f, 486.27496337890625f, 1024.0f, 2048.0f, 1024.0f, 1137.5916748046875f, 1024.0f, 2048.0f}}},
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
return examples_dynamic_output_shape_float16_2;
};

