// Generated from pad.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::pad {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::pad

namespace android::hardware::neuralnetworks::V1_1::generated_tests::pad {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, pad) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::pad::get_examples());
}

TEST_F(ValidationTest, pad) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::pad::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::pad

