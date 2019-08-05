// Generated from lstm_state.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::lstm_state {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::lstm_state

namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm_state {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, lstm_state) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::lstm_state::get_examples());
}

TEST_F(ValidationTest, lstm_state) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::lstm_state::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm_state

