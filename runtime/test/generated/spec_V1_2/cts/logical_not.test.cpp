// Generated from logical_not.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::logical_not {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, logical_not) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::logical_not
TEST_AVAILABLE_SINCE(V1_2, logical_not, generated_tests::logical_not::CreateModel)

namespace generated_tests::logical_not {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, logical_not_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::logical_not

