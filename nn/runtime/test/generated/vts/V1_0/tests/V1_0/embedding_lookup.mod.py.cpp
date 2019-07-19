// Generated from embedding_lookup.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::embedding_lookup {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::embedding_lookup

namespace android::hardware::neuralnetworks::V1_0::generated_tests::embedding_lookup {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, embedding_lookup) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::embedding_lookup::get_examples());
}

TEST_F(ValidationTest, embedding_lookup) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::embedding_lookup::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::embedding_lookup

