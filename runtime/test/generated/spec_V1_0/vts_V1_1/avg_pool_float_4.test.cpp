// Generated from avg_pool_float_4.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::avg_pool_float_4 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::avg_pool_float_4

namespace android::hardware::neuralnetworks::V1_1::generated_tests::avg_pool_float_4 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, avg_pool_float_4) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::avg_pool_float_4::get_examples());
}

TEST_F(ValidationTest, avg_pool_float_4) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::avg_pool_float_4::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::avg_pool_float_4

namespace generated_tests::avg_pool_float_4 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::avg_pool_float_4

namespace android::hardware::neuralnetworks::V1_1::generated_tests::avg_pool_float_4 {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, avg_pool_float_4_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::avg_pool_float_4::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, avg_pool_float_4_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::avg_pool_float_4::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::avg_pool_float_4

