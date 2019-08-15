// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, transpose_conv2d_large_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_quant8, generated_tests::transpose_conv2d_large::CreateModel_quant8)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8(Model *model);
bool is_ignored_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8();

TEST_F(GeneratedTests, transpose_conv2d_large_channelQuant8) {
    execute(CreateModel_channelQuant8,
            is_ignored_channelQuant8,
            get_examples_channelQuant8());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_channelQuant8, generated_tests::transpose_conv2d_large::CreateModel_channelQuant8)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_dynamic_output_shape_quant8(Model *model);
bool is_ignored_dynamic_output_shape_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_dynamic_output_shape_quant8) {
    execute(CreateModel_dynamic_output_shape_quant8,
            is_ignored_dynamic_output_shape_quant8,
            get_examples_dynamic_output_shape_quant8());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_dynamic_output_shape_channelQuant8(Model *model);
bool is_ignored_dynamic_output_shape_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_channelQuant8();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_dynamic_output_shape_channelQuant8) {
    execute(CreateModel_dynamic_output_shape_channelQuant8,
            is_ignored_dynamic_output_shape_channelQuant8,
            get_examples_dynamic_output_shape_channelQuant8());
}

} // namespace generated_tests::transpose_conv2d_large

