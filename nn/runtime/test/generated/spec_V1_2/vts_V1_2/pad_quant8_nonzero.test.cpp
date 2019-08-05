// Generated from pad_quant8_nonzero.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::pad_quant8_nonzero {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::pad_quant8_nonzero

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_quant8_nonzero {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, pad_quant8_nonzero) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::pad_quant8_nonzero::get_examples());
}

TEST_F(ValidationTest, pad_quant8_nonzero) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_quant8_nonzero::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_quant8_nonzero

namespace generated_tests::pad_quant8_nonzero {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::pad_quant8_nonzero

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_quant8_nonzero {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_quant8_nonzero_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::pad_quant8_nonzero::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_quant8_nonzero_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_quant8_nonzero::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_quant8_nonzero

