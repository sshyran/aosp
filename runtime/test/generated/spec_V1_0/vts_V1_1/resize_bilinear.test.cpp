// Generated from resize_bilinear.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::resize_bilinear {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::resize_bilinear

namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::resize_bilinear::get_examples());
}

TEST_F(ValidationTest, resize_bilinear) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear

namespace generated_tests::resize_bilinear {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear

namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::resize_bilinear::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear

