// Generated from svdf_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::svdf_float16 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, svdf_float16) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::svdf_float16
TEST_AVAILABLE_SINCE(V1_2, svdf_float16, generated_tests::svdf_float16::CreateModel)

namespace generated_tests::svdf_float16 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, svdf_float16_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::svdf_float16

