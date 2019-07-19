// Generated from local_response_norm_float_4.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::local_response_norm_float_4 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, local_response_norm_float_4) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::local_response_norm_float_4
TEST_AVAILABLE_SINCE(V1_0, local_response_norm_float_4, generated_tests::local_response_norm_float_4::CreateModel)

namespace generated_tests::local_response_norm_float_4 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, local_response_norm_float_4_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::local_response_norm_float_4

