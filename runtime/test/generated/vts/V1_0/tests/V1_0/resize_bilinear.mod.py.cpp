// Generated from resize_bilinear.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::resize_bilinear {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::resize_bilinear

namespace android::hardware::neuralnetworks::V1_0::generated_tests::resize_bilinear {

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

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::resize_bilinear

