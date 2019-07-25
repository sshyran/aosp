// Generated from mul_relu.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mul_relu {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mul_relu

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mul_relu {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mul_relu) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mul_relu::get_examples());
}

TEST_F(ValidationTest, mul_relu) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_relu::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mul_relu

namespace generated_tests::mul_relu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::mul_relu

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mul_relu {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, mul_relu_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::mul_relu::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, mul_relu_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_relu::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mul_relu

