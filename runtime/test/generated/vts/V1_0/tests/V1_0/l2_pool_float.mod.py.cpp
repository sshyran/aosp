// Generated from l2_pool_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::l2_pool_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::l2_pool_float

namespace android::hardware::neuralnetworks::V1_0::generated_tests::l2_pool_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, l2_pool_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::l2_pool_float::get_examples());
}

TEST_F(ValidationTest, l2_pool_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_pool_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::l2_pool_float

