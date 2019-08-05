// Generated from lstm3.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::lstm3 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, lstm3) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::lstm3
TEST_AVAILABLE_SINCE(V1_0, lstm3, generated_tests::lstm3::CreateModel)

namespace generated_tests::lstm3 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, lstm3_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::lstm3

