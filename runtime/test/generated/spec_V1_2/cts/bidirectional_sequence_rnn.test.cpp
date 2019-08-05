// Generated from bidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox) {
    execute(CreateModel,
            is_ignored,
            get_examples_blackbox());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox, generated_tests::bidirectional_sequence_rnn::CreateModel)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_blackbox_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_blackbox_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_float16, generated_tests::bidirectional_sequence_rnn::CreateModel_float16)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_blackbox_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_blackbox_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_blackbox_dynamic_output_shape_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_time_major) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_blackbox_time_major());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_time_major, generated_tests::bidirectional_sequence_rnn::CreateModel_2)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_2(Model *model);
bool is_ignored_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    execute(CreateModel_relaxed_2,
            is_ignored_relaxed_2,
            get_examples_blackbox_time_major_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_2(Model *model);
bool is_ignored_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_time_major_float16) {
    execute(CreateModel_float16_2,
            is_ignored_float16_2,
            get_examples_blackbox_time_major_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_time_major_float16, generated_tests::bidirectional_sequence_rnn::CreateModel_float16_2)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_blackbox_time_major_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_2,
            is_ignored_dynamic_output_shape_relaxed_2,
            get_examples_blackbox_time_major_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_2,
            is_ignored_dynamic_output_shape_float16_2,
            get_examples_blackbox_time_major_dynamic_output_shape_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_3(Model *model);
bool is_ignored_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs) {
    execute(CreateModel_3,
            is_ignored_3,
            get_examples_blackbox_time_major_merge_outputs());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs, generated_tests::bidirectional_sequence_rnn::CreateModel_3)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_3(Model *model);
bool is_ignored_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_relaxed();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed) {
    execute(CreateModel_relaxed_3,
            is_ignored_relaxed_3,
            get_examples_blackbox_time_major_merge_outputs_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_3(Model *model);
bool is_ignored_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_float16();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16) {
    execute(CreateModel_float16_3,
            is_ignored_float16_3,
            get_examples_blackbox_time_major_merge_outputs_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16, generated_tests::bidirectional_sequence_rnn::CreateModel_float16_3)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_3(Model *model);
bool is_ignored_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_3,
            is_ignored_dynamic_output_shape_3,
            get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed_3(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_3,
            is_ignored_dynamic_output_shape_relaxed_3,
            get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16_3(Model *model);
bool is_ignored_dynamic_output_shape_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_3,
            is_ignored_dynamic_output_shape_float16_3,
            get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_4(Model *model);
bool is_ignored_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_reversed_inputs) {
    execute(CreateModel_4,
            is_ignored_4,
            get_examples_blackbox_reversed_inputs());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_reversed_inputs, generated_tests::bidirectional_sequence_rnn::CreateModel_4)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_4(Model *model);
bool is_ignored_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_relaxed();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed) {
    execute(CreateModel_relaxed_4,
            is_ignored_relaxed_4,
            get_examples_blackbox_reversed_inputs_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_4(Model *model);
bool is_ignored_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_float16();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16) {
    execute(CreateModel_float16_4,
            is_ignored_float16_4,
            get_examples_blackbox_reversed_inputs_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16, generated_tests::bidirectional_sequence_rnn::CreateModel_float16_4)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_4(Model *model);
bool is_ignored_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_4,
            is_ignored_dynamic_output_shape_4,
            get_examples_blackbox_reversed_inputs_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed_4(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_4,
            is_ignored_dynamic_output_shape_relaxed_4,
            get_examples_blackbox_reversed_inputs_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16_4(Model *model);
bool is_ignored_dynamic_output_shape_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_4,
            is_ignored_dynamic_output_shape_float16_4,
            get_examples_blackbox_reversed_inputs_dynamic_output_shape_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_5(Model *model);
bool is_ignored_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_aux_input) {
    execute(CreateModel_5,
            is_ignored_5,
            get_examples_blackbox_aux_input());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_aux_input, generated_tests::bidirectional_sequence_rnn::CreateModel_5)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_5(Model *model);
bool is_ignored_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_relaxed();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_aux_input_relaxed) {
    execute(CreateModel_relaxed_5,
            is_ignored_relaxed_5,
            get_examples_blackbox_aux_input_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_5(Model *model);
bool is_ignored_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_float16();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_aux_input_float16) {
    execute(CreateModel_float16_5,
            is_ignored_float16_5,
            get_examples_blackbox_aux_input_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_aux_input_float16, generated_tests::bidirectional_sequence_rnn::CreateModel_float16_5)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_5(Model *model);
bool is_ignored_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_5,
            is_ignored_dynamic_output_shape_5,
            get_examples_blackbox_aux_input_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed_5(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_5,
            is_ignored_dynamic_output_shape_relaxed_5,
            get_examples_blackbox_aux_input_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16_5(Model *model);
bool is_ignored_dynamic_output_shape_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_5,
            is_ignored_dynamic_output_shape_float16_5,
            get_examples_blackbox_aux_input_dynamic_output_shape_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_6(Model *model);
bool is_ignored_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_regular_and_aux_input) {
    execute(CreateModel_6,
            is_ignored_6,
            get_examples_blackbox_regular_and_aux_input());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_regular_and_aux_input, generated_tests::bidirectional_sequence_rnn::CreateModel_6)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_6(Model *model);
bool is_ignored_relaxed_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_relaxed();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed) {
    execute(CreateModel_relaxed_6,
            is_ignored_relaxed_6,
            get_examples_blackbox_regular_and_aux_input_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_6(Model *model);
bool is_ignored_float16_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_float16();

TEST_F(GeneratedTests, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16) {
    execute(CreateModel_float16_6,
            is_ignored_float16_6,
            get_examples_blackbox_regular_and_aux_input_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16, generated_tests::bidirectional_sequence_rnn::CreateModel_float16_6)

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_6(Model *model);
bool is_ignored_dynamic_output_shape_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_6,
            is_ignored_dynamic_output_shape_6,
            get_examples_blackbox_regular_and_aux_input_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed_6(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_6,
            is_ignored_dynamic_output_shape_relaxed_6,
            get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16_6(Model *model);
bool is_ignored_dynamic_output_shape_float16_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_6,
            is_ignored_dynamic_output_shape_float16_6,
            get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_float16());
}

} // namespace generated_tests::bidirectional_sequence_rnn

