// Generated from avg_pool_quant8_4.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::avg_pool_quant8_4 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, avg_pool_quant8_4) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::avg_pool_quant8_4
TEST_AVAILABLE_SINCE(V1_0, avg_pool_quant8_4, generated_tests::avg_pool_quant8_4::CreateModel)

namespace generated_tests::avg_pool_quant8_4 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, avg_pool_quant8_4_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::avg_pool_quant8_4

namespace generated_tests::avg_pool_quant8_4 {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, avg_pool_quant8_4_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::avg_pool_quant8_4
TEST_AVAILABLE_SINCE(V1_0, avg_pool_quant8_4_all_inputs_as_internal, generated_tests::avg_pool_quant8_4::CreateModel_all_inputs_as_internal)

namespace generated_tests::avg_pool_quant8_4 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, avg_pool_quant8_4_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::avg_pool_quant8_4

