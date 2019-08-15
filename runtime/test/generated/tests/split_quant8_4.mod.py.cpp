// Generated from split_quant8_4.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::split_quant8_4 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, split_quant8_4) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::split_quant8_4
TEST_AVAILABLE_SINCE(V1_2, split_quant8_4, generated_tests::split_quant8_4::CreateModel)

namespace generated_tests::split_quant8_4 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_quant8_4_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::split_quant8_4

