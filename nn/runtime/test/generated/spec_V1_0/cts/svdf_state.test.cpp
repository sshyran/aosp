// Generated from svdf_state.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::svdf_state {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, svdf_state) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::svdf_state
TEST_AVAILABLE_SINCE(V1_0, svdf_state, generated_tests::svdf_state::CreateModel)

namespace generated_tests::svdf_state {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, svdf_state_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::svdf_state

