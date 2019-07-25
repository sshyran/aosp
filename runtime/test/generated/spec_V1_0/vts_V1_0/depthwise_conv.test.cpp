// Generated from depthwise_conv.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::depthwise_conv::get_examples());
}

TEST_F(ValidationTest, depthwise_conv) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::depthwise_conv::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::depthwise_conv::get_examples_2());
}

TEST_F(ValidationTest, depthwise_conv_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_all_tensors_as_inputs_2();
bool is_ignored_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_2,
          is_ignored_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs_2) {
  const Model model = createTestModel_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::depthwise_conv

