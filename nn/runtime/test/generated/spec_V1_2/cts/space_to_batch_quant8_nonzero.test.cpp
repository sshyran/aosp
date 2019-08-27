// Generated from space_to_batch_quant8_nonzero.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, space_to_batch_quant8_nonzero) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
TEST_AVAILABLE_SINCE(V1_2, space_to_batch_quant8_nonzero, generated_tests::space_to_batch_quant8_nonzero::CreateModel)

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, space_to_batch_quant8_nonzero_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, space_to_batch_quant8_nonzero_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
TEST_AVAILABLE_SINCE(V1_2, space_to_batch_quant8_nonzero_all_inputs_as_internal, generated_tests::space_to_batch_quant8_nonzero::CreateModel_all_inputs_as_internal)

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, space_to_batch_quant8_nonzero_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs(Model *model);
bool is_ignored_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

TEST_F(GeneratedTests, space_to_batch_quant8_nonzero_all_tensors_as_inputs) {
    execute(CreateModel_all_tensors_as_inputs,
            is_ignored_all_tensors_as_inputs,
            get_examples_all_tensors_as_inputs());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
TEST_AVAILABLE_SINCE(V1_2, space_to_batch_quant8_nonzero_all_tensors_as_inputs, generated_tests::space_to_batch_quant8_nonzero::CreateModel_all_tensors_as_inputs)

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, space_to_batch_quant8_nonzero_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, space_to_batch_quant8_nonzero_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero
TEST_AVAILABLE_SINCE(V1_2, space_to_batch_quant8_nonzero_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::space_to_batch_quant8_nonzero::CreateModel_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::space_to_batch_quant8_nonzero {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, space_to_batch_quant8_nonzero_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::space_to_batch_quant8_nonzero

