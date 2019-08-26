// Generated from tanh.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::tanh {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::tanh

namespace android::hardware::neuralnetworks::V1_0::generated_tests::tanh {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, tanh) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::tanh::get_examples());
}

TEST_F(ValidationTest, tanh) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::tanh::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::tanh

