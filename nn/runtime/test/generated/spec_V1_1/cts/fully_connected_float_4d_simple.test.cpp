// Generated from fully_connected_float_4d_simple.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, fully_connected_float_4d_simple) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::fully_connected_float_4d_simple
TEST_AVAILABLE_SINCE(V1_0, fully_connected_float_4d_simple, generated_tests::fully_connected_float_4d_simple::CreateModel)

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, fully_connected_float_4d_simple_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::fully_connected_float_4d_simple

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, fully_connected_float_4d_simple_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::fully_connected_float_4d_simple
TEST_AVAILABLE_SINCE(V1_0, fully_connected_float_4d_simple_all_inputs_as_internal, generated_tests::fully_connected_float_4d_simple::CreateModel_all_inputs_as_internal)

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, fully_connected_float_4d_simple_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::fully_connected_float_4d_simple

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_all_tensors_as_inputs(Model *model);
bool is_ignored_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

TEST_F(GeneratedTests, fully_connected_float_4d_simple_all_tensors_as_inputs) {
    execute(CreateModel_all_tensors_as_inputs,
            is_ignored_all_tensors_as_inputs,
            get_examples_all_tensors_as_inputs());
}

} // namespace generated_tests::fully_connected_float_4d_simple
TEST_AVAILABLE_SINCE(V1_0, fully_connected_float_4d_simple_all_tensors_as_inputs, generated_tests::fully_connected_float_4d_simple::CreateModel_all_tensors_as_inputs)

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, fully_connected_float_4d_simple_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::fully_connected_float_4d_simple

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, fully_connected_float_4d_simple_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::fully_connected_float_4d_simple
TEST_AVAILABLE_SINCE(V1_0, fully_connected_float_4d_simple_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::fully_connected_float_4d_simple::CreateModel_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::fully_connected_float_4d_simple {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, fully_connected_float_4d_simple_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::fully_connected_float_4d_simple

