// Generated from dequantize_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::dequantize_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::dequantize_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::dequantize_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, dequantize_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::dequantize_relaxed::get_examples());
}

TEST_F(ValidationTest, dequantize_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::dequantize_relaxed

