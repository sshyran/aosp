// Generated from embedding_lookup_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::embedding_lookup_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::embedding_lookup_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::embedding_lookup_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, embedding_lookup_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::embedding_lookup_relaxed::get_examples());
}

TEST_F(ValidationTest, embedding_lookup_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::embedding_lookup_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::embedding_lookup_relaxed

