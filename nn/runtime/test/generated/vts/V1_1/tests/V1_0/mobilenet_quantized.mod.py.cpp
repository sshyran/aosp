// Generated from mobilenet_quantized.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mobilenet_quantized {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mobilenet_quantized

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mobilenet_quantized {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mobilenet_quantized) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mobilenet_quantized::get_examples());
}

TEST_F(ValidationTest, mobilenet_quantized) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mobilenet_quantized::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mobilenet_quantized

