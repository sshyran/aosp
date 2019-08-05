// Generated from embedding_lookup_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::embedding_lookup_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::embedding_lookup_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::embedding_lookup_relaxed {

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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::embedding_lookup_relaxed

namespace generated_tests::embedding_lookup_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::embedding_lookup_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::embedding_lookup_relaxed {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, embedding_lookup_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::embedding_lookup_relaxed::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, embedding_lookup_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::embedding_lookup_relaxed::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::embedding_lookup_relaxed

