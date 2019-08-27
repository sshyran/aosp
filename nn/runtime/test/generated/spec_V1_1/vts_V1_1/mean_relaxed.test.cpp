// Generated from mean_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mean_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mean_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mean_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mean_relaxed::get_examples());
}

TEST_F(ValidationTest, mean_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mean_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed

namespace generated_tests::mean_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::mean_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, mean_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::mean_relaxed::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, mean_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::mean_relaxed::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed

namespace generated_tests::mean_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::mean_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, mean_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::mean_relaxed::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, mean_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::mean_relaxed::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed

namespace generated_tests::mean_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::mean_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, mean_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::mean_relaxed::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, mean_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::mean_relaxed::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean_relaxed

