// Generated from mul.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mul {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mul

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mul {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mul) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mul::get_examples());
}

TEST_F(ValidationTest, mul) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mul::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mul

