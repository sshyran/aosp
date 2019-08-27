// Generated from sub_broadcast_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::sub_broadcast_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::sub_broadcast_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub_broadcast_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, sub_broadcast_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::sub_broadcast_float::get_examples());
}

TEST_F(ValidationTest, sub_broadcast_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_broadcast_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub_broadcast_float

namespace generated_tests::sub_broadcast_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::sub_broadcast_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub_broadcast_float {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, sub_broadcast_float_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::sub_broadcast_float::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, sub_broadcast_float_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_broadcast_float::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub_broadcast_float

