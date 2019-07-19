// Generated from lsh_projection_deprecated.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::lsh_projection_deprecated {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, lsh_projection_deprecated) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::lsh_projection_deprecated

namespace generated_tests::lsh_projection_deprecated {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, lsh_projection_deprecated_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::lsh_projection_deprecated

