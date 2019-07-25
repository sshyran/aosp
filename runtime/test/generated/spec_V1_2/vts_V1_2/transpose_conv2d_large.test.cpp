// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8());
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_inputs_as_internal();
bool is_ignored_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal,
          is_ignored_quant8_all_inputs_as_internal,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs();
bool is_ignored_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs,
          is_ignored_quant8_all_tensors_as_inputs,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8();
bool is_ignored_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_channelQuant8) {
  Execute(device,
          createTestModel_channelQuant8,
          is_ignored_channelQuant8,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8());
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8) {
  const Model model = createTestModel_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_dynamic_output_shape();
bool is_ignored_channelQuant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_channelQuant8_dynamic_output_shape,
          is_ignored_channelQuant8_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_dynamic_output_shape) {
  const Model model = createTestModel_channelQuant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_inputs_as_internal();
bool is_ignored_channelQuant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channelQuant8_all_inputs_as_internal,
          is_ignored_channelQuant8_all_inputs_as_internal,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal) {
  const Model model = createTestModel_channelQuant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs();
bool is_ignored_channelQuant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_channelQuant8_all_tensors_as_inputs,
          is_ignored_channelQuant8_all_tensors_as_inputs,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs) {
  const Model model = createTestModel_channelQuant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

