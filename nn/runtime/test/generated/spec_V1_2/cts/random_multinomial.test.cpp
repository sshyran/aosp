// Generated from random_multinomial.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::random_multinomial {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, random_multinomial) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::random_multinomial
TEST_AVAILABLE_SINCE(V1_2, random_multinomial, generated_tests::random_multinomial::CreateModel)

namespace generated_tests::random_multinomial {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, random_multinomial_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::random_multinomial
