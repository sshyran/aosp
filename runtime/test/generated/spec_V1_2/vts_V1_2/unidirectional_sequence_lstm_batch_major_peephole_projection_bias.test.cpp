// Generated from unidirectional_sequence_lstm_batch_major_peephole_projection_bias.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_batch_major_peephole_projection_bias_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias

