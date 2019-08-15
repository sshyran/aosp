// Generated from strided_slice_float_11.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::strided_slice_float_11 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, strided_slice_float_11) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::strided_slice_float_11
TEST_AVAILABLE_SINCE(V1_1, strided_slice_float_11, generated_tests::strided_slice_float_11::CreateModel)

namespace generated_tests::strided_slice_float_11 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, strided_slice_float_11_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::strided_slice_float_11

