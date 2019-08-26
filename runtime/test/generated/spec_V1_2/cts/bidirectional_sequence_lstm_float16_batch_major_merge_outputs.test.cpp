// Generated from bidirectional_sequence_lstm_float16_batch_major_merge_outputs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox();

TEST_F(GeneratedTests, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox) {
    execute(CreateModel,
            is_ignored,
            get_examples_blackbox());
}

} // namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs
TEST_AVAILABLE_SINCE(V1_2, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox, generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::CreateModel)

namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_blackbox_dynamic_output_shape());
}

} // namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

