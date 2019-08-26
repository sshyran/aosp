// Generated from split_int32_3.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::split_int32_3 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, split_int32_3) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::split_int32_3
TEST_AVAILABLE_SINCE(V1_2, split_int32_3, generated_tests::split_int32_3::CreateModel)

namespace generated_tests::split_int32_3 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_int32_3_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::split_int32_3

namespace generated_tests::split_int32_3 {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, split_int32_3_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::split_int32_3

namespace generated_tests::split_int32_3 {

void CreateModel_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_int32_3_relaxed_dynamic_output_shape) {
    execute(CreateModel_relaxed_dynamic_output_shape,
            is_ignored_relaxed_dynamic_output_shape,
            get_examples_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::split_int32_3

