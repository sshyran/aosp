// Generated from sub.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::sub {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::sub

namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, sub) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::sub::get_examples());
}

TEST_F(ValidationTest, sub) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::sub::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub

