// Generated from conv_1_h3_w2_SAME_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv_1_h3_w2_SAME_relaxed {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, conv_1_h3_w2_SAME_relaxed) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::conv_1_h3_w2_SAME_relaxed

namespace generated_tests::conv_1_h3_w2_SAME_relaxed {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv_1_h3_w2_SAME_relaxed_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::conv_1_h3_w2_SAME_relaxed

namespace generated_tests::conv_1_h3_w2_SAME_relaxed {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2();

TEST_F(GeneratedTests, conv_1_h3_w2_SAME_relaxed_2) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_2());
}

} // namespace generated_tests::conv_1_h3_w2_SAME_relaxed

namespace generated_tests::conv_1_h3_w2_SAME_relaxed {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv_1_h3_w2_SAME_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_dynamic_output_shape_2());
}

} // namespace generated_tests::conv_1_h3_w2_SAME_relaxed

