// Generated from embedding_lookup.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::embedding_lookup {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::embedding_lookup

namespace android::hardware::neuralnetworks::V1_1::generated_tests::embedding_lookup {

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

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::embedding_lookup

namespace generated_tests::embedding_lookup {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::embedding_lookup

namespace android::hardware::neuralnetworks::V1_1::generated_tests::embedding_lookup {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, embedding_lookup_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::embedding_lookup::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, embedding_lookup_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::embedding_lookup::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::embedding_lookup

