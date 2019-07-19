// Generated from l2_normalization.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::l2_normalization {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, l2_normalization) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::l2_normalization
TEST_AVAILABLE_SINCE(V1_0, l2_normalization, generated_tests::l2_normalization::CreateModel)

namespace generated_tests::l2_normalization {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, l2_normalization_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::l2_normalization

