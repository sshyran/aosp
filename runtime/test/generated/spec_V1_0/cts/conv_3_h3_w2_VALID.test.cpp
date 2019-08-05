// Generated from conv_3_h3_w2_VALID.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv_3_h3_w2_VALID {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, conv_3_h3_w2_VALID) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::conv_3_h3_w2_VALID
TEST_AVAILABLE_SINCE(V1_0, conv_3_h3_w2_VALID, generated_tests::conv_3_h3_w2_VALID::CreateModel)

namespace generated_tests::conv_3_h3_w2_VALID {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv_3_h3_w2_VALID_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::conv_3_h3_w2_VALID

namespace generated_tests::conv_3_h3_w2_VALID {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2();

TEST_F(GeneratedTests, conv_3_h3_w2_VALID_2) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_2());
}

} // namespace generated_tests::conv_3_h3_w2_VALID
TEST_AVAILABLE_SINCE(V1_0, conv_3_h3_w2_VALID_2, generated_tests::conv_3_h3_w2_VALID::CreateModel_2)

namespace generated_tests::conv_3_h3_w2_VALID {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv_3_h3_w2_VALID_dynamic_output_shape_2) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_dynamic_output_shape_2());
}

} // namespace generated_tests::conv_3_h3_w2_VALID

