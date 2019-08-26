// Generated from max_pool_float_4_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::max_pool_float_4_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::max_pool_float_4_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::max_pool_float_4_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, max_pool_float_4_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::max_pool_float_4_relaxed::get_examples());
}

TEST_F(ValidationTest, max_pool_float_4_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::max_pool_float_4_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::max_pool_float_4_relaxed

namespace generated_tests::max_pool_float_4_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::max_pool_float_4_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::max_pool_float_4_relaxed {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, max_pool_float_4_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::max_pool_float_4_relaxed::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, max_pool_float_4_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::max_pool_float_4_relaxed::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::max_pool_float_4_relaxed

