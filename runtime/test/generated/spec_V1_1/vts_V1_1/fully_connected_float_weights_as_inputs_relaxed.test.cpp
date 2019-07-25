// Generated from fully_connected_float_weights_as_inputs_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_float_weights_as_inputs_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_examples());
}

TEST_F(ValidationTest, fully_connected_float_weights_as_inputs_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed

namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_float_weights_as_inputs_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, fully_connected_float_weights_as_inputs_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed

