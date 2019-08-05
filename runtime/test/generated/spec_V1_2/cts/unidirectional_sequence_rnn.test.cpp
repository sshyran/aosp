// Generated from unidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox();

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox) {
    execute(CreateModel,
            is_ignored,
            get_examples_blackbox());
}

} // namespace generated_tests::unidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, unidirectional_sequence_rnn_blackbox, generated_tests::unidirectional_sequence_rnn::CreateModel)

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed();

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_blackbox_relaxed());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16();

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_blackbox_float16());
}

} // namespace generated_tests::unidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, unidirectional_sequence_rnn_blackbox_float16, generated_tests::unidirectional_sequence_rnn::CreateModel_float16)

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_blackbox_dynamic_output_shape());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_blackbox_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_blackbox_dynamic_output_shape_float16());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major();

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_time_major) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_blackbox_time_major());
}

} // namespace generated_tests::unidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, unidirectional_sequence_rnn_blackbox_time_major, generated_tests::unidirectional_sequence_rnn::CreateModel_2)

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_2(Model *model);
bool is_ignored_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed();

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    execute(CreateModel_relaxed_2,
            is_ignored_relaxed_2,
            get_examples_blackbox_time_major_relaxed());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_2(Model *model);
bool is_ignored_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16();

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_time_major_float16) {
    execute(CreateModel_float16_2,
            is_ignored_float16_2,
            get_examples_blackbox_time_major_float16());
}

} // namespace generated_tests::unidirectional_sequence_rnn
TEST_AVAILABLE_SINCE(V1_2, unidirectional_sequence_rnn_blackbox_time_major_float16, generated_tests::unidirectional_sequence_rnn::CreateModel_float16_2)

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_blackbox_time_major_dynamic_output_shape());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_2,
            is_ignored_dynamic_output_shape_relaxed_2,
            get_examples_blackbox_time_major_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_2,
            is_ignored_dynamic_output_shape_float16_2,
            get_examples_blackbox_time_major_dynamic_output_shape_float16());
}

} // namespace generated_tests::unidirectional_sequence_rnn

