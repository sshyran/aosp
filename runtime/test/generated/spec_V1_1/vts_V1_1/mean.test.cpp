// Generated from mean.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mean {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mean

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mean) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mean::get_examples());
}

TEST_F(ValidationTest, mean) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mean::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mean

