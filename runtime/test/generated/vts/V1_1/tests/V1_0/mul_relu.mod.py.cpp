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

