// Generated from mobilenet_quantized.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::mobilenet_quantized {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, mobilenet_quantized) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::mobilenet_quantized
TEST_AVAILABLE_SINCE(V1_0, mobilenet_quantized, generated_tests::mobilenet_quantized::CreateModel)

namespace generated_tests::mobilenet_quantized {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, mobilenet_quantized_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::mobilenet_quantized

