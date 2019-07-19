// Generated from lsh_projection_deprecated.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::lsh_projection_deprecated {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::lsh_projection_deprecated

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_deprecated {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, lsh_projection_deprecated) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::lsh_projection_deprecated::get_examples());
}

TEST_F(ValidationTest, lsh_projection_deprecated) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_deprecated::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_deprecated

namespace generated_tests::lsh_projection_deprecated {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::lsh_projection_deprecated

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_deprecated {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, lsh_projection_deprecated_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::lsh_projection_deprecated::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, lsh_projection_deprecated_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_deprecated::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_deprecated

