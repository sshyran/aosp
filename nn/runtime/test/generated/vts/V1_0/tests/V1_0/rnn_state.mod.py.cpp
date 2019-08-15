// Generated from rnn_state.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::rnn_state {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::rnn_state

namespace android::hardware::neuralnetworks::V1_0::generated_tests::rnn_state {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, rnn_state) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::rnn_state::get_examples());
}

TEST_F(ValidationTest, rnn_state) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::rnn_state::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::rnn_state

