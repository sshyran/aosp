// Generated from lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::lstm

namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, lstm) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::lstm::get_examples());
}

TEST_F(ValidationTest, lstm) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::lstm::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm

