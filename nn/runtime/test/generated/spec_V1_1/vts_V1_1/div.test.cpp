// Generated from div.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::div {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::div

namespace android::hardware::neuralnetworks::V1_1::generated_tests::div {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, div) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::div::get_examples());
}

TEST_F(ValidationTest, div) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::div::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::div

namespace generated_tests::div {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::div

namespace android::hardware::neuralnetworks::V1_1::generated_tests::div {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, div_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::div::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, div_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::div::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::div

