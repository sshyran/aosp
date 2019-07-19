// Generated from conv_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::conv_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::conv_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, conv_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::conv_float::get_examples());
}

TEST_F(ValidationTest, conv_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_float

