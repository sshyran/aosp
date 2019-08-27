// Generated from strided_slice_quant8_7.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, strided_slice_quant8_7) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::strided_slice_quant8_7
TEST_AVAILABLE_SINCE(V1_1, strided_slice_quant8_7, generated_tests::strided_slice_quant8_7::CreateModel)

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, strided_slice_quant8_7_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::strided_slice_quant8_7

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, strided_slice_quant8_7_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::strided_slice_quant8_7
TEST_AVAILABLE_SINCE(V1_1, strided_slice_quant8_7_all_inputs_as_internal, generated_tests::strided_slice_quant8_7::CreateModel_all_inputs_as_internal)

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, strided_slice_quant8_7_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::strided_slice_quant8_7

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_all_tensors_as_inputs(Model *model);
bool is_ignored_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

TEST_F(GeneratedTests, strided_slice_quant8_7_all_tensors_as_inputs) {
    execute(CreateModel_all_tensors_as_inputs,
            is_ignored_all_tensors_as_inputs,
            get_examples_all_tensors_as_inputs());
}

} // namespace generated_tests::strided_slice_quant8_7
TEST_AVAILABLE_SINCE(V1_1, strided_slice_quant8_7_all_tensors_as_inputs, generated_tests::strided_slice_quant8_7::CreateModel_all_tensors_as_inputs)

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, strided_slice_quant8_7_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::strided_slice_quant8_7

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, strided_slice_quant8_7_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::strided_slice_quant8_7
TEST_AVAILABLE_SINCE(V1_1, strided_slice_quant8_7_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::strided_slice_quant8_7::CreateModel_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::strided_slice_quant8_7 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, strided_slice_quant8_7_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::strided_slice_quant8_7

