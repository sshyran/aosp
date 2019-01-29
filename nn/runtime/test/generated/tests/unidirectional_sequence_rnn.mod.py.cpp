// clang-format off
// Generated file (from: unidirectional_sequence_rnn.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace unidirectional_sequence_rnn {
// Generated unidirectional_sequence_rnn test
#include "generated/examples/unidirectional_sequence_rnn.example.cpp"
// Generated model constructor
#include "generated/models/unidirectional_sequence_rnn.model.cpp"
} // namespace unidirectional_sequence_rnn

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox) {
    execute(unidirectional_sequence_rnn::CreateModel,
            unidirectional_sequence_rnn::is_ignored,
            unidirectional_sequence_rnn::get_examples_blackbox());
}

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_relaxed) {
    execute(unidirectional_sequence_rnn::CreateModel_relaxed,
            unidirectional_sequence_rnn::is_ignored_relaxed,
            unidirectional_sequence_rnn::get_examples_blackbox_relaxed());
}

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_float16) {
    execute(unidirectional_sequence_rnn::CreateModel_float16,
            unidirectional_sequence_rnn::is_ignored_float16,
            unidirectional_sequence_rnn::get_examples_blackbox_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
    execute(unidirectional_sequence_rnn::CreateModel_dynamic_output_shape,
            unidirectional_sequence_rnn::is_ignored_dynamic_output_shape,
            unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
    execute(unidirectional_sequence_rnn::CreateModel_dynamic_output_shape_relaxed,
            unidirectional_sequence_rnn::is_ignored_dynamic_output_shape_relaxed,
            unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
    execute(unidirectional_sequence_rnn::CreateModel_dynamic_output_shape_float16,
            unidirectional_sequence_rnn::is_ignored_dynamic_output_shape_float16,
            unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_float16());
}

#endif
TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_time_major) {
    execute(unidirectional_sequence_rnn::CreateModel_2,
            unidirectional_sequence_rnn::is_ignored_2,
            unidirectional_sequence_rnn::get_examples_blackbox_time_major());
}

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    execute(unidirectional_sequence_rnn::CreateModel_relaxed_2,
            unidirectional_sequence_rnn::is_ignored_relaxed_2,
            unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed());
}

TEST_F(GeneratedTests, unidirectional_sequence_rnn_blackbox_time_major_float16) {
    execute(unidirectional_sequence_rnn::CreateModel_float16_2,
            unidirectional_sequence_rnn::is_ignored_float16_2,
            unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
    execute(unidirectional_sequence_rnn::CreateModel_dynamic_output_shape_2,
            unidirectional_sequence_rnn::is_ignored_dynamic_output_shape_2,
            unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
    execute(unidirectional_sequence_rnn::CreateModel_dynamic_output_shape_relaxed_2,
            unidirectional_sequence_rnn::is_ignored_dynamic_output_shape_relaxed_2,
            unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
    execute(unidirectional_sequence_rnn::CreateModel_dynamic_output_shape_float16_2,
            unidirectional_sequence_rnn::is_ignored_dynamic_output_shape_float16_2,
            unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_float16());
}

#endif
