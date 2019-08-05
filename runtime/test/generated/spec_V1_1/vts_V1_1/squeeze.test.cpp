// Generated from squeeze.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::squeeze {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::squeeze

namespace android::hardware::neuralnetworks::V1_1::generated_tests::squeeze {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, squeeze) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::squeeze::get_examples());
}

TEST_F(ValidationTest, squeeze) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::squeeze::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::squeeze

