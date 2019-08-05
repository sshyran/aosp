// Generated from svdf2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::svdf2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::svdf2

namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, svdf2) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::svdf2::get_examples());
}

TEST_F(ValidationTest, svdf2) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf2

