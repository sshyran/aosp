// Generated from depthwise_conv2d_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc();
bool is_ignored_nhwc(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc) {
  Execute(device,
          createTestModel_nhwc,
          is_ignored_nhwc,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc) {
  const Model model = createTestModel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_dynamic_output_shape();
bool is_ignored_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_dynamic_output_shape,
          is_ignored_nhwc_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal();
bool is_ignored_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal,
          is_ignored_nhwc_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs();
bool is_ignored_nhwc_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs,
          is_ignored_nhwc_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed();
bool is_ignored_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed) {
  Execute(device,
          createTestModel_nhwc_relaxed,
          is_ignored_nhwc_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed) {
  const Model model = createTestModel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relaxed_dynamic_output_shape,
          is_ignored_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16();
bool is_ignored_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16) {
  Execute(device,
          createTestModel_nhwc_float16,
          is_ignored_nhwc_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16) {
  const Model model = createTestModel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_dynamic_output_shape();
bool is_ignored_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_float16_dynamic_output_shape,
          is_ignored_nhwc_float16_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal();
bool is_ignored_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal,
          is_ignored_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs();
bool is_ignored_nhwc_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs,
          is_ignored_nhwc_float16_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8();
bool is_ignored_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_channelQuant8,
          is_ignored_nhwc_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8) {
  const Model model = createTestModel_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_dynamic_output_shape();
bool is_ignored_nhwc_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_dynamic_output_shape,
          is_ignored_nhwc_channelQuant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_inputs_as_internal();
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_inputs_as_internal,
          is_ignored_nhwc_channelQuant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_2();
bool is_ignored_nhwc_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_2,
          is_ignored_nhwc_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_2) {
  const Model model = createTestModel_nhwc_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nhwc_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_dynamic_output_shape_2,
          is_ignored_nhwc_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nhwc_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8();
bool is_ignored_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8) {
  Execute(device,
          createTestModel_nhwc_quant8,
          is_ignored_nhwc_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8) {
  const Model model = createTestModel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_dynamic_output_shape();
bool is_ignored_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_quant8_dynamic_output_shape,
          is_ignored_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal,
          is_ignored_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs,
          is_ignored_nhwc_quant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw();
bool is_ignored_nchw(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw) {
  Execute(device,
          createTestModel_nchw,
          is_ignored_nchw,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw) {
  const Model model = createTestModel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_dynamic_output_shape();
bool is_ignored_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_dynamic_output_shape,
          is_ignored_nchw_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_dynamic_output_shape) {
  const Model model = createTestModel_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal();
bool is_ignored_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal,
          is_ignored_nchw_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs();
bool is_ignored_nchw_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs,
          is_ignored_nchw_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed();
bool is_ignored_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed) {
  Execute(device,
          createTestModel_nchw_relaxed,
          is_ignored_nchw_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed) {
  const Model model = createTestModel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_dynamic_output_shape();
bool is_ignored_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relaxed_dynamic_output_shape,
          is_ignored_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal,
          is_ignored_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs,
          is_ignored_nchw_relaxed_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16();
bool is_ignored_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16) {
  Execute(device,
          createTestModel_nchw_float16,
          is_ignored_nchw_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16) {
  const Model model = createTestModel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_dynamic_output_shape();
bool is_ignored_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_float16_dynamic_output_shape,
          is_ignored_nchw_float16_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal();
bool is_ignored_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal,
          is_ignored_nchw_float16_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs();
bool is_ignored_nchw_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs,
          is_ignored_nchw_float16_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8();
bool is_ignored_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8) {
  Execute(device,
          createTestModel_nchw_channelQuant8,
          is_ignored_nchw_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8) {
  const Model model = createTestModel_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_dynamic_output_shape();
bool is_ignored_nchw_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_channelQuant8_dynamic_output_shape,
          is_ignored_nchw_channelQuant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_inputs_as_internal();
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_inputs_as_internal,
          is_ignored_nchw_channelQuant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_2();
bool is_ignored_nchw_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_2,
          is_ignored_nchw_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_2) {
  const Model model = createTestModel_nchw_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nchw_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_dynamic_output_shape_2,
          is_ignored_nchw_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nchw_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8();
bool is_ignored_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8) {
  Execute(device,
          createTestModel_nchw_quant8,
          is_ignored_nchw_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8) {
  const Model model = createTestModel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_dynamic_output_shape();
bool is_ignored_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_quant8_dynamic_output_shape,
          is_ignored_nchw_quant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal();
bool is_ignored_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal,
          is_ignored_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs();
bool is_ignored_nchw_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs,
          is_ignored_nchw_quant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_2();
bool is_ignored_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_2) {
  Execute(device,
          createTestModel_nhwc_2,
          is_ignored_nhwc_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_2) {
  const Model model = createTestModel_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_dynamic_output_shape_2();
bool is_ignored_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_dynamic_output_shape_2,
          is_ignored_nhwc_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal_2();
bool is_ignored_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal_2,
          is_ignored_nhwc_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_2();
bool is_ignored_nhwc_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_2,
          is_ignored_nhwc_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_2();
bool is_ignored_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_2,
          is_ignored_nhwc_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_2) {
  const Model model = createTestModel_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_2,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_2();
bool is_ignored_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_2) {
  Execute(device,
          createTestModel_nhwc_float16_2,
          is_ignored_nhwc_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_2) {
  const Model model = createTestModel_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_float16_dynamic_output_shape_2,
          is_ignored_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_2();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_2,
          is_ignored_nhwc_float16_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_2();
bool is_ignored_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_2) {
  Execute(device,
          createTestModel_nhwc_quant8_2,
          is_ignored_nhwc_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_2) {
  const Model model = createTestModel_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_3();
bool is_ignored_nhwc_channelQuant8_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_3,
          is_ignored_nhwc_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_3) {
  const Model model = createTestModel_nhwc_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_dynamic_output_shape_3();
bool is_ignored_nhwc_channelQuant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_dynamic_output_shape_3,
          is_ignored_nhwc_channelQuant8_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape_3) {
  const Model model = createTestModel_nhwc_channelQuant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_inputs_as_internal_3();
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_inputs_as_internal_3,
          is_ignored_nhwc_channelQuant8_all_inputs_as_internal_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_nhwc_channelQuant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_3();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_3,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_3) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_2();
bool is_ignored_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_2) {
  Execute(device,
          createTestModel_nchw_2,
          is_ignored_nchw_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_2) {
  const Model model = createTestModel_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_dynamic_output_shape_2();
bool is_ignored_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_dynamic_output_shape_2,
          is_ignored_nchw_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal_2();
bool is_ignored_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal_2,
          is_ignored_nchw_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_2();
bool is_ignored_nchw_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_2,
          is_ignored_nchw_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_2();
bool is_ignored_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_2) {
  Execute(device,
          createTestModel_nchw_relaxed_2,
          is_ignored_nchw_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_2) {
  const Model model = createTestModel_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_2();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_2,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_2();
bool is_ignored_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_2) {
  Execute(device,
          createTestModel_nchw_float16_2,
          is_ignored_nchw_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_2) {
  const Model model = createTestModel_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_dynamic_output_shape_2();
bool is_ignored_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_float16_dynamic_output_shape_2,
          is_ignored_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal_2,
          is_ignored_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_2();
bool is_ignored_nchw_float16_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_2,
          is_ignored_nchw_float16_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_2();
bool is_ignored_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_2) {
  Execute(device,
          createTestModel_nchw_quant8_2,
          is_ignored_nchw_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_2) {
  const Model model = createTestModel_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_quant8_dynamic_output_shape_2,
          is_ignored_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_2,
          is_ignored_nchw_quant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_3();
bool is_ignored_nchw_channelQuant8_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_3,
          is_ignored_nchw_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_3) {
  const Model model = createTestModel_nchw_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_dynamic_output_shape_3();
bool is_ignored_nchw_channelQuant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_dynamic_output_shape_3,
          is_ignored_nchw_channelQuant8_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape_3) {
  const Model model = createTestModel_nchw_channelQuant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_inputs_as_internal_3();
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_inputs_as_internal_3,
          is_ignored_nchw_channelQuant8_all_inputs_as_internal_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_nchw_channelQuant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_3();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_3,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_3) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc();
bool is_ignored_large_nhwc(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc) {
  Execute(device,
          createTestModel_large_nhwc,
          is_ignored_large_nhwc,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc) {
  const Model model = createTestModel_large_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_dynamic_output_shape();
bool is_ignored_large_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_dynamic_output_shape,
          is_ignored_large_nhwc_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_inputs_as_internal();
bool is_ignored_large_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_all_inputs_as_internal,
          is_ignored_large_nhwc_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs();
bool is_ignored_large_nhwc_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs,
          is_ignored_large_nhwc_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed();
bool is_ignored_large_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed) {
  Execute(device,
          createTestModel_large_nhwc_relaxed,
          is_ignored_large_nhwc_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed) {
  const Model model = createTestModel_large_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_large_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16();
bool is_ignored_large_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16) {
  Execute(device,
          createTestModel_large_nhwc_float16,
          is_ignored_large_nhwc_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16) {
  const Model model = createTestModel_large_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_dynamic_output_shape,
          is_ignored_large_nhwc_float16_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_inputs_as_internal();
bool is_ignored_large_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_inputs_as_internal,
          is_ignored_large_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8();
bool is_ignored_large_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8) {
  Execute(device,
          createTestModel_large_nhwc_quant8,
          is_ignored_large_nhwc_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8) {
  const Model model = createTestModel_large_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_inputs_as_internal,
          is_ignored_large_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8();
bool is_ignored_large_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8,
          is_ignored_large_nhwc_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8) {
  const Model model = createTestModel_large_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal();
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal,
          is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw();
bool is_ignored_large_nchw(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw) {
  Execute(device,
          createTestModel_large_nchw,
          is_ignored_large_nchw,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw) {
  const Model model = createTestModel_large_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_dynamic_output_shape();
bool is_ignored_large_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_dynamic_output_shape,
          is_ignored_large_nchw_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_inputs_as_internal();
bool is_ignored_large_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_all_inputs_as_internal,
          is_ignored_large_nchw_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs();
bool is_ignored_large_nchw_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs,
          is_ignored_large_nchw_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed();
bool is_ignored_large_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed) {
  Execute(device,
          createTestModel_large_nchw_relaxed,
          is_ignored_large_nchw_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed) {
  const Model model = createTestModel_large_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_inputs_as_internal,
          is_ignored_large_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16();
bool is_ignored_large_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16) {
  Execute(device,
          createTestModel_large_nchw_float16,
          is_ignored_large_nchw_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16) {
  const Model model = createTestModel_large_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_dynamic_output_shape();
bool is_ignored_large_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_dynamic_output_shape,
          is_ignored_large_nchw_float16_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_inputs_as_internal();
bool is_ignored_large_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_float16_all_inputs_as_internal,
          is_ignored_large_nchw_float16_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs,
          is_ignored_large_nchw_float16_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8();
bool is_ignored_large_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8) {
  Execute(device,
          createTestModel_large_nchw_quant8,
          is_ignored_large_nchw_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8) {
  const Model model = createTestModel_large_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_dynamic_output_shape,
          is_ignored_large_nchw_quant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_inputs_as_internal();
bool is_ignored_large_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_inputs_as_internal,
          is_ignored_large_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8();
bool is_ignored_large_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8,
          is_ignored_large_nchw_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8) {
  const Model model = createTestModel_large_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_inputs_as_internal();
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_inputs_as_internal,
          is_ignored_large_nchw_channelQuant8_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_2();
bool is_ignored_large_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_2) {
  Execute(device,
          createTestModel_large_nhwc_2,
          is_ignored_large_nhwc_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_2) {
  const Model model = createTestModel_large_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_dynamic_output_shape_2();
bool is_ignored_large_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_dynamic_output_shape_2,
          is_ignored_large_nhwc_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_all_inputs_as_internal_2,
          is_ignored_large_nhwc_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_2();
bool is_ignored_large_nhwc_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_2,
          is_ignored_large_nhwc_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_2();
bool is_ignored_large_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_2,
          is_ignored_large_nhwc_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_2) {
  const Model model = createTestModel_large_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_large_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_large_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_large_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_2();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_2,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_2();
bool is_ignored_large_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_2,
          is_ignored_large_nhwc_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_2) {
  const Model model = createTestModel_large_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_large_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_dynamic_output_shape_2,
          is_ignored_large_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_large_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_2();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_2,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_2();
bool is_ignored_large_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_2,
          is_ignored_large_nhwc_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_2) {
  const Model model = createTestModel_large_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_large_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_large_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_large_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_2();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_2,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_2();
bool is_ignored_large_nhwc_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_2,
          is_ignored_large_nhwc_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_dynamic_output_shape_2();
bool is_ignored_large_nhwc_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_dynamic_output_shape_2,
          is_ignored_large_nhwc_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_2,
          is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_2();
bool is_ignored_large_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_2) {
  Execute(device,
          createTestModel_large_nchw_2,
          is_ignored_large_nchw_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_2) {
  const Model model = createTestModel_large_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_dynamic_output_shape_2();
bool is_ignored_large_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_dynamic_output_shape_2,
          is_ignored_large_nchw_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_inputs_as_internal_2();
bool is_ignored_large_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_all_inputs_as_internal_2,
          is_ignored_large_nchw_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_2();
bool is_ignored_large_nchw_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_2,
          is_ignored_large_nchw_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_2();
bool is_ignored_large_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_2,
          is_ignored_large_nchw_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_2) {
  const Model model = createTestModel_large_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_large_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_large_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_large_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_2();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_2,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_2();
bool is_ignored_large_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_2) {
  Execute(device,
          createTestModel_large_nchw_float16_2,
          is_ignored_large_nchw_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_2) {
  const Model model = createTestModel_large_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_dynamic_output_shape_2();
bool is_ignored_large_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_float16_dynamic_output_shape_2,
          is_ignored_large_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_large_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_float16_all_inputs_as_internal_2,
          is_ignored_large_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_2();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_2,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_2();
bool is_ignored_large_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_2,
          is_ignored_large_nchw_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_2) {
  const Model model = createTestModel_large_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_large_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_dynamic_output_shape_2,
          is_ignored_large_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_large_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_large_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_2();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_2,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_2();
bool is_ignored_large_nchw_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_2,
          is_ignored_large_nchw_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_dynamic_output_shape_2();
bool is_ignored_large_nchw_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_dynamic_output_shape_2,
          is_ignored_large_nchw_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_2,
          is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1();
bool is_ignored_quant_output_multiplier_gt_1(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1,
          is_ignored_quant_output_multiplier_gt_1,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1) {
  const Model model = createTestModel_quant_output_multiplier_gt_1();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_all_inputs_as_internal();
bool is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_all_inputs_as_internal,
          is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs();
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs,
          is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed();
bool is_ignored_quant_output_multiplier_gt_1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed,
          is_ignored_quant_output_multiplier_gt_1_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal,
          is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs,
          is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

