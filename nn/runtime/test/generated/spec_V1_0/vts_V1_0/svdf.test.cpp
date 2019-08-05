// Generated from svdf.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::svdf {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::svdf

namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, svdf) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::svdf::get_examples());
}

TEST_F(ValidationTest, svdf) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf

