// Generated from fully_connected_float_4d_simple_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::fully_connected_float_4d_simple_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::fully_connected_float_4d_simple_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_4d_simple_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_float_4d_simple_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::fully_connected_float_4d_simple_relaxed::get_examples());
}

TEST_F(ValidationTest, fully_connected_float_4d_simple_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_float_4d_simple_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_4d_simple_relaxed

