// Generated from batch_to_space_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::batch_to_space_relaxed {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, batch_to_space_relaxed) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::batch_to_space_relaxed

namespace generated_tests::batch_to_space_relaxed {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, batch_to_space_relaxed_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::batch_to_space_relaxed

