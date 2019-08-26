// Generated from bidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_relaxed());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_float16());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_time_major) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_time_major_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_float16());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_dynamic_output_shape_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_relaxed());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_float16());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed_3();
bool is_ignored_dynamic_output_shape_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_3,
          is_ignored_dynamic_output_shape_relaxed_3,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16_3();
bool is_ignored_dynamic_output_shape_float16_3(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_3,
          is_ignored_dynamic_output_shape_float16_3,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_time_major_merge_outputs_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_reversed_inputs) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_relaxed_4();
bool is_ignored_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed) {
  Execute(device,
          createTestModel_relaxed_4,
          is_ignored_relaxed_4,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_relaxed());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed) {
  const Model model = createTestModel_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_float16_4();
bool is_ignored_float16_4(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16) {
  Execute(device,
          createTestModel_float16_4,
          is_ignored_float16_4,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_float16());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16) {
  const Model model = createTestModel_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_dynamic_output_shape_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed_4();
bool is_ignored_dynamic_output_shape_relaxed_4(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_4,
          is_ignored_dynamic_output_shape_relaxed_4,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_reversed_inputs_dynamic_output_shape_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16_4();
bool is_ignored_dynamic_output_shape_float16_4(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_4,
          is_ignored_dynamic_output_shape_float16_4,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_reversed_inputs_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_aux_input) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_relaxed_5();
bool is_ignored_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed) {
  Execute(device,
          createTestModel_relaxed_5,
          is_ignored_relaxed_5,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_relaxed());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed) {
  const Model model = createTestModel_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_float16_5();
bool is_ignored_float16_5(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_aux_input_float16) {
  Execute(device,
          createTestModel_float16_5,
          is_ignored_float16_5,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_float16());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_float16) {
  const Model model = createTestModel_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_dynamic_output_shape_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed_5();
bool is_ignored_dynamic_output_shape_relaxed_5(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_5,
          is_ignored_dynamic_output_shape_relaxed_5,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_aux_input_dynamic_output_shape_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16_5();
bool is_ignored_dynamic_output_shape_float16_5(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_5,
          is_ignored_dynamic_output_shape_float16_5,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_aux_input_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_relaxed_6();
bool is_ignored_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed) {
  Execute(device,
          createTestModel_relaxed_6,
          is_ignored_relaxed_6,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_relaxed());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed) {
  const Model model = createTestModel_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_float16_6();
bool is_ignored_float16_6(int);

TEST_F(NeuralnetworksHidlTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16) {
  Execute(device,
          createTestModel_float16_6,
          is_ignored_float16_6,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_float16());
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16) {
  const Model model = createTestModel_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_dynamic_output_shape();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_relaxed_6();
bool is_ignored_dynamic_output_shape_relaxed_6(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_6,
          is_ignored_dynamic_output_shape_relaxed_6,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

namespace generated_tests::bidirectional_sequence_rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

Model createTestModel_dynamic_output_shape_float16_6();
bool is_ignored_dynamic_output_shape_float16_6(int);

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_6,
          is_ignored_dynamic_output_shape_float16_6,
          ::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::bidirectional_sequence_rnn::get_examples_blackbox_regular_and_aux_input_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

