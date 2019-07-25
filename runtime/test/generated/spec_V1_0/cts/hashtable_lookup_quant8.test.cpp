// Generated from hashtable_lookup_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::hashtable_lookup_quant8 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, hashtable_lookup_quant8) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::hashtable_lookup_quant8
TEST_AVAILABLE_SINCE(V1_0, hashtable_lookup_quant8, generated_tests::hashtable_lookup_quant8::CreateModel)

namespace generated_tests::hashtable_lookup_quant8 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, hashtable_lookup_quant8_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::hashtable_lookup_quant8

namespace generated_tests::hashtable_lookup_quant8 {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, hashtable_lookup_quant8_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::hashtable_lookup_quant8
TEST_AVAILABLE_SINCE(V1_0, hashtable_lookup_quant8_all_inputs_as_internal, generated_tests::hashtable_lookup_quant8::CreateModel_all_inputs_as_internal)

namespace generated_tests::hashtable_lookup_quant8 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, hashtable_lookup_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::hashtable_lookup_quant8

