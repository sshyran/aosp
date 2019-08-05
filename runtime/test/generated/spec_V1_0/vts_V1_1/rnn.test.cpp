// Generated from rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::rnn

namespace android::hardware::neuralnetworks::V1_1::generated_tests::rnn {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, rnn) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::rnn::get_examples());
}

TEST_F(ValidationTest, rnn) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::rnn::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::rnn

