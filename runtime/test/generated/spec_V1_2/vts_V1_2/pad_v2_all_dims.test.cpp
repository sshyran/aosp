// Generated from pad_v2_all_dims.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::pad_v2_all_dims::get_examples());
}

TEST_F(ValidationTest, pad_v2_all_dims) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::pad_v2_all_dims::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, pad_v2_all_dims_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, pad_v2_all_dims_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, pad_v2_all_dims_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::pad_v2_all_dims::get_examples_float16());
}

TEST_F(ValidationTest, pad_v2_all_dims_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_all_tensors_as_inputs();
bool is_ignored_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs,
          is_ignored_float16_all_tensors_as_inputs,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed());
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_all_tensors_as_inputs();
bool is_ignored_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs,
          is_ignored_relaxed_all_tensors_as_inputs,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

namespace generated_tests::pad_v2_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pad_v2_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims {

Model createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_v2_all_dims_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_v2_all_dims::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_v2_all_dims

