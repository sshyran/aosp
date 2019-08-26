// Generated from depthwise_conv2d_dilation.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc(Model *model);
bool is_ignored_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc) {
    execute(CreateModel_nhwc,
            is_ignored_nhwc,
            get_examples_nhwc());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_dynamic_output_shape) {
    execute(CreateModel_nhwc_dynamic_output_shape,
            is_ignored_nhwc_dynamic_output_shape,
            get_examples_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_inputs_as_internal,
            is_ignored_nhwc_all_inputs_as_internal,
            get_examples_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_all_tensors_as_inputs,
            is_ignored_nhwc_all_tensors_as_inputs,
            get_examples_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed(Model *model);
bool is_ignored_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_relaxed) {
    execute(CreateModel_nhwc_relaxed,
            is_ignored_nhwc_relaxed,
            get_examples_nhwc_relaxed());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_dynamic_output_shape,
            is_ignored_nhwc_relaxed_dynamic_output_shape,
            get_examples_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_nhwc_relaxed_all_inputs_as_internal,
            get_examples_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16(Model *model);
bool is_ignored_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_float16) {
    execute(CreateModel_nhwc_float16,
            is_ignored_nhwc_float16,
            get_examples_nhwc_float16());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_float16, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_dynamic_output_shape,
            is_ignored_nhwc_float16_dynamic_output_shape,
            get_examples_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal,
            is_ignored_nhwc_float16_all_inputs_as_internal,
            get_examples_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_float16_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs,
            is_ignored_nhwc_float16_all_tensors_as_inputs,
            get_examples_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8(Model *model);
bool is_ignored_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_quant8) {
    execute(CreateModel_nhwc_quant8,
            is_ignored_nhwc_quant8,
            get_examples_nhwc_quant8());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_quant8, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_dynamic_output_shape,
            is_ignored_nhwc_quant8_dynamic_output_shape,
            get_examples_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_quant8_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal,
            is_ignored_nhwc_quant8_all_inputs_as_internal,
            get_examples_nhwc_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_quant8_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs,
            is_ignored_nhwc_quant8_all_tensors_as_inputs,
            get_examples_nhwc_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_tensors_as_inputs)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw(Model *model);
bool is_ignored_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw) {
    execute(CreateModel_nchw,
            is_ignored_nchw,
            get_examples_nchw());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape(Model *model);
bool is_ignored_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_dynamic_output_shape) {
    execute(CreateModel_nchw_dynamic_output_shape,
            is_ignored_nchw_dynamic_output_shape,
            get_examples_nchw_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_inputs_as_internal,
            is_ignored_nchw_all_inputs_as_internal,
            get_examples_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs) {
    execute(CreateModel_nchw_all_tensors_as_inputs,
            is_ignored_nchw_all_tensors_as_inputs,
            get_examples_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed(Model *model);
bool is_ignored_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_relaxed) {
    execute(CreateModel_nchw_relaxed,
            is_ignored_nchw_relaxed,
            get_examples_nchw_relaxed());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_dynamic_output_shape,
            is_ignored_nchw_relaxed_dynamic_output_shape,
            get_examples_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal,
            is_ignored_nchw_relaxed_all_inputs_as_internal,
            get_examples_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_nchw_relaxed_all_tensors_as_inputs,
            get_examples_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16(Model *model);
bool is_ignored_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_float16) {
    execute(CreateModel_nchw_float16,
            is_ignored_nchw_float16,
            get_examples_nchw_float16());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_float16, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_dynamic_output_shape,
            is_ignored_nchw_float16_dynamic_output_shape,
            get_examples_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal,
            is_ignored_nchw_float16_all_inputs_as_internal,
            get_examples_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_float16_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs,
            is_ignored_nchw_float16_all_tensors_as_inputs,
            get_examples_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8(Model *model);
bool is_ignored_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_quant8) {
    execute(CreateModel_nchw_quant8,
            is_ignored_nchw_quant8,
            get_examples_nchw_quant8());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_quant8, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_dynamic_output_shape,
            is_ignored_nchw_quant8_dynamic_output_shape,
            get_examples_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_quant8_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal,
            is_ignored_nchw_quant8_all_inputs_as_internal,
            get_examples_nchw_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_quant8_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs,
            is_ignored_nchw_quant8_all_tensors_as_inputs,
            get_examples_nchw_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_tensors_as_inputs)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_2(Model *model);
bool is_ignored_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_2) {
    execute(CreateModel_nhwc_2,
            is_ignored_nhwc_2,
            get_examples_nhwc_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_dynamic_output_shape_2,
            is_ignored_nhwc_dynamic_output_shape_2,
            get_examples_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_all_inputs_as_internal_2,
            is_ignored_nhwc_all_inputs_as_internal_2,
            get_examples_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_2,
            is_ignored_nhwc_all_tensors_as_inputs_2,
            get_examples_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_2(Model *model);
bool is_ignored_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_2) {
    execute(CreateModel_nchw_2,
            is_ignored_nchw_2,
            get_examples_nchw_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_dynamic_output_shape_2) {
    execute(CreateModel_nchw_dynamic_output_shape_2,
            is_ignored_nchw_dynamic_output_shape_2,
            get_examples_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_all_inputs_as_internal_2,
            is_ignored_nchw_all_inputs_as_internal_2,
            get_examples_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_2,
            is_ignored_nchw_all_tensors_as_inputs_2,
            get_examples_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_3(Model *model);
bool is_ignored_nhwc_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc) {
    execute(CreateModel_nhwc_3,
            is_ignored_nhwc_3,
            get_examples_valid_padding_nhwc());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_dynamic_output_shape) {
    execute(CreateModel_nhwc_dynamic_output_shape_3,
            is_ignored_nhwc_dynamic_output_shape_3,
            get_examples_valid_padding_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_inputs_as_internal_3,
            is_ignored_nhwc_all_inputs_as_internal_3,
            get_examples_valid_padding_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_valid_padding_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_3,
            is_ignored_nhwc_all_tensors_as_inputs_3,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_2(Model *model);
bool is_ignored_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed) {
    execute(CreateModel_nhwc_relaxed_2,
            is_ignored_nhwc_relaxed_2,
            get_examples_valid_padding_nhwc_relaxed());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_2,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_2,
            get_examples_valid_padding_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_2,
            get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_2(Model *model);
bool is_ignored_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_float16) {
    execute(CreateModel_nhwc_float16_2,
            is_ignored_nhwc_float16_2,
            get_examples_valid_padding_nhwc_float16());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_float16, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_dynamic_output_shape_2,
            is_ignored_nhwc_float16_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_2,
            is_ignored_nhwc_float16_all_inputs_as_internal_2,
            get_examples_valid_padding_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_2,
            get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_tensors_as_inputs_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_2(Model *model);
bool is_ignored_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_quant8) {
    execute(CreateModel_nhwc_quant8_2,
            is_ignored_nhwc_quant8_2,
            get_examples_valid_padding_nhwc_quant8());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_quant8, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_2,
            is_ignored_nhwc_quant8_all_inputs_as_internal_2,
            get_examples_valid_padding_nhwc_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_2,
            get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_tensors_as_inputs_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_3(Model *model);
bool is_ignored_nchw_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw) {
    execute(CreateModel_nchw_3,
            is_ignored_nchw_3,
            get_examples_valid_padding_nchw());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_dynamic_output_shape) {
    execute(CreateModel_nchw_dynamic_output_shape_3,
            is_ignored_nchw_dynamic_output_shape_3,
            get_examples_valid_padding_nchw_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_inputs_as_internal_3,
            is_ignored_nchw_all_inputs_as_internal_3,
            get_examples_valid_padding_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_valid_padding_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs) {
    execute(CreateModel_nchw_all_tensors_as_inputs_3,
            is_ignored_nchw_all_tensors_as_inputs_3,
            get_examples_valid_padding_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_2(Model *model);
bool is_ignored_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_relaxed) {
    execute(CreateModel_nchw_relaxed_2,
            is_ignored_nchw_relaxed_2,
            get_examples_valid_padding_nchw_relaxed());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_2,
            is_ignored_nchw_relaxed_all_inputs_as_internal_2,
            get_examples_valid_padding_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_2,
            get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_2(Model *model);
bool is_ignored_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_float16) {
    execute(CreateModel_nchw_float16_2,
            is_ignored_nchw_float16_2,
            get_examples_valid_padding_nchw_float16());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_float16, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_dynamic_output_shape_2,
            is_ignored_nchw_float16_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_2,
            is_ignored_nchw_float16_all_inputs_as_internal_2,
            get_examples_valid_padding_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_2,
            get_examples_valid_padding_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_tensors_as_inputs_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_2(Model *model);
bool is_ignored_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_quant8) {
    execute(CreateModel_nchw_quant8_2,
            is_ignored_nchw_quant8_2,
            get_examples_valid_padding_nchw_quant8());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_quant8, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_dynamic_output_shape_2,
            is_ignored_nchw_quant8_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_2,
            is_ignored_nchw_quant8_all_inputs_as_internal_2,
            get_examples_valid_padding_nchw_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_2,
            get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_tensors_as_inputs_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_4(Model *model);
bool is_ignored_nhwc_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_2) {
    execute(CreateModel_nhwc_4,
            is_ignored_nhwc_4,
            get_examples_valid_padding_nhwc_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_4(Model *model);
bool is_ignored_nhwc_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_dynamic_output_shape_4,
            is_ignored_nhwc_dynamic_output_shape_4,
            get_examples_valid_padding_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_4(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_all_inputs_as_internal_4,
            is_ignored_nhwc_all_inputs_as_internal_4,
            get_examples_valid_padding_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_inputs_as_internal_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_4,
            get_examples_valid_padding_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_4(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_4,
            is_ignored_nhwc_all_tensors_as_inputs_4,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_4,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_4,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
            get_examples_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_4(Model *model);
bool is_ignored_nchw_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_2) {
    execute(CreateModel_nchw_4,
            is_ignored_nchw_4,
            get_examples_valid_padding_nchw_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_4(Model *model);
bool is_ignored_nchw_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_dynamic_output_shape_2) {
    execute(CreateModel_nchw_dynamic_output_shape_4,
            is_ignored_nchw_dynamic_output_shape_4,
            get_examples_valid_padding_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_4(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_all_inputs_as_internal_4,
            is_ignored_nchw_all_inputs_as_internal_4,
            get_examples_valid_padding_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_inputs_as_internal_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_4,
            get_examples_valid_padding_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_4(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_4,
            is_ignored_nchw_all_tensors_as_inputs_4,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_4(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_4,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_4,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_4,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_4,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_4)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
            get_examples_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_5(Model *model);
bool is_ignored_nhwc_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc) {
    execute(CreateModel_nhwc_5,
            is_ignored_nhwc_5,
            get_examples_same_padding_stride_2_nhwc());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_5(Model *model);
bool is_ignored_nhwc_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_dynamic_output_shape) {
    execute(CreateModel_nhwc_dynamic_output_shape_5,
            is_ignored_nhwc_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_5(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_inputs_as_internal_5,
            is_ignored_nhwc_all_inputs_as_internal_5,
            get_examples_same_padding_stride_2_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_inputs_as_internal_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_5(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_5,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_5(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_5,
            is_ignored_nhwc_all_tensors_as_inputs_5,
            get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_5(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_5,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5,
            get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_3(Model *model);
bool is_ignored_nhwc_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed) {
    execute(CreateModel_nhwc_relaxed_3,
            is_ignored_nhwc_relaxed_3,
            get_examples_same_padding_stride_2_nhwc_relaxed());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_relaxed_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_dynamic_output_shape_3,
            is_ignored_nhwc_relaxed_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_3,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_3,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_3(Model *model);
bool is_ignored_nhwc_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8) {
    execute(CreateModel_nhwc_quant8_3,
            is_ignored_nhwc_quant8_3,
            get_examples_same_padding_stride_2_nhwc_quant8());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_quant8_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_dynamic_output_shape_3,
            is_ignored_nhwc_quant8_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_3,
            is_ignored_nhwc_quant8_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_3,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_3,
            get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_tensors_as_inputs_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_3(Model *model);
bool is_ignored_nhwc_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16) {
    execute(CreateModel_nhwc_float16_3,
            is_ignored_nhwc_float16_3,
            get_examples_same_padding_stride_2_nhwc_float16());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_float16_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_dynamic_output_shape_3,
            is_ignored_nhwc_float16_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_3,
            is_ignored_nhwc_float16_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_3,
            is_ignored_nhwc_float16_all_tensors_as_inputs_3,
            get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_tensors_as_inputs_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_5(Model *model);
bool is_ignored_nchw_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw) {
    execute(CreateModel_nchw_5,
            is_ignored_nchw_5,
            get_examples_same_padding_stride_2_nchw());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_5(Model *model);
bool is_ignored_nchw_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_dynamic_output_shape) {
    execute(CreateModel_nchw_dynamic_output_shape_5,
            is_ignored_nchw_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nchw_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_5(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_inputs_as_internal_5,
            is_ignored_nchw_all_inputs_as_internal_5,
            get_examples_same_padding_stride_2_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_inputs_as_internal_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_5(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_5,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_5(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs) {
    execute(CreateModel_nchw_all_tensors_as_inputs_5,
            is_ignored_nchw_all_tensors_as_inputs_5,
            get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_5(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_5,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_5,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_5,
            get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_5)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5,
            get_examples_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_3(Model *model);
bool is_ignored_nchw_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed) {
    execute(CreateModel_nchw_relaxed_3,
            is_ignored_nchw_relaxed_3,
            get_examples_same_padding_stride_2_nchw_relaxed());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_relaxed_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_dynamic_output_shape_3,
            is_ignored_nchw_relaxed_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_3,
            is_ignored_nchw_relaxed_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_3,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_3,
            get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_3(Model *model);
bool is_ignored_nchw_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8) {
    execute(CreateModel_nchw_quant8_3,
            is_ignored_nchw_quant8_3,
            get_examples_same_padding_stride_2_nchw_quant8());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_quant8_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_dynamic_output_shape_3,
            is_ignored_nchw_quant8_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_3,
            is_ignored_nchw_quant8_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nchw_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_3,
            is_ignored_nchw_quant8_all_tensors_as_inputs_3,
            get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_tensors_as_inputs_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_3(Model *model);
bool is_ignored_nchw_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16) {
    execute(CreateModel_nchw_float16_3,
            is_ignored_nchw_float16_3,
            get_examples_same_padding_stride_2_nchw_float16());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_float16_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_dynamic_output_shape_3,
            is_ignored_nchw_float16_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_3,
            is_ignored_nchw_float16_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_3(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_3,
            is_ignored_nchw_float16_all_tensors_as_inputs_3,
            get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_tensors_as_inputs_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_dilation
TEST_AVAILABLE_SINCE(V1_2, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::depthwise_conv2d_dilation::CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_dilation

