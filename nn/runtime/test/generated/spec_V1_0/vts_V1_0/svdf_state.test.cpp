// Generated from svdf_state.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::svdf_state {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::svdf_state

namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf_state {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, svdf_state) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::svdf_state::get_examples());
}

TEST_F(ValidationTest, svdf_state) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf_state::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf_state

namespace generated_tests::svdf_state {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::svdf_state

namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf_state {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, svdf_state_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::svdf_state::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, svdf_state_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf_state::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf_state

