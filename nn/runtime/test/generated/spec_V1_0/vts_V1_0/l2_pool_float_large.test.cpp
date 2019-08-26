// Generated from l2_pool_float_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::l2_pool_float_large {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::l2_pool_float_large

namespace android::hardware::neuralnetworks::V1_0::generated_tests::l2_pool_float_large {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, l2_pool_float_large) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::l2_pool_float_large::get_examples());
}

TEST_F(ValidationTest, l2_pool_float_large) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_pool_float_large::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::l2_pool_float_large

namespace generated_tests::l2_pool_float_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_float_large

namespace android::hardware::neuralnetworks::V1_0::generated_tests::l2_pool_float_large {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_pool_float_large_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::l2_pool_float_large::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_pool_float_large_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_pool_float_large::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::l2_pool_float_large

