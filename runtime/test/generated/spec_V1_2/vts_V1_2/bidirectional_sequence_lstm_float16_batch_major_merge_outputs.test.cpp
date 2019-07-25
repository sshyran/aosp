// Generated from bidirectional_sequence_lstm_float16_batch_major_merge_outputs.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox();

} // namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox());
}

TEST_F(ValidationTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox_all_inputs_as_internal());
}

TEST_F(ValidationTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_lstm_float16_batch_major_merge_outputs_blackbox_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_examples_blackbox_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs

