// Generated from mobilenet_224_gender_basic_fixed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mobilenet_224_gender_basic_fixed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mobilenet_224_gender_basic_fixed

namespace android::hardware::neuralnetworks::V1_0::generated_tests::mobilenet_224_gender_basic_fixed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mobilenet_224_gender_basic_fixed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mobilenet_224_gender_basic_fixed::get_examples());
}

TEST_F(ValidationTest, mobilenet_224_gender_basic_fixed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mobilenet_224_gender_basic_fixed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::mobilenet_224_gender_basic_fixed

