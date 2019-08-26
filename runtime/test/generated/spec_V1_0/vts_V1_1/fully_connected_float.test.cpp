// Generated from fully_connected_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::fully_connected_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::fully_connected_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::fully_connected_float::get_examples());
}

TEST_F(ValidationTest, fully_connected_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float

