// Generated from add.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::add {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::add

namespace android::hardware::neuralnetworks::V1_0::generated_tests::add {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, add) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::add::get_examples());
}

TEST_F(ValidationTest, add) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::add::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::add

