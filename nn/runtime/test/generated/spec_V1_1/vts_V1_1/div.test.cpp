// Generated from div.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::div {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::div

namespace android::hardware::neuralnetworks::V1_1::generated_tests::div {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, div) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::div::get_examples());
}

TEST_F(ValidationTest, div) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::div::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::div

