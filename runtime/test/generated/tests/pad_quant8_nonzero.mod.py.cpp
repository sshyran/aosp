// Generated from pad_quant8_nonzero.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::pad_quant8_nonzero {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, pad_quant8_nonzero) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::pad_quant8_nonzero
TEST_AVAILABLE_SINCE(V1_2, pad_quant8_nonzero, generated_tests::pad_quant8_nonzero::CreateModel)

namespace generated_tests::pad_quant8_nonzero {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, pad_quant8_nonzero_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::pad_quant8_nonzero

