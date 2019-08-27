// Generated from l2_normalization.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::l2_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::l2_normalization

namespace android::hardware::neuralnetworks::V1_1::generated_tests::l2_normalization {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::l2_normalization::get_examples());
}

TEST_F(ValidationTest, l2_normalization) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::l2_normalization

namespace generated_tests::l2_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization

namespace android::hardware::neuralnetworks::V1_1::generated_tests::l2_normalization {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::l2_normalization::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::l2_normalization

