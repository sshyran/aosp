// Generated from l2_pool_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::l2_pool_float {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, l2_pool_float) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::l2_pool_float
TEST_AVAILABLE_SINCE(V1_0, l2_pool_float, generated_tests::l2_pool_float::CreateModel)

namespace generated_tests::l2_pool_float {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, l2_pool_float_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::l2_pool_float

