// Generated from random_multinomial.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::random_multinomial {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::random_multinomial

namespace android::hardware::neuralnetworks::V1_2::generated_tests::random_multinomial {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, random_multinomial) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::random_multinomial::get_examples());
}

TEST_F(ValidationTest, random_multinomial) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::random_multinomial::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::random_multinomial

namespace generated_tests::random_multinomial {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::random_multinomial

namespace android::hardware::neuralnetworks::V1_2::generated_tests::random_multinomial {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, random_multinomial_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::random_multinomial::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, random_multinomial_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::random_multinomial::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::random_multinomial

