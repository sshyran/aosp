// Generated from reshape_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::reshape_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::reshape_quant8

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reshape_quant8 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, reshape_quant8) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::reshape_quant8::get_examples());
}

TEST_F(ValidationTest, reshape_quant8) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::reshape_quant8::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reshape_quant8

namespace generated_tests::reshape_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::reshape_quant8

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reshape_quant8 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reshape_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::reshape_quant8::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reshape_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reshape_quant8::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reshape_quant8

