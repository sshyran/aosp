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

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_relaxed();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_float16();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_float16());
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

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_relaxed();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_float16();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

