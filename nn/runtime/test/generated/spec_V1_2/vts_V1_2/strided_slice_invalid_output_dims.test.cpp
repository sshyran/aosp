// Generated from strided_slice_invalid_output_dims.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel();
bool is_ignored(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_dynamic_output_shape());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_all_inputs_as_internal());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_all_tensors_as_inputs());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_all_tensors_as_inputs_dynamic_output_shape());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

namespace generated_tests::strided_slice_invalid_output_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_invalid_output_dims::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateFailure(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

