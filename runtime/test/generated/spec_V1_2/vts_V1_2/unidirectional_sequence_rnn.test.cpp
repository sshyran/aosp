// Generated from unidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_time_major) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_time_major_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

