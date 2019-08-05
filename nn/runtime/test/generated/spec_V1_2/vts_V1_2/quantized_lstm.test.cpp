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

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::quantized_lstm::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, quantized_lstm_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_dynamic_output_shape_relaxed());
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

std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_dynamic_output_shape_relaxed();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::quantized_lstm::get_examples_constant_weights_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantized_lstm::get_examples_constant_weights_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

