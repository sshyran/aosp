// Generated from conv_quant8_overflow.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv_quant8_overflow {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, conv_quant8_overflow) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::conv_quant8_overflow
TEST_AVAILABLE_SINCE(V1_0, conv_quant8_overflow, generated_tests::conv_quant8_overflow::CreateModel)

namespace generated_tests::conv_quant8_overflow {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv_quant8_overflow_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::conv_quant8_overflow

