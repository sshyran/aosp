// Generated from unidirectional_sequence_lstm_batch_major_peephole_projection_bias.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, unidirectional_sequence_lstm_batch_major_peephole_projection_bias) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias
TEST_AVAILABLE_SINCE(V1_2, unidirectional_sequence_lstm_batch_major_peephole_projection_bias, generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::CreateModel)

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias
TEST_AVAILABLE_SINCE(V1_2, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal, generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::CreateModel_all_inputs_as_internal)

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

