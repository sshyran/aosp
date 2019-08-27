// Generated from space_to_depth_quant8_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::space_to_depth_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::space_to_depth_quant8_1

namespace android::hardware::neuralnetworks::V1_0::generated_tests::space_to_depth_quant8_1 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_quant8_1) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::space_to_depth_quant8_1::get_examples());
}

TEST_F(ValidationTest, space_to_depth_quant8_1) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_quant8_1::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::space_to_depth_quant8_1

namespace generated_tests::space_to_depth_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::space_to_depth_quant8_1

namespace android::hardware::neuralnetworks::V1_0::generated_tests::space_to_depth_quant8_1 {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_quant8_1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::space_to_depth_quant8_1::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, space_to_depth_quant8_1_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_quant8_1::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::space_to_depth_quant8_1

