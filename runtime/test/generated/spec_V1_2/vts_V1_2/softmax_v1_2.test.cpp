// Generated from softmax_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::softmax_v1_2::get_examples());
}

TEST_F(ValidationTest, softmax_v1_2) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0();
bool is_ignored_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim1_axis0) {
  Execute(device,
          createTestModel_dim1_axis0,
          is_ignored_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0) {
  const Model model = createTestModel_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_dynamic_output_shape();
bool is_ignored_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_dynamic_output_shape,
          is_ignored_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_all_inputs_as_internal();
bool is_ignored_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_all_inputs_as_internal,
          is_ignored_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2();
bool is_ignored_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim3_axis2) {
  Execute(device,
          createTestModel_dim3_axis2,
          is_ignored_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2) {
  const Model model = createTestModel_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_dynamic_output_shape();
bool is_ignored_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_dynamic_output_shape,
          is_ignored_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_all_inputs_as_internal();
bool is_ignored_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_all_inputs_as_internal,
          is_ignored_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::softmax_v1_2::get_examples_relaxed());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0();
bool is_ignored_relaxed_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim1_axis0) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0,
          is_ignored_relaxed_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0) {
  const Model model = createTestModel_relaxed_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2();
bool is_ignored_relaxed_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim3_axis2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2,
          is_ignored_relaxed_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2) {
  const Model model = createTestModel_relaxed_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::softmax_v1_2::get_examples_float16());
}

TEST_F(ValidationTest, softmax_v1_2_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0();
bool is_ignored_float16_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim1_axis0) {
  Execute(device,
          createTestModel_float16_dim1_axis0,
          is_ignored_float16_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0) {
  const Model model = createTestModel_float16_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_dynamic_output_shape();
bool is_ignored_float16_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dim1_axis0_dynamic_output_shape,
          is_ignored_float16_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_float16_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_all_inputs_as_internal();
bool is_ignored_float16_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_dim1_axis0_all_inputs_as_internal,
          is_ignored_float16_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_float16_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2();
bool is_ignored_float16_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim3_axis2) {
  Execute(device,
          createTestModel_float16_dim3_axis2,
          is_ignored_float16_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2) {
  const Model model = createTestModel_float16_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_dynamic_output_shape();
bool is_ignored_float16_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dim3_axis2_dynamic_output_shape,
          is_ignored_float16_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_float16_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_all_inputs_as_internal();
bool is_ignored_float16_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_dim3_axis2_all_inputs_as_internal,
          is_ignored_float16_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_float16_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::softmax_v1_2::get_examples_quant8());
}

TEST_F(ValidationTest, softmax_v1_2_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_all_inputs_as_internal();
bool is_ignored_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal,
          is_ignored_quant8_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0();
bool is_ignored_quant8_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim1_axis0) {
  Execute(device,
          createTestModel_quant8_dim1_axis0,
          is_ignored_quant8_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0) {
  const Model model = createTestModel_quant8_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_dynamic_output_shape();
bool is_ignored_quant8_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_dynamic_output_shape,
          is_ignored_quant8_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_all_inputs_as_internal();
bool is_ignored_quant8_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_all_inputs_as_internal,
          is_ignored_quant8_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2();
bool is_ignored_quant8_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim3_axis2) {
  Execute(device,
          createTestModel_quant8_dim3_axis2,
          is_ignored_quant8_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2) {
  const Model model = createTestModel_quant8_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_dynamic_output_shape();
bool is_ignored_quant8_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_dynamic_output_shape,
          is_ignored_quant8_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_all_inputs_as_internal();
bool is_ignored_quant8_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_all_inputs_as_internal,
          is_ignored_quant8_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::softmax_v1_2::get_examples_2());
}

TEST_F(ValidationTest, softmax_v1_2_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_2();
bool is_ignored_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim1_axis0_2) {
  Execute(device,
          createTestModel_dim1_axis0_2,
          is_ignored_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_2) {
  const Model model = createTestModel_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dim1_axis0_dynamic_output_shape_2,
          is_ignored_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_2();
bool is_ignored_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim3_axis2_2) {
  Execute(device,
          createTestModel_dim3_axis2_2,
          is_ignored_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_2) {
  const Model model = createTestModel_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dim3_axis2_dynamic_output_shape_2,
          is_ignored_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_2();
bool is_ignored_relaxed_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim1_axis0_2) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_2,
          is_ignored_relaxed_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_2) {
  const Model model = createTestModel_relaxed_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_relaxed_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_dynamic_output_shape_2,
          is_ignored_relaxed_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_2();
bool is_ignored_relaxed_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim3_axis2_2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_2,
          is_ignored_relaxed_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_2) {
  const Model model = createTestModel_relaxed_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_relaxed_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_dynamic_output_shape_2,
          is_ignored_relaxed_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_2();
bool is_ignored_float16_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim1_axis0_2) {
  Execute(device,
          createTestModel_float16_dim1_axis0_2,
          is_ignored_float16_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_2) {
  const Model model = createTestModel_float16_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_float16_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dim1_axis0_dynamic_output_shape_2,
          is_ignored_float16_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_float16_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_float16_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_float16_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_float16_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_2();
bool is_ignored_float16_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim3_axis2_2) {
  Execute(device,
          createTestModel_float16_dim3_axis2_2,
          is_ignored_float16_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_2) {
  const Model model = createTestModel_float16_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_float16_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dim3_axis2_dynamic_output_shape_2,
          is_ignored_float16_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_float16_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_float16_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_float16_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_float16_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dynamic_output_shape_2();
bool is_ignored_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_2,
          is_ignored_quant8_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_all_inputs_as_internal_2();
bool is_ignored_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_2,
          is_ignored_quant8_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_2();
bool is_ignored_quant8_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim1_axis0_2) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_2,
          is_ignored_quant8_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_2) {
  const Model model = createTestModel_quant8_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_quant8_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_dynamic_output_shape_2,
          is_ignored_quant8_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_quant8_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_quant8_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_2();
bool is_ignored_quant8_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim3_axis2_2) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_2,
          is_ignored_quant8_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_2) {
  const Model model = createTestModel_quant8_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_quant8_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_dynamic_output_shape_2,
          is_ignored_quant8_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_quant8_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_quant8_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0();
bool is_ignored_axis_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0) {
  Execute(device,
          createTestModel_axis_dim4_axis0,
          is_ignored_axis_dim4_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0) {
  const Model model = createTestModel_axis_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_dynamic_output_shape();
bool is_ignored_axis_dim4_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis0_dynamic_output_shape,
          is_ignored_axis_dim4_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis0_all_inputs_as_internal,
          is_ignored_axis_dim4_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg();
bool is_ignored_axis_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_neg) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg,
          is_ignored_axis_dim4_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg) {
  const Model model = createTestModel_axis_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_dim4_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_dynamic_output_shape,
          is_ignored_axis_dim4_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1();
bool is_ignored_axis_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1) {
  Execute(device,
          createTestModel_axis_dim4_axis1,
          is_ignored_axis_dim4_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1) {
  const Model model = createTestModel_axis_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_dynamic_output_shape();
bool is_ignored_axis_dim4_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis1_dynamic_output_shape,
          is_ignored_axis_dim4_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis1_all_inputs_as_internal,
          is_ignored_axis_dim4_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg();
bool is_ignored_axis_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_neg) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg,
          is_ignored_axis_dim4_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg) {
  const Model model = createTestModel_axis_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_dim4_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_dynamic_output_shape,
          is_ignored_axis_dim4_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2();
bool is_ignored_axis_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2) {
  Execute(device,
          createTestModel_axis_dim4_axis2,
          is_ignored_axis_dim4_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2) {
  const Model model = createTestModel_axis_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_dynamic_output_shape();
bool is_ignored_axis_dim4_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis2_dynamic_output_shape,
          is_ignored_axis_dim4_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis2_all_inputs_as_internal,
          is_ignored_axis_dim4_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg();
bool is_ignored_axis_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_neg) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg,
          is_ignored_axis_dim4_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg) {
  const Model model = createTestModel_axis_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_dim4_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_dynamic_output_shape,
          is_ignored_axis_dim4_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3();
bool is_ignored_axis_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3) {
  Execute(device,
          createTestModel_axis_dim4_axis3,
          is_ignored_axis_dim4_axis3,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3) {
  const Model model = createTestModel_axis_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_dynamic_output_shape();
bool is_ignored_axis_dim4_axis3_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis3_dynamic_output_shape,
          is_ignored_axis_dim4_axis3_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis3_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis3_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis3_all_inputs_as_internal,
          is_ignored_axis_dim4_axis3_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis3_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg();
bool is_ignored_axis_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_neg) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg,
          is_ignored_axis_dim4_axis3_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg) {
  const Model model = createTestModel_axis_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_dynamic_output_shape();
bool is_ignored_axis_dim4_axis3_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_dynamic_output_shape,
          is_ignored_axis_dim4_axis3_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis3_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal();
bool is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal,
          is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0();
bool is_ignored_axis_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0) {
  Execute(device,
          createTestModel_axis_dim3_axis0,
          is_ignored_axis_dim3_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0) {
  const Model model = createTestModel_axis_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_dynamic_output_shape();
bool is_ignored_axis_dim3_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis0_dynamic_output_shape,
          is_ignored_axis_dim3_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_all_inputs_as_internal();
bool is_ignored_axis_dim3_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim3_axis0_all_inputs_as_internal,
          is_ignored_axis_dim3_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim3_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg();
bool is_ignored_axis_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_neg) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg,
          is_ignored_axis_dim3_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg) {
  const Model model = createTestModel_axis_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_dim3_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_dynamic_output_shape,
          is_ignored_axis_dim3_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1();
bool is_ignored_axis_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1) {
  Execute(device,
          createTestModel_axis_dim3_axis1,
          is_ignored_axis_dim3_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1) {
  const Model model = createTestModel_axis_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_dynamic_output_shape();
bool is_ignored_axis_dim3_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis1_dynamic_output_shape,
          is_ignored_axis_dim3_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_all_inputs_as_internal();
bool is_ignored_axis_dim3_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim3_axis1_all_inputs_as_internal,
          is_ignored_axis_dim3_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim3_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg();
bool is_ignored_axis_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_neg) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg,
          is_ignored_axis_dim3_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg) {
  const Model model = createTestModel_axis_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_dim3_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_dynamic_output_shape,
          is_ignored_axis_dim3_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2();
bool is_ignored_axis_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2) {
  Execute(device,
          createTestModel_axis_dim3_axis2,
          is_ignored_axis_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2) {
  const Model model = createTestModel_axis_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_dynamic_output_shape();
bool is_ignored_axis_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis2_dynamic_output_shape,
          is_ignored_axis_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_all_inputs_as_internal();
bool is_ignored_axis_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim3_axis2_all_inputs_as_internal,
          is_ignored_axis_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg();
bool is_ignored_axis_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_neg) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg,
          is_ignored_axis_dim3_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg) {
  const Model model = createTestModel_axis_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_dim3_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_dynamic_output_shape,
          is_ignored_axis_dim3_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0();
bool is_ignored_axis_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0) {
  Execute(device,
          createTestModel_axis_dim2_axis0,
          is_ignored_axis_dim2_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0) {
  const Model model = createTestModel_axis_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_dynamic_output_shape();
bool is_ignored_axis_dim2_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis0_dynamic_output_shape,
          is_ignored_axis_dim2_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_all_inputs_as_internal();
bool is_ignored_axis_dim2_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim2_axis0_all_inputs_as_internal,
          is_ignored_axis_dim2_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim2_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg();
bool is_ignored_axis_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_neg) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg,
          is_ignored_axis_dim2_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg) {
  const Model model = createTestModel_axis_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_dim2_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_dynamic_output_shape,
          is_ignored_axis_dim2_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1();
bool is_ignored_axis_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1) {
  Execute(device,
          createTestModel_axis_dim2_axis1,
          is_ignored_axis_dim2_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1) {
  const Model model = createTestModel_axis_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_dynamic_output_shape();
bool is_ignored_axis_dim2_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis1_dynamic_output_shape,
          is_ignored_axis_dim2_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_all_inputs_as_internal();
bool is_ignored_axis_dim2_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim2_axis1_all_inputs_as_internal,
          is_ignored_axis_dim2_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim2_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg();
bool is_ignored_axis_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_neg) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg,
          is_ignored_axis_dim2_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg) {
  const Model model = createTestModel_axis_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_dim2_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_dynamic_output_shape,
          is_ignored_axis_dim2_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0();
bool is_ignored_axis_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0) {
  Execute(device,
          createTestModel_axis_dim1_axis0,
          is_ignored_axis_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0) {
  const Model model = createTestModel_axis_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_dynamic_output_shape();
bool is_ignored_axis_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim1_axis0_dynamic_output_shape,
          is_ignored_axis_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_all_inputs_as_internal();
bool is_ignored_axis_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim1_axis0_all_inputs_as_internal,
          is_ignored_axis_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg();
bool is_ignored_axis_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_neg) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg,
          is_ignored_axis_dim1_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg) {
  const Model model = createTestModel_axis_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_dim1_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_dynamic_output_shape,
          is_ignored_axis_dim1_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim1_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0();
bool is_ignored_axis_relaxed_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0,
          is_ignored_axis_relaxed_dim4_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg();
bool is_ignored_axis_relaxed_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg,
          is_ignored_axis_relaxed_dim4_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1();
bool is_ignored_axis_relaxed_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1,
          is_ignored_axis_relaxed_dim4_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg();
bool is_ignored_axis_relaxed_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg,
          is_ignored_axis_relaxed_dim4_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2();
bool is_ignored_axis_relaxed_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2,
          is_ignored_axis_relaxed_dim4_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg();
bool is_ignored_axis_relaxed_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg,
          is_ignored_axis_relaxed_dim4_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3();
bool is_ignored_axis_relaxed_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3,
          is_ignored_axis_relaxed_dim4_axis3,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis3_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis3_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg();
bool is_ignored_axis_relaxed_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg,
          is_ignored_axis_relaxed_dim4_axis3_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis3_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis3_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0();
bool is_ignored_axis_relaxed_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0,
          is_ignored_axis_relaxed_dim3_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg();
bool is_ignored_axis_relaxed_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg,
          is_ignored_axis_relaxed_dim3_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1();
bool is_ignored_axis_relaxed_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1,
          is_ignored_axis_relaxed_dim3_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg();
bool is_ignored_axis_relaxed_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg,
          is_ignored_axis_relaxed_dim3_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2();
bool is_ignored_axis_relaxed_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2,
          is_ignored_axis_relaxed_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg();
bool is_ignored_axis_relaxed_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg,
          is_ignored_axis_relaxed_dim3_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0();
bool is_ignored_axis_relaxed_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0,
          is_ignored_axis_relaxed_dim2_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg();
bool is_ignored_axis_relaxed_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg,
          is_ignored_axis_relaxed_dim2_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1();
bool is_ignored_axis_relaxed_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1,
          is_ignored_axis_relaxed_dim2_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg();
bool is_ignored_axis_relaxed_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg,
          is_ignored_axis_relaxed_dim2_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0();
bool is_ignored_axis_relaxed_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0,
          is_ignored_axis_relaxed_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_dynamic_output_shape,
          is_ignored_axis_relaxed_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg();
bool is_ignored_axis_relaxed_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg,
          is_ignored_axis_relaxed_dim1_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim1_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_dynamic_output_shape,
          is_ignored_axis_relaxed_dim1_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0();
bool is_ignored_axis_float16_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0,
          is_ignored_axis_float16_dim4_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0) {
  const Model model = createTestModel_axis_float16_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg();
bool is_ignored_axis_float16_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_neg) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg,
          is_ignored_axis_float16_dim4_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1();
bool is_ignored_axis_float16_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1,
          is_ignored_axis_float16_dim4_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1) {
  const Model model = createTestModel_axis_float16_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg();
bool is_ignored_axis_float16_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_neg) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg,
          is_ignored_axis_float16_dim4_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2();
bool is_ignored_axis_float16_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2,
          is_ignored_axis_float16_dim4_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2) {
  const Model model = createTestModel_axis_float16_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg();
bool is_ignored_axis_float16_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_neg) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg,
          is_ignored_axis_float16_dim4_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3();
bool is_ignored_axis_float16_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3,
          is_ignored_axis_float16_dim4_axis3,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3) {
  const Model model = createTestModel_axis_float16_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis3_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis3_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis3_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg();
bool is_ignored_axis_float16_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_neg) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg,
          is_ignored_axis_float16_dim4_axis3_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis3_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis3_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0();
bool is_ignored_axis_float16_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0,
          is_ignored_axis_float16_dim3_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0) {
  const Model model = createTestModel_axis_float16_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal();
bool is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal,
          is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg();
bool is_ignored_axis_float16_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_neg) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg,
          is_ignored_axis_float16_dim3_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1();
bool is_ignored_axis_float16_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1,
          is_ignored_axis_float16_dim3_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1) {
  const Model model = createTestModel_axis_float16_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal();
bool is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal,
          is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg();
bool is_ignored_axis_float16_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_neg) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg,
          is_ignored_axis_float16_dim3_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2();
bool is_ignored_axis_float16_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2,
          is_ignored_axis_float16_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2) {
  const Model model = createTestModel_axis_float16_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal();
bool is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal,
          is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg();
bool is_ignored_axis_float16_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_neg) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg,
          is_ignored_axis_float16_dim3_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0();
bool is_ignored_axis_float16_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0,
          is_ignored_axis_float16_dim2_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0) {
  const Model model = createTestModel_axis_float16_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal();
bool is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal,
          is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg();
bool is_ignored_axis_float16_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_neg) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg,
          is_ignored_axis_float16_dim2_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1();
bool is_ignored_axis_float16_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1,
          is_ignored_axis_float16_dim2_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1) {
  const Model model = createTestModel_axis_float16_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal();
bool is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal,
          is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg();
bool is_ignored_axis_float16_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_neg) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg,
          is_ignored_axis_float16_dim2_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0();
bool is_ignored_axis_float16_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0,
          is_ignored_axis_float16_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0) {
  const Model model = createTestModel_axis_float16_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_dynamic_output_shape();
bool is_ignored_axis_float16_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_dynamic_output_shape,
          is_ignored_axis_float16_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal();
bool is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal,
          is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg();
bool is_ignored_axis_float16_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_neg) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg,
          is_ignored_axis_float16_dim1_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_float16_dim1_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_dynamic_output_shape,
          is_ignored_axis_float16_dim1_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0();
bool is_ignored_axis_quant8_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0,
          is_ignored_axis_quant8_dim4_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0) {
  const Model model = createTestModel_axis_quant8_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg();
bool is_ignored_axis_quant8_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg,
          is_ignored_axis_quant8_dim4_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1();
bool is_ignored_axis_quant8_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1,
          is_ignored_axis_quant8_dim4_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1) {
  const Model model = createTestModel_axis_quant8_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg();
bool is_ignored_axis_quant8_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg,
          is_ignored_axis_quant8_dim4_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2();
bool is_ignored_axis_quant8_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2,
          is_ignored_axis_quant8_dim4_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg();
bool is_ignored_axis_quant8_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg,
          is_ignored_axis_quant8_dim4_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3();
bool is_ignored_axis_quant8_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3,
          is_ignored_axis_quant8_dim4_axis3,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3) {
  const Model model = createTestModel_axis_quant8_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis3_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis3_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg();
bool is_ignored_axis_quant8_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg,
          is_ignored_axis_quant8_dim4_axis3_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis3_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis3_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0();
bool is_ignored_axis_quant8_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0,
          is_ignored_axis_quant8_dim3_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0) {
  const Model model = createTestModel_axis_quant8_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal,
          is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg();
bool is_ignored_axis_quant8_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg,
          is_ignored_axis_quant8_dim3_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1();
bool is_ignored_axis_quant8_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1,
          is_ignored_axis_quant8_dim3_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1) {
  const Model model = createTestModel_axis_quant8_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal,
          is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg();
bool is_ignored_axis_quant8_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg,
          is_ignored_axis_quant8_dim3_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2();
bool is_ignored_axis_quant8_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2,
          is_ignored_axis_quant8_dim3_axis2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis2_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal,
          is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg();
bool is_ignored_axis_quant8_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg,
          is_ignored_axis_quant8_dim3_axis2_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis2_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0();
bool is_ignored_axis_quant8_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0,
          is_ignored_axis_quant8_dim2_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0) {
  const Model model = createTestModel_axis_quant8_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal,
          is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg();
bool is_ignored_axis_quant8_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg,
          is_ignored_axis_quant8_dim2_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1();
bool is_ignored_axis_quant8_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1,
          is_ignored_axis_quant8_dim2_axis1,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1) {
  const Model model = createTestModel_axis_quant8_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis1_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal,
          is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg();
bool is_ignored_axis_quant8_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg,
          is_ignored_axis_quant8_dim2_axis1_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis1_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0();
bool is_ignored_axis_quant8_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0,
          is_ignored_axis_quant8_dim1_axis0,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0) {
  const Model model = createTestModel_axis_quant8_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_dynamic_output_shape();
bool is_ignored_axis_quant8_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_dynamic_output_shape,
          is_ignored_axis_quant8_dim1_axis0_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal,
          is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg();
bool is_ignored_axis_quant8_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_neg) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg,
          is_ignored_axis_quant8_dim1_axis0_neg,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_dynamic_output_shape();
bool is_ignored_axis_quant8_dim1_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_dynamic_output_shape,
          is_ignored_axis_quant8_dim1_axis0_neg_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal();
bool is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal,
          is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_2();
bool is_ignored_axis_dim4_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_2,
          is_ignored_axis_dim4_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_2) {
  const Model model = createTestModel_axis_dim4_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_2();
bool is_ignored_axis_dim4_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_2,
          is_ignored_axis_dim4_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_2) {
  const Model model = createTestModel_axis_dim4_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_2();
bool is_ignored_axis_dim4_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_2,
          is_ignored_axis_dim4_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_2) {
  const Model model = createTestModel_axis_dim4_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_2();
bool is_ignored_axis_dim4_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_2,
          is_ignored_axis_dim4_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_2) {
  const Model model = createTestModel_axis_dim4_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_2();
bool is_ignored_axis_dim4_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_2,
          is_ignored_axis_dim4_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_2) {
  const Model model = createTestModel_axis_dim4_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_2();
bool is_ignored_axis_dim4_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_2,
          is_ignored_axis_dim4_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_2) {
  const Model model = createTestModel_axis_dim4_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_2();
bool is_ignored_axis_dim4_axis3_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_2,
          is_ignored_axis_dim4_axis3_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_2) {
  const Model model = createTestModel_axis_dim4_axis3_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis3_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis3_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis3_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis3_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis3_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis3_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_2();
bool is_ignored_axis_dim4_axis3_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_neg_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_2,
          is_ignored_axis_dim4_axis3_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_2) {
  const Model model = createTestModel_axis_dim4_axis3_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis3_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis3_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis3_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_2();
bool is_ignored_axis_dim3_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_2,
          is_ignored_axis_dim3_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_2) {
  const Model model = createTestModel_axis_dim3_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_dim3_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_all_inputs_as_internal_2,
          is_ignored_axis_dim3_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim3_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_2();
bool is_ignored_axis_dim3_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_2,
          is_ignored_axis_dim3_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_2) {
  const Model model = createTestModel_axis_dim3_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_2();
bool is_ignored_axis_dim3_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_2,
          is_ignored_axis_dim3_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_2) {
  const Model model = createTestModel_axis_dim3_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_dim3_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_all_inputs_as_internal_2,
          is_ignored_axis_dim3_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim3_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_2();
bool is_ignored_axis_dim3_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_2,
          is_ignored_axis_dim3_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_2) {
  const Model model = createTestModel_axis_dim3_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_2();
bool is_ignored_axis_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_2,
          is_ignored_axis_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_2) {
  const Model model = createTestModel_axis_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_axis_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_2();
bool is_ignored_axis_dim3_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_2,
          is_ignored_axis_dim3_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_2) {
  const Model model = createTestModel_axis_dim3_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_2();
bool is_ignored_axis_dim2_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_2,
          is_ignored_axis_dim2_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_2) {
  const Model model = createTestModel_axis_dim2_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_dim2_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_all_inputs_as_internal_2,
          is_ignored_axis_dim2_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim2_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_2();
bool is_ignored_axis_dim2_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_2,
          is_ignored_axis_dim2_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_2) {
  const Model model = createTestModel_axis_dim2_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_2();
bool is_ignored_axis_dim2_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_2,
          is_ignored_axis_dim2_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_2) {
  const Model model = createTestModel_axis_dim2_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_dim2_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_all_inputs_as_internal_2,
          is_ignored_axis_dim2_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim2_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_2();
bool is_ignored_axis_dim2_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_2,
          is_ignored_axis_dim2_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_2) {
  const Model model = createTestModel_axis_dim2_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_2();
bool is_ignored_axis_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_2,
          is_ignored_axis_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_2) {
  const Model model = createTestModel_axis_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_axis_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_dynamic_output_shape_2,
          is_ignored_axis_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_axis_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_2();
bool is_ignored_axis_dim1_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_2,
          is_ignored_axis_dim1_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_2) {
  const Model model = createTestModel_axis_dim1_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_dim1_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_dim1_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim1_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_2();
bool is_ignored_axis_relaxed_dim4_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_2,
          is_ignored_axis_relaxed_dim4_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_2();
bool is_ignored_axis_relaxed_dim4_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_2,
          is_ignored_axis_relaxed_dim4_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_2();
bool is_ignored_axis_relaxed_dim4_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_2,
          is_ignored_axis_relaxed_dim4_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_2();
bool is_ignored_axis_relaxed_dim4_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_2,
          is_ignored_axis_relaxed_dim4_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_2();
bool is_ignored_axis_relaxed_dim4_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_2,
          is_ignored_axis_relaxed_dim4_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_2();
bool is_ignored_axis_relaxed_dim4_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_2,
          is_ignored_axis_relaxed_dim4_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_2();
bool is_ignored_axis_relaxed_dim4_axis3_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_2,
          is_ignored_axis_relaxed_dim4_axis3_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis3_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis3_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_2();
bool is_ignored_axis_relaxed_dim4_axis3_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_2,
          is_ignored_axis_relaxed_dim4_axis3_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_2();
bool is_ignored_axis_relaxed_dim3_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_2,
          is_ignored_axis_relaxed_dim3_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_2();
bool is_ignored_axis_relaxed_dim3_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_2,
          is_ignored_axis_relaxed_dim3_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_2();
bool is_ignored_axis_relaxed_dim3_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_2,
          is_ignored_axis_relaxed_dim3_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_2();
bool is_ignored_axis_relaxed_dim3_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_2,
          is_ignored_axis_relaxed_dim3_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_2();
bool is_ignored_axis_relaxed_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_2,
          is_ignored_axis_relaxed_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_2();
bool is_ignored_axis_relaxed_dim3_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_2,
          is_ignored_axis_relaxed_dim3_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_2();
bool is_ignored_axis_relaxed_dim2_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_2,
          is_ignored_axis_relaxed_dim2_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_2();
bool is_ignored_axis_relaxed_dim2_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_2,
          is_ignored_axis_relaxed_dim2_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_2();
bool is_ignored_axis_relaxed_dim2_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_2,
          is_ignored_axis_relaxed_dim2_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_2();
bool is_ignored_axis_relaxed_dim2_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_2,
          is_ignored_axis_relaxed_dim2_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_2();
bool is_ignored_axis_relaxed_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_2,
          is_ignored_axis_relaxed_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_2();
bool is_ignored_axis_relaxed_dim1_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_2,
          is_ignored_axis_relaxed_dim1_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_2();
bool is_ignored_axis_float16_dim4_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_2,
          is_ignored_axis_float16_dim4_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_2();
bool is_ignored_axis_float16_dim4_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_2,
          is_ignored_axis_float16_dim4_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_2();
bool is_ignored_axis_float16_dim4_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_2,
          is_ignored_axis_float16_dim4_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_2();
bool is_ignored_axis_float16_dim4_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_2,
          is_ignored_axis_float16_dim4_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_2();
bool is_ignored_axis_float16_dim4_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_2,
          is_ignored_axis_float16_dim4_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_2();
bool is_ignored_axis_float16_dim4_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_2,
          is_ignored_axis_float16_dim4_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_2();
bool is_ignored_axis_float16_dim4_axis3_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_2,
          is_ignored_axis_float16_dim4_axis3_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis3_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis3_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_2();
bool is_ignored_axis_float16_dim4_axis3_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_2,
          is_ignored_axis_float16_dim4_axis3_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis3_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis3_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_2();
bool is_ignored_axis_float16_dim3_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_2,
          is_ignored_axis_float16_dim3_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_2();
bool is_ignored_axis_float16_dim3_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_2,
          is_ignored_axis_float16_dim3_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_2();
bool is_ignored_axis_float16_dim3_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_2,
          is_ignored_axis_float16_dim3_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_2();
bool is_ignored_axis_float16_dim3_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_2,
          is_ignored_axis_float16_dim3_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_2();
bool is_ignored_axis_float16_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_2,
          is_ignored_axis_float16_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_2();
bool is_ignored_axis_float16_dim3_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_2,
          is_ignored_axis_float16_dim3_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_2();
bool is_ignored_axis_float16_dim2_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_2,
          is_ignored_axis_float16_dim2_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_2();
bool is_ignored_axis_float16_dim2_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_2,
          is_ignored_axis_float16_dim2_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_2();
bool is_ignored_axis_float16_dim2_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_2,
          is_ignored_axis_float16_dim2_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_2();
bool is_ignored_axis_float16_dim2_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_2,
          is_ignored_axis_float16_dim2_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_2();
bool is_ignored_axis_float16_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_2,
          is_ignored_axis_float16_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_dynamic_output_shape_2,
          is_ignored_axis_float16_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_2();
bool is_ignored_axis_float16_dim1_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_2,
          is_ignored_axis_float16_dim1_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim1_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_float16_dim1_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_2();
bool is_ignored_axis_quant8_dim4_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_2,
          is_ignored_axis_quant8_dim4_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_2();
bool is_ignored_axis_quant8_dim4_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_2,
          is_ignored_axis_quant8_dim4_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_2();
bool is_ignored_axis_quant8_dim4_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_2,
          is_ignored_axis_quant8_dim4_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_2();
bool is_ignored_axis_quant8_dim4_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_2,
          is_ignored_axis_quant8_dim4_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_2();
bool is_ignored_axis_quant8_dim4_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_2,
          is_ignored_axis_quant8_dim4_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_2();
bool is_ignored_axis_quant8_dim4_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_2,
          is_ignored_axis_quant8_dim4_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_2();
bool is_ignored_axis_quant8_dim4_axis3_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_2,
          is_ignored_axis_quant8_dim4_axis3_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis3_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis3_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_2();
bool is_ignored_axis_quant8_dim4_axis3_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_2,
          is_ignored_axis_quant8_dim4_axis3_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_2();
bool is_ignored_axis_quant8_dim3_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_2,
          is_ignored_axis_quant8_dim3_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_2();
bool is_ignored_axis_quant8_dim3_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_2,
          is_ignored_axis_quant8_dim3_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_2();
bool is_ignored_axis_quant8_dim3_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_2,
          is_ignored_axis_quant8_dim3_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_2();
bool is_ignored_axis_quant8_dim3_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_2,
          is_ignored_axis_quant8_dim3_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_2();
bool is_ignored_axis_quant8_dim3_axis2_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_2,
          is_ignored_axis_quant8_dim3_axis2_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis2_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis2_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_2();
bool is_ignored_axis_quant8_dim3_axis2_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_2,
          is_ignored_axis_quant8_dim3_axis2_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_2();
bool is_ignored_axis_quant8_dim2_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_2,
          is_ignored_axis_quant8_dim2_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_2();
bool is_ignored_axis_quant8_dim2_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_2,
          is_ignored_axis_quant8_dim2_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_2();
bool is_ignored_axis_quant8_dim2_axis1_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_2,
          is_ignored_axis_quant8_dim2_axis1_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis1_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis1_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_2();
bool is_ignored_axis_quant8_dim2_axis1_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_2,
          is_ignored_axis_quant8_dim2_axis1_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_2();
bool is_ignored_axis_quant8_dim1_axis0_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_2,
          is_ignored_axis_quant8_dim1_axis0_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim1_axis0_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim1_axis0_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_2();
bool is_ignored_axis_quant8_dim1_axis0_neg_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_2,
          is_ignored_axis_quant8_dim1_axis0_neg_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2();
bool is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2,
          is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized();
bool is_ignored_zero_sized(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_zero_sized) {
  Execute(device,
          createTestModel_zero_sized,
          is_ignored_zero_sized,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized());
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized) {
  const Model model = createTestModel_zero_sized();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape();
bool is_ignored_zero_sized_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape,
          is_ignored_zero_sized_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_relaxed();
bool is_ignored_zero_sized_relaxed(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_zero_sized_relaxed) {
  Execute(device,
          createTestModel_zero_sized_relaxed,
          is_ignored_zero_sized_relaxed,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_relaxed());
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_relaxed) {
  const Model model = createTestModel_zero_sized_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_relaxed_dynamic_output_shape();
bool is_ignored_zero_sized_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_relaxed_dynamic_output_shape,
          is_ignored_zero_sized_relaxed_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_quant8();
bool is_ignored_zero_sized_quant8(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_zero_sized_quant8) {
  Execute(device,
          createTestModel_zero_sized_quant8,
          is_ignored_zero_sized_quant8,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_quant8());
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_quant8) {
  const Model model = createTestModel_zero_sized_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_quant8_dynamic_output_shape();
bool is_ignored_zero_sized_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_quant8_dynamic_output_shape,
          is_ignored_zero_sized_quant8_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_quant8_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_float16();
bool is_ignored_zero_sized_float16(int);

TEST_F(NeuralnetworksHidlTest, softmax_v1_2_zero_sized_float16) {
  Execute(device,
          createTestModel_zero_sized_float16,
          is_ignored_zero_sized_float16,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_float16());
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_float16) {
  const Model model = createTestModel_zero_sized_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

namespace generated_tests::softmax_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16_dynamic_output_shape();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

Model createTestModel_zero_sized_float16_dynamic_output_shape();
bool is_ignored_zero_sized_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_float16_dynamic_output_shape,
          is_ignored_zero_sized_float16_dynamic_output_shape,
          ::generated_tests::softmax_v1_2::get_examples_zero_sized_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_float16_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::softmax_v1_2::get_examples_zero_sized_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

