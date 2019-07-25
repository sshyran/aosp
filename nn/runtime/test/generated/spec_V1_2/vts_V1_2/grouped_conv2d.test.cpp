// Generated from grouped_conv2d.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none();
bool is_ignored_nhwc_none(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none) {
  Execute(device,
          createTestModel_nhwc_none,
          is_ignored_nhwc_none,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none) {
  const Model model = createTestModel_nhwc_none();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_dynamic_output_shape();
bool is_ignored_nhwc_none_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_dynamic_output_shape,
          is_ignored_nhwc_none_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_all_inputs_as_internal();
bool is_ignored_nhwc_none_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_all_inputs_as_internal,
          is_ignored_nhwc_none_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_all_tensors_as_inputs();
bool is_ignored_nhwc_none_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_none_all_tensors_as_inputs,
          is_ignored_nhwc_none_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_none_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_none_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_none_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed();
bool is_ignored_nhwc_none_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_relaxed) {
  Execute(device,
          createTestModel_nhwc_none_relaxed,
          is_ignored_nhwc_none_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed) {
  const Model model = createTestModel_nhwc_none_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_dynamic_output_shape();
bool is_ignored_nhwc_none_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_dynamic_output_shape,
          is_ignored_nhwc_none_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_all_inputs_as_internal();
bool is_ignored_nhwc_none_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_all_inputs_as_internal,
          is_ignored_nhwc_none_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_all_tensors_as_inputs();
bool is_ignored_nhwc_none_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_all_tensors_as_inputs,
          is_ignored_nhwc_none_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_none_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8();
bool is_ignored_nhwc_none_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8) {
  Execute(device,
          createTestModel_nhwc_none_quant8,
          is_ignored_nhwc_none_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8) {
  const Model model = createTestModel_nhwc_none_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_dynamic_output_shape();
bool is_ignored_nhwc_none_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_quant8_dynamic_output_shape,
          is_ignored_nhwc_none_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_inputs_as_internal();
bool is_ignored_nhwc_none_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_inputs_as_internal,
          is_ignored_nhwc_none_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_2();
bool is_ignored_nhwc_none_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_2,
          is_ignored_nhwc_none_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_2) {
  const Model model = createTestModel_nhwc_none_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_dynamic_output_shape_2();
bool is_ignored_nhwc_none_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_dynamic_output_shape_2,
          is_ignored_nhwc_none_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_none_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_inputs_as_internal_2,
          is_ignored_nhwc_none_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_none_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8();
bool is_ignored_nhwc_none_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8,
          is_ignored_nhwc_none_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8) {
  const Model model = createTestModel_nhwc_none_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_dynamic_output_shape();
bool is_ignored_nhwc_none_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_dynamic_output_shape,
          is_ignored_nhwc_none_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal();
bool is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal,
          is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_2();
bool is_ignored_nhwc_none_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_2,
          is_ignored_nhwc_none_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nhwc_none_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_dynamic_output_shape_2,
          is_ignored_nhwc_none_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16();
bool is_ignored_nhwc_none_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_float16) {
  Execute(device,
          createTestModel_nhwc_none_float16,
          is_ignored_nhwc_none_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16) {
  const Model model = createTestModel_nhwc_none_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_dynamic_output_shape();
bool is_ignored_nhwc_none_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_float16_dynamic_output_shape,
          is_ignored_nhwc_none_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_all_inputs_as_internal();
bool is_ignored_nhwc_none_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_float16_all_inputs_as_internal,
          is_ignored_nhwc_none_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_all_tensors_as_inputs();
bool is_ignored_nhwc_none_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_none_float16_all_tensors_as_inputs,
          is_ignored_nhwc_none_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_none_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu();
bool is_ignored_nhwc_relu(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu) {
  Execute(device,
          createTestModel_nhwc_relu,
          is_ignored_nhwc_relu,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu) {
  const Model model = createTestModel_nhwc_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_dynamic_output_shape();
bool is_ignored_nhwc_relu_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_dynamic_output_shape,
          is_ignored_nhwc_relu_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_all_inputs_as_internal();
bool is_ignored_nhwc_relu_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_all_inputs_as_internal,
          is_ignored_nhwc_relu_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_all_tensors_as_inputs();
bool is_ignored_nhwc_relu_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu_all_tensors_as_inputs,
          is_ignored_nhwc_relu_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed();
bool is_ignored_nhwc_relu_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_relaxed) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed,
          is_ignored_nhwc_relu_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed) {
  const Model model = createTestModel_nhwc_relu_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_dynamic_output_shape();
bool is_ignored_nhwc_relu_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_dynamic_output_shape,
          is_ignored_nhwc_relu_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_all_inputs_as_internal();
bool is_ignored_nhwc_relu_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_all_inputs_as_internal,
          is_ignored_nhwc_relu_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs();
bool is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs,
          is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8();
bool is_ignored_nhwc_relu_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8) {
  Execute(device,
          createTestModel_nhwc_relu_quant8,
          is_ignored_nhwc_relu_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8) {
  const Model model = createTestModel_nhwc_relu_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_dynamic_output_shape();
bool is_ignored_nhwc_relu_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_dynamic_output_shape,
          is_ignored_nhwc_relu_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_inputs_as_internal();
bool is_ignored_nhwc_relu_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_inputs_as_internal,
          is_ignored_nhwc_relu_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_2();
bool is_ignored_nhwc_relu_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_2,
          is_ignored_nhwc_relu_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_2) {
  const Model model = createTestModel_nhwc_relu_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_dynamic_output_shape_2,
          is_ignored_nhwc_relu_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_inputs_as_internal_2,
          is_ignored_nhwc_relu_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8();
bool is_ignored_nhwc_relu_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8,
          is_ignored_nhwc_relu_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8) {
  const Model model = createTestModel_nhwc_relu_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_dynamic_output_shape();
bool is_ignored_nhwc_relu_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_dynamic_output_shape,
          is_ignored_nhwc_relu_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal();
bool is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal,
          is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_2();
bool is_ignored_nhwc_relu_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_2,
          is_ignored_nhwc_relu_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_dynamic_output_shape_2,
          is_ignored_nhwc_relu_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16();
bool is_ignored_nhwc_relu_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_float16) {
  Execute(device,
          createTestModel_nhwc_relu_float16,
          is_ignored_nhwc_relu_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16) {
  const Model model = createTestModel_nhwc_relu_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_dynamic_output_shape();
bool is_ignored_nhwc_relu_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_float16_dynamic_output_shape,
          is_ignored_nhwc_relu_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_all_inputs_as_internal();
bool is_ignored_nhwc_relu_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_float16_all_inputs_as_internal,
          is_ignored_nhwc_relu_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_all_tensors_as_inputs();
bool is_ignored_nhwc_relu_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu_float16_all_tensors_as_inputs,
          is_ignored_nhwc_relu_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1();
bool is_ignored_nhwc_relu1(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1) {
  Execute(device,
          createTestModel_nhwc_relu1,
          is_ignored_nhwc_relu1,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1) {
  const Model model = createTestModel_nhwc_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_dynamic_output_shape();
bool is_ignored_nhwc_relu1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_dynamic_output_shape,
          is_ignored_nhwc_relu1_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_all_inputs_as_internal,
          is_ignored_nhwc_relu1_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_all_tensors_as_inputs();
bool is_ignored_nhwc_relu1_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu1_all_tensors_as_inputs,
          is_ignored_nhwc_relu1_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu1_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed();
bool is_ignored_nhwc_relu1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_relaxed) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed,
          is_ignored_nhwc_relu1_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed) {
  const Model model = createTestModel_nhwc_relu1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_dynamic_output_shape();
bool is_ignored_nhwc_relu1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_dynamic_output_shape,
          is_ignored_nhwc_relu1_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_all_inputs_as_internal,
          is_ignored_nhwc_relu1_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs();
bool is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs,
          is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8();
bool is_ignored_nhwc_relu1_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8,
          is_ignored_nhwc_relu1_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8) {
  const Model model = createTestModel_nhwc_relu1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_dynamic_output_shape();
bool is_ignored_nhwc_relu1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_dynamic_output_shape,
          is_ignored_nhwc_relu1_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_inputs_as_internal,
          is_ignored_nhwc_relu1_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_2();
bool is_ignored_nhwc_relu1_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_2,
          is_ignored_nhwc_relu1_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu1_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_2,
          is_ignored_nhwc_relu1_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8();
bool is_ignored_nhwc_relu1_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8,
          is_ignored_nhwc_relu1_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_dynamic_output_shape();
bool is_ignored_nhwc_relu1_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_dynamic_output_shape,
          is_ignored_nhwc_relu1_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal,
          is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_2();
bool is_ignored_nhwc_relu1_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_2,
          is_ignored_nhwc_relu1_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16();
bool is_ignored_nhwc_relu1_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_float16) {
  Execute(device,
          createTestModel_nhwc_relu1_float16,
          is_ignored_nhwc_relu1_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16) {
  const Model model = createTestModel_nhwc_relu1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_dynamic_output_shape();
bool is_ignored_nhwc_relu1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_dynamic_output_shape,
          is_ignored_nhwc_relu1_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_all_inputs_as_internal,
          is_ignored_nhwc_relu1_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_all_tensors_as_inputs();
bool is_ignored_nhwc_relu1_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_all_tensors_as_inputs,
          is_ignored_nhwc_relu1_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu1_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6();
bool is_ignored_nhwc_relu6(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6) {
  Execute(device,
          createTestModel_nhwc_relu6,
          is_ignored_nhwc_relu6,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6) {
  const Model model = createTestModel_nhwc_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_dynamic_output_shape();
bool is_ignored_nhwc_relu6_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_dynamic_output_shape,
          is_ignored_nhwc_relu6_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_all_inputs_as_internal,
          is_ignored_nhwc_relu6_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_all_tensors_as_inputs();
bool is_ignored_nhwc_relu6_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu6_all_tensors_as_inputs,
          is_ignored_nhwc_relu6_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu6_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed();
bool is_ignored_nhwc_relu6_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_relaxed) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed,
          is_ignored_nhwc_relu6_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed) {
  const Model model = createTestModel_nhwc_relu6_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_dynamic_output_shape();
bool is_ignored_nhwc_relu6_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_dynamic_output_shape,
          is_ignored_nhwc_relu6_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_all_inputs_as_internal,
          is_ignored_nhwc_relu6_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs();
bool is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs,
          is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8();
bool is_ignored_nhwc_relu6_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8,
          is_ignored_nhwc_relu6_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8) {
  const Model model = createTestModel_nhwc_relu6_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_dynamic_output_shape();
bool is_ignored_nhwc_relu6_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_dynamic_output_shape,
          is_ignored_nhwc_relu6_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_inputs_as_internal,
          is_ignored_nhwc_relu6_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_2();
bool is_ignored_nhwc_relu6_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_2,
          is_ignored_nhwc_relu6_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu6_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_2,
          is_ignored_nhwc_relu6_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8();
bool is_ignored_nhwc_relu6_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8,
          is_ignored_nhwc_relu6_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_dynamic_output_shape();
bool is_ignored_nhwc_relu6_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_dynamic_output_shape,
          is_ignored_nhwc_relu6_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal,
          is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_2();
bool is_ignored_nhwc_relu6_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_2,
          is_ignored_nhwc_relu6_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16();
bool is_ignored_nhwc_relu6_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_float16) {
  Execute(device,
          createTestModel_nhwc_relu6_float16,
          is_ignored_nhwc_relu6_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16) {
  const Model model = createTestModel_nhwc_relu6_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_dynamic_output_shape();
bool is_ignored_nhwc_relu6_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_dynamic_output_shape,
          is_ignored_nhwc_relu6_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_all_inputs_as_internal,
          is_ignored_nhwc_relu6_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_all_tensors_as_inputs();
bool is_ignored_nhwc_relu6_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_all_tensors_as_inputs,
          is_ignored_nhwc_relu6_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nhwc_relu6_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none();
bool is_ignored_nchw_none(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none) {
  Execute(device,
          createTestModel_nchw_none,
          is_ignored_nchw_none,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none) {
  const Model model = createTestModel_nchw_none();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_dynamic_output_shape();
bool is_ignored_nchw_none_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_dynamic_output_shape,
          is_ignored_nchw_none_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_all_inputs_as_internal();
bool is_ignored_nchw_none_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_all_inputs_as_internal,
          is_ignored_nchw_none_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_all_tensors_as_inputs();
bool is_ignored_nchw_none_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_none_all_tensors_as_inputs,
          is_ignored_nchw_none_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_none_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_none_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_none_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_none_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_none_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed();
bool is_ignored_nchw_none_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_relaxed) {
  Execute(device,
          createTestModel_nchw_none_relaxed,
          is_ignored_nchw_none_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed) {
  const Model model = createTestModel_nchw_none_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_dynamic_output_shape();
bool is_ignored_nchw_none_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_relaxed_dynamic_output_shape,
          is_ignored_nchw_none_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_all_inputs_as_internal();
bool is_ignored_nchw_none_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_relaxed_all_inputs_as_internal,
          is_ignored_nchw_none_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_all_tensors_as_inputs();
bool is_ignored_nchw_none_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_none_relaxed_all_tensors_as_inputs,
          is_ignored_nchw_none_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_none_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8();
bool is_ignored_nchw_none_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8) {
  Execute(device,
          createTestModel_nchw_none_quant8,
          is_ignored_nchw_none_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8) {
  const Model model = createTestModel_nchw_none_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_dynamic_output_shape();
bool is_ignored_nchw_none_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_quant8_dynamic_output_shape,
          is_ignored_nchw_none_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_inputs_as_internal();
bool is_ignored_nchw_none_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_inputs_as_internal,
          is_ignored_nchw_none_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_2();
bool is_ignored_nchw_none_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_2,
          is_ignored_nchw_none_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_2) {
  const Model model = createTestModel_nchw_none_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_dynamic_output_shape_2();
bool is_ignored_nchw_none_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_dynamic_output_shape_2,
          is_ignored_nchw_none_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_inputs_as_internal_2();
bool is_ignored_nchw_none_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_inputs_as_internal_2,
          is_ignored_nchw_none_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_none_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_2,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8();
bool is_ignored_nchw_none_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8,
          is_ignored_nchw_none_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8) {
  const Model model = createTestModel_nchw_none_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_dynamic_output_shape();
bool is_ignored_nchw_none_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_dynamic_output_shape,
          is_ignored_nchw_none_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_inputs_as_internal();
bool is_ignored_nchw_none_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_inputs_as_internal,
          is_ignored_nchw_none_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_2();
bool is_ignored_nchw_none_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_2,
          is_ignored_nchw_none_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nchw_none_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_dynamic_output_shape_2,
          is_ignored_nchw_none_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nchw_none_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nchw_none_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16();
bool is_ignored_nchw_none_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_float16) {
  Execute(device,
          createTestModel_nchw_none_float16,
          is_ignored_nchw_none_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16) {
  const Model model = createTestModel_nchw_none_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_dynamic_output_shape();
bool is_ignored_nchw_none_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_float16_dynamic_output_shape,
          is_ignored_nchw_none_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_all_inputs_as_internal();
bool is_ignored_nchw_none_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_float16_all_inputs_as_internal,
          is_ignored_nchw_none_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_all_tensors_as_inputs();
bool is_ignored_nchw_none_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_none_float16_all_tensors_as_inputs,
          is_ignored_nchw_none_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_none_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu();
bool is_ignored_nchw_relu(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu) {
  Execute(device,
          createTestModel_nchw_relu,
          is_ignored_nchw_relu,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu) {
  const Model model = createTestModel_nchw_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_dynamic_output_shape();
bool is_ignored_nchw_relu_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_dynamic_output_shape,
          is_ignored_nchw_relu_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_all_inputs_as_internal();
bool is_ignored_nchw_relu_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_all_inputs_as_internal,
          is_ignored_nchw_relu_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_all_tensors_as_inputs();
bool is_ignored_nchw_relu_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu_all_tensors_as_inputs,
          is_ignored_nchw_relu_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed();
bool is_ignored_nchw_relu_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_relaxed) {
  Execute(device,
          createTestModel_nchw_relu_relaxed,
          is_ignored_nchw_relu_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed) {
  const Model model = createTestModel_nchw_relu_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_dynamic_output_shape();
bool is_ignored_nchw_relu_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_dynamic_output_shape,
          is_ignored_nchw_relu_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_all_inputs_as_internal();
bool is_ignored_nchw_relu_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_all_inputs_as_internal,
          is_ignored_nchw_relu_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_all_tensors_as_inputs();
bool is_ignored_nchw_relu_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_all_tensors_as_inputs,
          is_ignored_nchw_relu_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8();
bool is_ignored_nchw_relu_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8) {
  Execute(device,
          createTestModel_nchw_relu_quant8,
          is_ignored_nchw_relu_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8) {
  const Model model = createTestModel_nchw_relu_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_dynamic_output_shape();
bool is_ignored_nchw_relu_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_quant8_dynamic_output_shape,
          is_ignored_nchw_relu_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_inputs_as_internal();
bool is_ignored_nchw_relu_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_inputs_as_internal,
          is_ignored_nchw_relu_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_2();
bool is_ignored_nchw_relu_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_2,
          is_ignored_nchw_relu_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_2) {
  const Model model = createTestModel_nchw_relu_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_dynamic_output_shape_2();
bool is_ignored_nchw_relu_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_dynamic_output_shape_2,
          is_ignored_nchw_relu_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_inputs_as_internal_2();
bool is_ignored_nchw_relu_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_inputs_as_internal_2,
          is_ignored_nchw_relu_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_2,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8();
bool is_ignored_nchw_relu_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8,
          is_ignored_nchw_relu_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8) {
  const Model model = createTestModel_nchw_relu_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_dynamic_output_shape();
bool is_ignored_nchw_relu_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_dynamic_output_shape,
          is_ignored_nchw_relu_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal();
bool is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal,
          is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_2();
bool is_ignored_nchw_relu_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_2,
          is_ignored_nchw_relu_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nchw_relu_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_dynamic_output_shape_2,
          is_ignored_nchw_relu_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16();
bool is_ignored_nchw_relu_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_float16) {
  Execute(device,
          createTestModel_nchw_relu_float16,
          is_ignored_nchw_relu_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16) {
  const Model model = createTestModel_nchw_relu_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_dynamic_output_shape();
bool is_ignored_nchw_relu_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_float16_dynamic_output_shape,
          is_ignored_nchw_relu_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_all_inputs_as_internal();
bool is_ignored_nchw_relu_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_float16_all_inputs_as_internal,
          is_ignored_nchw_relu_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_all_tensors_as_inputs();
bool is_ignored_nchw_relu_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu_float16_all_tensors_as_inputs,
          is_ignored_nchw_relu_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1();
bool is_ignored_nchw_relu1(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1) {
  Execute(device,
          createTestModel_nchw_relu1,
          is_ignored_nchw_relu1,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1) {
  const Model model = createTestModel_nchw_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_dynamic_output_shape();
bool is_ignored_nchw_relu1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_dynamic_output_shape,
          is_ignored_nchw_relu1_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_all_inputs_as_internal();
bool is_ignored_nchw_relu1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_all_inputs_as_internal,
          is_ignored_nchw_relu1_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_all_tensors_as_inputs();
bool is_ignored_nchw_relu1_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu1_all_tensors_as_inputs,
          is_ignored_nchw_relu1_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu1_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed();
bool is_ignored_nchw_relu1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_relaxed) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed,
          is_ignored_nchw_relu1_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed) {
  const Model model = createTestModel_nchw_relu1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_dynamic_output_shape();
bool is_ignored_nchw_relu1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_dynamic_output_shape,
          is_ignored_nchw_relu1_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_all_inputs_as_internal();
bool is_ignored_nchw_relu1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_all_inputs_as_internal,
          is_ignored_nchw_relu1_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs();
bool is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs,
          is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8();
bool is_ignored_nchw_relu1_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8) {
  Execute(device,
          createTestModel_nchw_relu1_quant8,
          is_ignored_nchw_relu1_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8) {
  const Model model = createTestModel_nchw_relu1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_dynamic_output_shape();
bool is_ignored_nchw_relu1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_dynamic_output_shape,
          is_ignored_nchw_relu1_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_inputs_as_internal();
bool is_ignored_nchw_relu1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_inputs_as_internal,
          is_ignored_nchw_relu1_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_2();
bool is_ignored_nchw_relu1_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_2,
          is_ignored_nchw_relu1_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_2) {
  const Model model = createTestModel_nchw_relu1_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_dynamic_output_shape_2,
          is_ignored_nchw_relu1_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_inputs_as_internal_2();
bool is_ignored_nchw_relu1_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_inputs_as_internal_2,
          is_ignored_nchw_relu1_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu1_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_2,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8();
bool is_ignored_nchw_relu1_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8,
          is_ignored_nchw_relu1_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8) {
  const Model model = createTestModel_nchw_relu1_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_dynamic_output_shape();
bool is_ignored_nchw_relu1_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_dynamic_output_shape,
          is_ignored_nchw_relu1_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal();
bool is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal,
          is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_2();
bool is_ignored_nchw_relu1_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_2,
          is_ignored_nchw_relu1_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_dynamic_output_shape_2,
          is_ignored_nchw_relu1_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16();
bool is_ignored_nchw_relu1_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_float16) {
  Execute(device,
          createTestModel_nchw_relu1_float16,
          is_ignored_nchw_relu1_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16) {
  const Model model = createTestModel_nchw_relu1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_dynamic_output_shape();
bool is_ignored_nchw_relu1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_float16_dynamic_output_shape,
          is_ignored_nchw_relu1_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_all_inputs_as_internal();
bool is_ignored_nchw_relu1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_float16_all_inputs_as_internal,
          is_ignored_nchw_relu1_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_all_tensors_as_inputs();
bool is_ignored_nchw_relu1_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu1_float16_all_tensors_as_inputs,
          is_ignored_nchw_relu1_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu1_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6();
bool is_ignored_nchw_relu6(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6) {
  Execute(device,
          createTestModel_nchw_relu6,
          is_ignored_nchw_relu6,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6) {
  const Model model = createTestModel_nchw_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_dynamic_output_shape();
bool is_ignored_nchw_relu6_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_dynamic_output_shape,
          is_ignored_nchw_relu6_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_all_inputs_as_internal();
bool is_ignored_nchw_relu6_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_all_inputs_as_internal,
          is_ignored_nchw_relu6_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_all_tensors_as_inputs();
bool is_ignored_nchw_relu6_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu6_all_tensors_as_inputs,
          is_ignored_nchw_relu6_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu6_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed();
bool is_ignored_nchw_relu6_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_relaxed) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed,
          is_ignored_nchw_relu6_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed) {
  const Model model = createTestModel_nchw_relu6_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_dynamic_output_shape();
bool is_ignored_nchw_relu6_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_dynamic_output_shape,
          is_ignored_nchw_relu6_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_all_inputs_as_internal();
bool is_ignored_nchw_relu6_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_all_inputs_as_internal,
          is_ignored_nchw_relu6_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs();
bool is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs,
          is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8();
bool is_ignored_nchw_relu6_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8) {
  Execute(device,
          createTestModel_nchw_relu6_quant8,
          is_ignored_nchw_relu6_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8) {
  const Model model = createTestModel_nchw_relu6_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_dynamic_output_shape();
bool is_ignored_nchw_relu6_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_dynamic_output_shape,
          is_ignored_nchw_relu6_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_inputs_as_internal();
bool is_ignored_nchw_relu6_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_inputs_as_internal,
          is_ignored_nchw_relu6_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_2();
bool is_ignored_nchw_relu6_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_2,
          is_ignored_nchw_relu6_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_2) {
  const Model model = createTestModel_nchw_relu6_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_dynamic_output_shape_2,
          is_ignored_nchw_relu6_quant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_inputs_as_internal_2();
bool is_ignored_nchw_relu6_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_inputs_as_internal_2,
          is_ignored_nchw_relu6_quant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu6_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_2,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8();
bool is_ignored_nchw_relu6_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8,
          is_ignored_nchw_relu6_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8) {
  const Model model = createTestModel_nchw_relu6_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_dynamic_output_shape();
bool is_ignored_nchw_relu6_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_dynamic_output_shape,
          is_ignored_nchw_relu6_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal();
bool is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal,
          is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_2();
bool is_ignored_nchw_relu6_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_2,
          is_ignored_nchw_relu6_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_channelQuant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_dynamic_output_shape_2,
          is_ignored_nchw_relu6_channelQuant8_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_2();
bool is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_2,
          is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_2();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_2,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16();
bool is_ignored_nchw_relu6_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_float16) {
  Execute(device,
          createTestModel_nchw_relu6_float16,
          is_ignored_nchw_relu6_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16) {
  const Model model = createTestModel_nchw_relu6_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_dynamic_output_shape();
bool is_ignored_nchw_relu6_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_float16_dynamic_output_shape,
          is_ignored_nchw_relu6_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_all_inputs_as_internal();
bool is_ignored_nchw_relu6_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_float16_all_inputs_as_internal,
          is_ignored_nchw_relu6_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_all_tensors_as_inputs();
bool is_ignored_nchw_relu6_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_nchw_relu6_float16_all_tensors_as_inputs,
          is_ignored_nchw_relu6_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_nchw_relu6_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc();
bool is_ignored_large_nhwc(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc) {
  Execute(device,
          createTestModel_large_nhwc,
          is_ignored_large_nhwc,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc) {
  const Model model = createTestModel_large_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_dynamic_output_shape();
bool is_ignored_large_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_dynamic_output_shape,
          is_ignored_large_nhwc_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_all_inputs_as_internal();
bool is_ignored_large_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_all_inputs_as_internal,
          is_ignored_large_nhwc_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_all_tensors_as_inputs();
bool is_ignored_large_nhwc_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs,
          is_ignored_large_nhwc_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed();
bool is_ignored_large_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_relaxed) {
  Execute(device,
          createTestModel_large_nhwc_relaxed,
          is_ignored_large_nhwc_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed) {
  const Model model = createTestModel_large_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_large_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8();
bool is_ignored_large_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_quant8) {
  Execute(device,
          createTestModel_large_nhwc_quant8,
          is_ignored_large_nhwc_quant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8) {
  const Model model = createTestModel_large_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_inputs_as_internal,
          is_ignored_large_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8();
bool is_ignored_large_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8,
          is_ignored_large_nhwc_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8) {
  const Model model = createTestModel_large_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal();
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal,
          is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16();
bool is_ignored_large_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_float16) {
  Execute(device,
          createTestModel_large_nhwc_float16,
          is_ignored_large_nhwc_float16,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16) {
  const Model model = createTestModel_large_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_dynamic_output_shape,
          is_ignored_large_nhwc_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_all_inputs_as_internal();
bool is_ignored_large_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_inputs_as_internal,
          is_ignored_large_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw();
bool is_ignored_large_nchw(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw) {
  Execute(device,
          createTestModel_large_nchw,
          is_ignored_large_nchw,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw) {
  const Model model = createTestModel_large_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_dynamic_output_shape();
bool is_ignored_large_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_dynamic_output_shape,
          is_ignored_large_nchw_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_all_inputs_as_internal();
bool is_ignored_large_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_all_inputs_as_internal,
          is_ignored_large_nchw_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_all_tensors_as_inputs();
bool is_ignored_large_nchw_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs,
          is_ignored_large_nchw_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed();
bool is_ignored_large_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_relaxed) {
  Execute(device,
          createTestModel_large_nchw_relaxed,
          is_ignored_large_nchw_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed) {
  const Model model = createTestModel_large_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_inputs_as_internal,
          is_ignored_large_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8();
bool is_ignored_large_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_quant8) {
  Execute(device,
          createTestModel_large_nchw_quant8,
          is_ignored_large_nchw_quant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8) {
  const Model model = createTestModel_large_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_dynamic_output_shape,
          is_ignored_large_nchw_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_all_inputs_as_internal();
bool is_ignored_large_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_inputs_as_internal,
          is_ignored_large_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8();
bool is_ignored_large_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_channelQuant8) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8,
          is_ignored_large_nchw_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8) {
  const Model model = createTestModel_large_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_all_inputs_as_internal();
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_inputs_as_internal,
          is_ignored_large_nchw_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16();
bool is_ignored_large_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_float16) {
  Execute(device,
          createTestModel_large_nchw_float16,
          is_ignored_large_nchw_float16,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16) {
  const Model model = createTestModel_large_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_dynamic_output_shape();
bool is_ignored_large_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_dynamic_output_shape,
          is_ignored_large_nchw_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_all_inputs_as_internal();
bool is_ignored_large_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_float16_all_inputs_as_internal,
          is_ignored_large_nchw_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs,
          is_ignored_large_nchw_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc();
bool is_ignored_channel_nhwc(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc) {
  Execute(device,
          createTestModel_channel_nhwc,
          is_ignored_channel_nhwc,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc) {
  const Model model = createTestModel_channel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_dynamic_output_shape();
bool is_ignored_channel_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_dynamic_output_shape,
          is_ignored_channel_nhwc_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_all_inputs_as_internal();
bool is_ignored_channel_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_all_inputs_as_internal,
          is_ignored_channel_nhwc_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_all_tensors_as_inputs();
bool is_ignored_channel_nhwc_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nhwc_all_tensors_as_inputs,
          is_ignored_channel_nhwc_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nhwc_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed();
bool is_ignored_channel_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_relaxed) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed,
          is_ignored_channel_nhwc_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed) {
  const Model model = createTestModel_channel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_channel_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_dynamic_output_shape,
          is_ignored_channel_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_channel_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_channel_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs();
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs,
          is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8();
bool is_ignored_channel_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_quant8) {
  Execute(device,
          createTestModel_channel_nhwc_quant8,
          is_ignored_channel_nhwc_quant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8) {
  const Model model = createTestModel_channel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_dynamic_output_shape();
bool is_ignored_channel_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_dynamic_output_shape,
          is_ignored_channel_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_channel_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_all_inputs_as_internal,
          is_ignored_channel_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_all_tensors_as_inputs();
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_all_tensors_as_inputs,
          is_ignored_channel_nhwc_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nhwc_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8();
bool is_ignored_channel_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8,
          is_ignored_channel_nhwc_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8) {
  const Model model = createTestModel_channel_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_dynamic_output_shape();
bool is_ignored_channel_nhwc_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_dynamic_output_shape,
          is_ignored_channel_nhwc_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_all_inputs_as_internal();
bool is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_all_inputs_as_internal,
          is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs();
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs,
          is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16();
bool is_ignored_channel_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_float16) {
  Execute(device,
          createTestModel_channel_nhwc_float16,
          is_ignored_channel_nhwc_float16,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16) {
  const Model model = createTestModel_channel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_dynamic_output_shape();
bool is_ignored_channel_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_float16_dynamic_output_shape,
          is_ignored_channel_nhwc_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_all_inputs_as_internal();
bool is_ignored_channel_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_float16_all_inputs_as_internal,
          is_ignored_channel_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_all_tensors_as_inputs();
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nhwc_float16_all_tensors_as_inputs,
          is_ignored_channel_nhwc_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nhwc_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw();
bool is_ignored_channel_nchw(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw) {
  Execute(device,
          createTestModel_channel_nchw,
          is_ignored_channel_nchw,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw) {
  const Model model = createTestModel_channel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_dynamic_output_shape();
bool is_ignored_channel_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_dynamic_output_shape,
          is_ignored_channel_nchw_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_all_inputs_as_internal();
bool is_ignored_channel_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_all_inputs_as_internal,
          is_ignored_channel_nchw_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_all_tensors_as_inputs();
bool is_ignored_channel_nchw_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nchw_all_tensors_as_inputs,
          is_ignored_channel_nchw_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nchw_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nchw_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nchw_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed();
bool is_ignored_channel_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_relaxed) {
  Execute(device,
          createTestModel_channel_nchw_relaxed,
          is_ignored_channel_nchw_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed) {
  const Model model = createTestModel_channel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_dynamic_output_shape();
bool is_ignored_channel_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_dynamic_output_shape,
          is_ignored_channel_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_channel_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_all_inputs_as_internal,
          is_ignored_channel_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_all_tensors_as_inputs();
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_all_tensors_as_inputs,
          is_ignored_channel_nchw_relaxed_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nchw_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8();
bool is_ignored_channel_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_quant8) {
  Execute(device,
          createTestModel_channel_nchw_quant8,
          is_ignored_channel_nchw_quant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8) {
  const Model model = createTestModel_channel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_dynamic_output_shape();
bool is_ignored_channel_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_quant8_dynamic_output_shape,
          is_ignored_channel_nchw_quant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_all_inputs_as_internal();
bool is_ignored_channel_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_quant8_all_inputs_as_internal,
          is_ignored_channel_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_all_tensors_as_inputs();
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nchw_quant8_all_tensors_as_inputs,
          is_ignored_channel_nchw_quant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nchw_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8();
bool is_ignored_channel_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_channelQuant8) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8,
          is_ignored_channel_nchw_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8) {
  const Model model = createTestModel_channel_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_dynamic_output_shape();
bool is_ignored_channel_nchw_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_dynamic_output_shape,
          is_ignored_channel_nchw_channelQuant8_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_all_inputs_as_internal();
bool is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_all_inputs_as_internal,
          is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs();
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs,
          is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16();
bool is_ignored_channel_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_float16) {
  Execute(device,
          createTestModel_channel_nchw_float16,
          is_ignored_channel_nchw_float16,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16) {
  const Model model = createTestModel_channel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_dynamic_output_shape();
bool is_ignored_channel_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_float16_dynamic_output_shape,
          is_ignored_channel_nchw_float16_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_all_inputs_as_internal();
bool is_ignored_channel_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_float16_all_inputs_as_internal,
          is_ignored_channel_nchw_float16_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_all_tensors_as_inputs();
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channel_nchw_float16_all_tensors_as_inputs,
          is_ignored_channel_nchw_float16_all_tensors_as_inputs,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_channel_nchw_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

