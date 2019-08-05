// Generated from conv_float_large_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::conv_float_large_weights_as_inputs {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::conv_float_large_weights_as_inputs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_float_large_weights_as_inputs {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, conv_float_large_weights_as_inputs) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::conv_float_large_weights_as_inputs::get_examples());
}

TEST_F(ValidationTest, conv_float_large_weights_as_inputs) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_float_large_weights_as_inputs::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_float_large_weights_as_inputs

namespace generated_tests::conv_float_large_weights_as_inputs {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::conv_float_large_weights_as_inputs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_float_large_weights_as_inputs {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, conv_float_large_weights_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::conv_float_large_weights_as_inputs::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, conv_float_large_weights_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_float_large_weights_as_inputs::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_float_large_weights_as_inputs

