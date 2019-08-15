// Generated from unidirectional_sequence_lstm_1step.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::unidirectional_sequence_lstm_1step {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::unidirectional_sequence_lstm_1step

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_1step {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_1step) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::unidirectional_sequence_lstm_1step::get_examples());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_1step) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_1step::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_1step

namespace generated_tests::unidirectional_sequence_lstm_1step {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_1step

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_1step {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_1step_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_1step::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_1step_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_1step::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_1step

