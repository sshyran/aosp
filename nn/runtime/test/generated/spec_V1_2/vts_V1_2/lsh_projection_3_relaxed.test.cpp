// Generated from lsh_projection_3_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::lsh_projection_3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, lsh_projection_3_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::lsh_projection_3_relaxed::get_examples());
}

TEST_F(ValidationTest, lsh_projection_3_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_3_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::lsh_projection_3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, lsh_projection_3_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::lsh_projection_3_relaxed::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, lsh_projection_3_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_3_relaxed::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::lsh_projection_3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, lsh_projection_3_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, lsh_projection_3_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::lsh_projection_3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed {

Model createTestModel_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, lsh_projection_3_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, lsh_projection_3_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::lsh_projection_3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, lsh_projection_3_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, lsh_projection_3_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::lsh_projection_3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, lsh_projection_3_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, lsh_projection_3_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::lsh_projection_3_relaxed::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection_3_relaxed

