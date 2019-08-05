// Generated from reshape.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::reshape {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::reshape

namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, reshape) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::reshape::get_examples());
}

TEST_F(ValidationTest, reshape) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::reshape::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape

