// Generated from lsh_projection.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::lsh_projection {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::lsh_projection

namespace android::hardware::neuralnetworks::V1_1::generated_tests::lsh_projection {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, lsh_projection) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::lsh_projection::get_examples());
}

TEST_F(ValidationTest, lsh_projection) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::lsh_projection

