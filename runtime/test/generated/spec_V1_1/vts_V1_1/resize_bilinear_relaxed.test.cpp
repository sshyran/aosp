// Generated from resize_bilinear_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::resize_bilinear_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::resize_bilinear_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::resize_bilinear_relaxed::get_examples());
}

TEST_F(ValidationTest, resize_bilinear_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear_relaxed

