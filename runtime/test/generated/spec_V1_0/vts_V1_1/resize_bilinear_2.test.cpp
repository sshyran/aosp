// Generated from resize_bilinear_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::resize_bilinear_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::resize_bilinear_2

namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_2) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::resize_bilinear_2::get_examples());
}

TEST_F(ValidationTest, resize_bilinear_2) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::resize_bilinear_2

