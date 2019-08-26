// Generated from conv2d_per_channel.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv2d_per_channel {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, conv2d_per_channel) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel, generated_tests::conv2d_per_channel::CreateModel)

namespace generated_tests::conv2d_per_channel {

void CreateModel_weight_as_input(Model *model);
bool is_ignored_weight_as_input(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input();

TEST_F(GeneratedTests, conv2d_per_channel_weight_as_input) {
    execute(CreateModel_weight_as_input,
            is_ignored_weight_as_input,
            get_examples_weight_as_input());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_weight_as_input, generated_tests::conv2d_per_channel::CreateModel_weight_as_input)

namespace generated_tests::conv2d_per_channel {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_dynamic_output_shape_weight_as_input(Model *model);
bool is_ignored_dynamic_output_shape_weight_as_input(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_dynamic_output_shape_weight_as_input) {
    execute(CreateModel_dynamic_output_shape_weight_as_input,
            is_ignored_dynamic_output_shape_weight_as_input,
            get_examples_dynamic_output_shape_weight_as_input());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc(Model *model);
bool is_ignored_layouts_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_nhwc();

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nhwc) {
    execute(CreateModel_layouts_nhwc,
            is_ignored_layouts_nhwc,
            get_examples_layouts_nhwc());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_layouts_nhwc, generated_tests::conv2d_per_channel::CreateModel_layouts_nhwc)

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nhwc_weight_as_input(Model *model);
bool is_ignored_layouts_nhwc_weight_as_input(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_nhwc_weight_as_input();

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nhwc_weight_as_input) {
    execute(CreateModel_layouts_nhwc_weight_as_input,
            is_ignored_layouts_nhwc_weight_as_input,
            get_examples_layouts_nhwc_weight_as_input());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_layouts_nhwc_weight_as_input, generated_tests::conv2d_per_channel::CreateModel_layouts_nhwc_weight_as_input)

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw(Model *model);
bool is_ignored_layouts_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_nchw();

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nchw) {
    execute(CreateModel_layouts_nchw,
            is_ignored_layouts_nchw,
            get_examples_layouts_nchw());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_layouts_nchw, generated_tests::conv2d_per_channel::CreateModel_layouts_nchw)

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_nchw_weight_as_input(Model *model);
bool is_ignored_layouts_nchw_weight_as_input(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_nchw_weight_as_input();

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nchw_weight_as_input) {
    execute(CreateModel_layouts_nchw_weight_as_input,
            is_ignored_layouts_nchw_weight_as_input,
            get_examples_layouts_nchw_weight_as_input());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_layouts_nchw_weight_as_input, generated_tests::conv2d_per_channel::CreateModel_layouts_nchw_weight_as_input)

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_dynamic_output_shape_nhwc(Model *model);
bool is_ignored_layouts_dynamic_output_shape_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_dynamic_output_shape_nhwc();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_dynamic_output_shape_nhwc) {
    execute(CreateModel_layouts_dynamic_output_shape_nhwc,
            is_ignored_layouts_dynamic_output_shape_nhwc,
            get_examples_layouts_dynamic_output_shape_nhwc());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_dynamic_output_shape_nhwc_weight_as_input(Model *model);
bool is_ignored_layouts_dynamic_output_shape_nhwc_weight_as_input(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_dynamic_output_shape_nhwc_weight_as_input();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_dynamic_output_shape_nhwc_weight_as_input) {
    execute(CreateModel_layouts_dynamic_output_shape_nhwc_weight_as_input,
            is_ignored_layouts_dynamic_output_shape_nhwc_weight_as_input,
            get_examples_layouts_dynamic_output_shape_nhwc_weight_as_input());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_dynamic_output_shape_nchw(Model *model);
bool is_ignored_layouts_dynamic_output_shape_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_dynamic_output_shape_nchw();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_dynamic_output_shape_nchw) {
    execute(CreateModel_layouts_dynamic_output_shape_nchw,
            is_ignored_layouts_dynamic_output_shape_nchw,
            get_examples_layouts_dynamic_output_shape_nchw());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_layouts_dynamic_output_shape_nchw_weight_as_input(Model *model);
bool is_ignored_layouts_dynamic_output_shape_nchw_weight_as_input(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_layouts_dynamic_output_shape_nchw_weight_as_input();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_dynamic_output_shape_nchw_weight_as_input) {
    execute(CreateModel_layouts_dynamic_output_shape_nchw_weight_as_input,
            is_ignored_layouts_dynamic_output_shape_nchw_weight_as_input,
            get_examples_layouts_dynamic_output_shape_nchw_weight_as_input());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_nhwc(Model *model);
bool is_ignored_zero_sized_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

TEST_F(GeneratedTests, conv2d_per_channel_zero_sized_nhwc) {
    execute(CreateModel_zero_sized_nhwc,
            is_ignored_zero_sized_nhwc,
            get_examples_zero_sized_nhwc());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_zero_sized_nhwc, generated_tests::conv2d_per_channel::CreateModel_zero_sized_nhwc)

namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_nchw(Model *model);
bool is_ignored_zero_sized_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

TEST_F(GeneratedTests, conv2d_per_channel_zero_sized_nchw) {
    execute(CreateModel_zero_sized_nchw,
            is_ignored_zero_sized_nchw,
            get_examples_zero_sized_nchw());
}

} // namespace generated_tests::conv2d_per_channel
TEST_AVAILABLE_SINCE(V1_2, conv2d_per_channel_zero_sized_nchw, generated_tests::conv2d_per_channel::CreateModel_zero_sized_nchw)

namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_dynamic_output_shape_nhwc(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_zero_sized_dynamic_output_shape_nhwc) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc,
            is_ignored_zero_sized_dynamic_output_shape_nhwc,
            get_examples_zero_sized_dynamic_output_shape_nhwc());
}

} // namespace generated_tests::conv2d_per_channel

namespace generated_tests::conv2d_per_channel {

void CreateModel_zero_sized_dynamic_output_shape_nchw(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw();

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_zero_sized_dynamic_output_shape_nchw) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw,
            is_ignored_zero_sized_dynamic_output_shape_nchw,
            get_examples_zero_sized_dynamic_output_shape_nchw());
}

} // namespace generated_tests::conv2d_per_channel

