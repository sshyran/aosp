// Generated from quantized_lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::quantized_lstm::get_examples());
}

TEST_F(ValidationTest, quantized_lstm) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::quantized_lstm::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, quantized_lstm_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::quantized_lstm::get_examples_relaxed());
}

TEST_F(ValidationTest, quantized_lstm_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::quantized_lstm::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, quantized_lstm_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_all_inputs_as_internal());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_tensors_as_inputs();
bool is_ignored_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs,
          is_ignored_relaxed_all_tensors_as_inputs,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

