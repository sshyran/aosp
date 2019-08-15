// Generated from floor.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::floor {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::floor

namespace android::hardware::neuralnetworks::V1_0::generated_tests::floor {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, floor) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::floor::get_examples());
}

TEST_F(ValidationTest, floor) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::floor::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::floor

