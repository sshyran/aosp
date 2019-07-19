// Generated from mul_relu.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::mul_relu {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, mul_relu) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::mul_relu
TEST_AVAILABLE_SINCE(V1_0, mul_relu, generated_tests::mul_relu::CreateModel)

namespace generated_tests::mul_relu {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, mul_relu_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::mul_relu

