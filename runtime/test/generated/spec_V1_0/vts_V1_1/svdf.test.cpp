// Generated from svdf.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::svdf {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::svdf

namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, svdf) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::svdf::get_examples());
}

TEST_F(ValidationTest, svdf) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf

namespace generated_tests::svdf {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::svdf

namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, svdf_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::svdf::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, svdf_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf

