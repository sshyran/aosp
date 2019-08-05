// Generated from fully_connected_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::fully_connected_float {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, fully_connected_float) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::fully_connected_float
TEST_AVAILABLE_SINCE(V1_0, fully_connected_float, generated_tests::fully_connected_float::CreateModel)

namespace generated_tests::fully_connected_float {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, fully_connected_float_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::fully_connected_float

