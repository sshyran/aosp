// Generated from mobilenet_224_gender_basic_fixed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::mobilenet_224_gender_basic_fixed {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, mobilenet_224_gender_basic_fixed) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::mobilenet_224_gender_basic_fixed
TEST_AVAILABLE_SINCE(V1_0, mobilenet_224_gender_basic_fixed, generated_tests::mobilenet_224_gender_basic_fixed::CreateModel)

namespace generated_tests::mobilenet_224_gender_basic_fixed {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, mobilenet_224_gender_basic_fixed_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::mobilenet_224_gender_basic_fixed

