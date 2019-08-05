// Generated from batch_to_space.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::batch_to_space {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::batch_to_space

namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::batch_to_space::get_examples());
}

TEST_F(ValidationTest, batch_to_space) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space

