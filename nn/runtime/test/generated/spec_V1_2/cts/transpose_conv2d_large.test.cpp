// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, transpose_conv2d_large_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_quant8, generated_tests::transpose_conv2d_large::CreateModel_quant8)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_dynamic_output_shape(Model *model);
bool is_ignored_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_dynamic_output_shape) {
    execute(CreateModel_quant8_dynamic_output_shape,
            is_ignored_quant8_dynamic_output_shape,
            get_examples_quant8_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_conv2d_large_quant8_all_inputs_as_internal) {
    execute(CreateModel_quant8_all_inputs_as_internal,
            is_ignored_quant8_all_inputs_as_internal,
            get_examples_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_quant8_all_inputs_as_internal, generated_tests::transpose_conv2d_large::CreateModel_quant8_all_inputs_as_internal)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, transpose_conv2d_large_quant8_all_tensors_as_inputs) {
    execute(CreateModel_quant8_all_tensors_as_inputs,
            is_ignored_quant8_all_tensors_as_inputs,
            get_examples_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_quant8_all_tensors_as_inputs, generated_tests::transpose_conv2d_large::CreateModel_quant8_all_tensors_as_inputs)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::transpose_conv2d_large::CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8(Model *model);
bool is_ignored_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8();

TEST_F(GeneratedTests, transpose_conv2d_large_channelQuant8) {
    execute(CreateModel_channelQuant8,
            is_ignored_channelQuant8,
            get_examples_channelQuant8());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_channelQuant8, generated_tests::transpose_conv2d_large::CreateModel_channelQuant8)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_channelQuant8_dynamic_output_shape,
            is_ignored_channelQuant8_dynamic_output_shape,
            get_examples_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_conv2d_large_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_channelQuant8_all_inputs_as_internal,
            is_ignored_channelQuant8_all_inputs_as_internal,
            get_examples_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_channelQuant8_all_inputs_as_internal, generated_tests::transpose_conv2d_large::CreateModel_channelQuant8_all_inputs_as_internal)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_channelQuant8_all_tensors_as_inputs,
            is_ignored_channelQuant8_all_tensors_as_inputs,
            get_examples_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs, generated_tests::transpose_conv2d_large::CreateModel_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::transpose_conv2d_large
TEST_AVAILABLE_SINCE(V1_2, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::transpose_conv2d_large::CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::transpose_conv2d_large {

void CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::transpose_conv2d_large

