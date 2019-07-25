// Generated from unidirectional_sequence_lstm_layer_norm_cifg_peephole.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_layer_norm_cifg_peephole_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole

