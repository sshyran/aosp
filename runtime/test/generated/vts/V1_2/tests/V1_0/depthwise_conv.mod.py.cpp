// Generated from depthwise_conv.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv {

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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::depthwise_conv::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv {

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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv

namespace generated_tests::depthwise_conv {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv

